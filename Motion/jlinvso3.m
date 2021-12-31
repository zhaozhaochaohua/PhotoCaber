function jl = jlinvso3(v)
ag = norm(v);
n = v/theta;
jl = 0.5*ag*cot(0.5*ag)*eye(3)+(1-0.5*ag*cot(0.5*ag))*(n*n')-0.5*ag*vec2ssm(n);