grammar gram;
INT: [0-9]+;
SEP: ';';
WS: [ \t\r\n]+ -> skip;
MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';
EQUAL: '=';
VAR: [a-zA-Z] [a-zA-Z0-9]*;
prog: expr # OneLineProg
| assign # OneLineProgAssign
| prog SEP prog EOF? # MultLineProg
;

expr: SUB expr # NegativeExpr
| expr op=(MUL | DIV) expr # MulDiv
| expr op=(ADD | SUB) expr # AddSub
| INT # int
| '(' expr ')' # parens
| VAR #OnlyVar
;

assign: VAR EQUAL expr #Assigned
;