ORG 00H
Mov p0,#0FFH
Mov P1,#0FFH
Mov p2,#00H
Mov p3,#00H

L1: Mov R1,#00H
Mov B,p0
Mov A,p1
CLR C
Add A,B
Jnc L2
Inc R1
L2: Mov p2,R1
//R1 to port2
Mov P3,A
SJMP L1
END