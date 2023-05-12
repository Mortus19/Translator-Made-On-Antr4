grammar gram;
INT: [0-9]+;
SEP: ';';
SEP_FOR_FUNCTIONS: ',';
WS: [ \t\r\n]+ -> skip;
MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';
EQUAL: '=';
PRINT: 'print';
OPEN_BRAKET: '(';
CLOSE_BRAKET: ')';
VAR: [a-zA-Z] [a-zA-Z0-9]*;
prog: expr # OneLineProg
| assign # OneLineProgAssign
| print_var #Print
| prog SEP prog EOF? # MultLineProg
;
print_var: PRINT OPEN_BRAKET VAR CLOSE_BRAKET #PrintVariable;

expr: SUB expr # NegativeExpr
| expr op=(MUL | DIV) expr # MulDiv
| expr op=(ADD | SUB) expr # AddSub
| INT # int
| '(' expr ')' # parens
| VAR #OnlyVar
;

assign: VAR EQUAL expr #Assigned
;