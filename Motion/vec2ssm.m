% convert a vector to skew-symmetric matrix
function M = vec2ssm(v)
M = [0 -v(3) v(2);
     v(3) 0 -v(1);
     -v(2) v(1) 0];