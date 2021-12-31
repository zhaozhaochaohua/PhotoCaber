function quat = fwdDynXY(e2,e3)
dev = 12;
b = pi/dev;
g = pi/dev;
sb = sin(b);
cb = cos(b);
sg = sin(g);
cg = cos(g);
ce2 = cos(e2);
se2 = sin(e2);
ce3 = cos(e3);
se3 = sin(e3);

Rb = [cb 0 sb;
      0 1 0;
      -sb 0 cb];
Rg = [cg 0 sg;
      0 1 0;
      -sg 0 cg];

Re2 = [ce2 -se2 0;
       se2 ce2 0;
       0 0 1];
Re3 = [ce3 -se3 0;
       se3 ce3 0;
       0 0 1];

Rot2 = Re2*Rb;
Rot3 = Re3*Rg;
Rot = Rot2*Rot3;
quat = dcm2quat(Rot);