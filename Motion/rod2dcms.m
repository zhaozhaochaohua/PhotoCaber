function dcm = rod2dcms(v)
ag = norm(v);
n = v/ag;
dcm = cos(ag)*eye(3)+(1-cos(ag))*(n*n')-sin(ag)*vec2ssm(n);
dcm = simplify(dcm);