function R = expms(v)
theta = norm(v);

n = v/theta;
nm = [0 -n(3) n(2);
      n(3) 0 -n(1);
      -n(2) n(1) 0];
R = cos(theta)*eye(3)+(1-cos(theta))*n*n'+sin(theta)*nm;
R = simplify(R);
  