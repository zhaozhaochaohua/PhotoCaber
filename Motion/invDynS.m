function [e11,e21,e31, e12, e22, e32] = invDynS(quat)
dev = 12;
a = pi/dev;
b = pi/dev;
g = pi/dev;
sa = sin(a);
ca = cos(a);
sb = sin(b);
cb = cos(b);
sg = sin(g);
cg = cos(g);
m = quat2dcm(quat);
a11 = m(1,1);
a12 = m(1,2);
a13 = m(1,3);
a21 = m(2,1);
a22 = m(2,2);
a23 = m(2,3);
a31 = m(3,1);
a32 = m(3,2);
a33 = m(3,3);
ce2 = (sg*a31-cg*a33+ca*cb)/(sa*sb);
se2abs = sqrt(1-ce2^2);
e21 = acos(ce2);
e22 = -e21;

t1 = a31^2*cg^2+sin(2*g)*a31*a33+a32^2-a33^2*cg^2+a33^2;
t2 = se2abs;
se31 = (a32*ca*sb+a32*sa*cb*ce2+a31*cg*sa*t2+a33*sa*sg*t2)/t1;
ce31 = -(a31*ca*cg*sb-a32*sa*t2+a33*ca*sb*sg+a31*cb*cg*sa*ce2+a33*cb*ce2*sa*sg)/t1;
e31 = atan2(se31, ce31);
se32 = (a32*ca*sb+a32*sa*cb*ce2-a31*cg*sa*t2-a33*sa*sg*t2)/t1;
ce32 = -(a31*ca*cg*sb+a32*sa*t2+a33*ca*sb*sg+a31*cb*cg*sa*ce2+a33*cb*ce2*sa*sg)/t1;
e32 = atan2(se32, ce32);

t3 = -ca^2*cb^2*ce2^2-ca^2*cb^2+ca^2*ce2^2+2*sa*sb*ca*cb*ce2+cb^2*ce2^2-ce2^2+1;
se11 = (a23*cb*cg*sa-a21*cb*sa*sg-a13*cg*sb*t2+a11*sb*sg*t2+a23*ca*ce2*cg*sb-a21*ca*ce2*sb*sg)/t3;
ce11 = (a13*cb*cg*sa-a11*cb*sa*sg+a23*cg*sb*t2-a21*sb*sg*t2+a13*ca*ce2*cg*sb-a11*ca*ce2*sb*sg)/t3;
e11 = atan2(se11, ce11);
se12 = (a23*cb*cg*sa-a21*cb*sa*sg+a13*cg*sb*t2-a11*sb*sg*t2+a23*ca*ce2*cg*sb-a21*ca*ce2*sb*sg)/t3;
ce12 = (a13*cb*cg*sa-a11*cb*sa*sg-a23*cg*sb*t2+a21*sb*sg*t2+a13*ca*ce2*cg*sb-a11*ca*ce2*sb*sg)/t3;
e12 = atan2(se12, ce12);


