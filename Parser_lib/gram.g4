grammar gram;
INT: [0-9]+;
SEP: ';';
SEP_FOR_FUNCTIONS: ',';
WS: [ \t\r\n]+ -> skip;
MUL: '*';
DIV: '/';
PT: '.';
ADD: '+';
SUB: '-';
EQUAL: '=';
PRINT: 'print';
OPEN_BRAKET: '(';
CLOSE_BRAKET: ')';
VAR: [a-zA-Z] [a-zA-Z0-9]*;

prog: expr # OneLineProg
| assign # OneLineProgAssign
| print_any #Print
| prog SEP prog EOF? # MultLineProg
;

dbl: INT #DoubleRule1
| PT INT # DoubleRule2
| INT PT INT # DoubleRule3
;

print_any: PRINT OPEN_BRAKET string_for_print CLOSE_BRAKET # PrintVariable;
string_for_print: expr #OneLinePrint
| string_for_print SEP_FOR_FUNCTIONS string_for_print EOF? # MultLinePrint
;

expr: SUB expr # NegativeExpr
| expr op=(MUL | DIV) expr # MulDiv
| expr op=(ADD | SUB) expr # AddSub
| dbl # Double
| '(' expr ')' # parens
| VAR #OnlyVar
;

assign: VAR EQUAL expr #Assigned
;