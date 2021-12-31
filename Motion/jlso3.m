function jl = jlso3(v)
ag = norm(v);
n = v/ag;
jl = sin(ag)/ag*eye(3)+(eye(3)-sin(ag)/ag)*(n*n')+(1-cos(ag))/ag*vec2ssm(n);