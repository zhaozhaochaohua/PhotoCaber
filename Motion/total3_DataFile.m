% Simscape(TM) Multibody(TM) version: 7.2

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(9).translation = [0.0 0.0 0.0];
smiData.RigidTransform(9).angle = 0.0;
smiData.RigidTransform(9).axis = [0.0 0.0 0.0];
smiData.RigidTransform(9).ID = '';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [0 4 0];  % mm
smiData.RigidTransform(1).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(1).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(1).ID = 'B[base-1:-:bar-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [-3.8815773657593298e-15 -8.8817841970012523e-16 2.157517041450694e-15];  % mm
smiData.RigidTransform(2).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(2).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(2).ID = 'F[base-1:-:bar-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [1.0352761804100843 3.8218789925170995 0];  % mm
smiData.RigidTransform(3).angle = 1.9504410117065303;  % rad
smiData.RigidTransform(3).axis = [-0.51998794185302089 -0.67766147939433508 -0.51998794185302089];
smiData.RigidTransform(3).ID = 'B[bar-1:-:bar-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [-4.5297099404706387e-14 -3.9999999999999902 1.1102230246251565e-14];  % mm
smiData.RigidTransform(4).angle = 2.094395102393197;  % rad
smiData.RigidTransform(4).axis = [-0.57735026918962629 -0.5773502691896254 -0.57735026918962562];
smiData.RigidTransform(4).ID = 'F[bar-1:-:bar-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [1.0352761804100774 3.8218789925170995 0];  % mm
smiData.RigidTransform(5).angle = 1.9504410117065303;  % rad
smiData.RigidTransform(5).axis = [-0.51998794185302089 -0.67766147939433508 -0.51998794185302089];
smiData.RigidTransform(5).ID = 'B[bar-2:-:bar-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [5.773159728050814e-15 -3.9999999999999987 -2.1538326677728037e-14];  % mm
smiData.RigidTransform(6).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(6).axis = [-0.57735026918962584 -0.57735026918962595 -0.57735026918962562];
smiData.RigidTransform(6).ID = 'F[bar-2:-:bar-3]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [-21.218882005531139 2.0000000000000018 -34.000000000000014];  % mm
smiData.RigidTransform(7).angle = 1.9504410117065303;  % rad
smiData.RigidTransform(7).axis = [-0.519987941853021 -0.67766147939433496 -0.51998794185302089];
smiData.RigidTransform(7).ID = 'B[bar-3:-:camera-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [34 3.4194869158454821e-14 -21.967403115258548];  % mm
smiData.RigidTransform(8).angle = 3.1415926535897927;  % rad
smiData.RigidTransform(8).axis = [-8.3266726846886741e-17 -0.70710678118654724 -0.70710678118654802];
smiData.RigidTransform(8).ID = 'F[bar-3:-:camera-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(9).translation = [2.1590909090909092 -2.6439393939390841 45.000000000000007];  % mm
smiData.RigidTransform(9).angle = 0;  % rad
smiData.RigidTransform(9).axis = [0 0 0];
smiData.RigidTransform(9).ID = 'RootGround[base-1]';


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(3).mass = 0.0;
smiData.Solid(3).CoM = [0.0 0.0 0.0];
smiData.Solid(3).MoI = [0.0 0.0 0.0];
smiData.Solid(3).PoI = [0.0 0.0 0.0];
smiData.Solid(3).color = [0.0 0.0 0.0];
smiData.Solid(3).opacity = 0.0;
smiData.Solid(3).ID = '';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 0.45939822271582398;  % kg
smiData.Solid(1).CoM = [-0.015951921358073141 37.967426228073883 8.9087584565082594];  % mm
smiData.Solid(1).MoI = [436.92142143994658 527.78272230101072 508.62736660010142];  % kg*mm^2
smiData.Solid(1).PoI = [15.256303237842207 -0.0651805184725089 0.24567882901873017];  % kg*mm^2
smiData.Solid(1).color = [1 1 1];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = 'camera*:*默认';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0.0079408229864541303;  % kg
smiData.Solid(2).CoM = [4.3396116409741996 3.9688260550639978 -5.7337168158221462e-07];  % mm
smiData.Solid(2).MoI = [1.0112753079111576 1.7366332676922662 0.86616781601264425];  % kg*mm^2
smiData.Solid(2).PoI = [9.9652590018353484e-09 -1.7991238572729161e-08 -0.11152300058952999];  % kg*mm^2
smiData.Solid(2).color = [1 1 1];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = 'bar*:*默认';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.0058246734725068243;  % kg
smiData.Solid(3).CoM = [0 1.9981057536122846 0];  % mm
smiData.Solid(3).MoI = [0.68559896486377603 1.3556900833073418 0.68559896486377658];  % kg*mm^2
smiData.Solid(3).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(3).color = [1 1 1];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = 'base*:*默认';


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(3).Rz.Pos = 0.0;
smiData.RevoluteJoint(3).ID = '';

smiData.RevoluteJoint(1).Rz.Pos = 29.066842943226352;  % deg
smiData.RevoluteJoint(1).ID = '[base-1:-:bar-1]';

smiData.RevoluteJoint(2).Rz.Pos = -20.957559371900228;  % deg
smiData.RevoluteJoint(2).ID = '[bar-1:-:bar-2]';

smiData.RevoluteJoint(3).Rz.Pos = 172.82574235183245;  % deg
smiData.RevoluteJoint(3).ID = '[bar-2:-:bar-3]';

