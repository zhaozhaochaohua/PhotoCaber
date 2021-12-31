% convert skew-symmetric matrix to a vector
function v = ssm2vec(M)
v = [M(3,2); M(1,3); M(2,1)];