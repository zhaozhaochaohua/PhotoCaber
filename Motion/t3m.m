num = 30;
x = 10*rand([3, num]);
wtar = [pi,0,0];
Rtarget = rod2dcm(wtar);
y = Rtarget*x;
x = x + 0.001*rand([3, num]);
y = y + 0.001*rand([3, num]);

R = eye(3);
iteration = 10;
alpha = 0.1;
e = [];
for i=1:iteration
    ts = [];
    for j=1:num
        t = -vec2ssm(R*x(:,j))*2*(R*x(:,j)-y(:,j));
        ts = [ts t];
    end
    M = zeros(3);
    tt = zeros([3,1]);
    beta = sum((R*x-y).*(R*x-y));
    for k=1:num
        M = M+ts(:,k)*ts(:,k)';
        tt = tt-ts(:,k)*beta(k);
    end
    sts = sum(ts,2);
    tend = linsolve(M, tt)';
    R = rod2dcm(tend)*R;
    e = [e sum(beta)];

end
w = dcm2rod(R);
plot(e);
scatter3(x(1,:), x(2,:), x(3,:), 'blue'); hold on
scatter3(y(1,:), y(2,:), y(3,:), 'black'); hold on

rnum = 20;
angle = norm(w);
e = w/angle;
k = linspace(0, angle, rnum);
ps = zeros([3, num, rnum]);
for i=1:rnum
    w1 = k(i)*e;
    R = rod2dcm(w1);
    ps(:,:,i) = R*x;
end

for i=2:rnum-1
    scatter3(ps(1,:,i), ps(2,:,i), ps(3,:,i),'green'); hold on
end
axis equal
hold on

plot3([0, wtar(1)], [0, wtar(2)], [0, wtar(3)], 'blue')
hold off
】
