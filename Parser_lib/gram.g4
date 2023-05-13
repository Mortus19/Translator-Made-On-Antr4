grammar gram;
INT: [0-9]+;
SEP: ';';
SEP_FOR_FUNCTIONS: ',';
WS: [ \t\r\n]+ -> skip;
MUL: '*';
DIV: '/';
DEF: 'def';
PT: '.';
ADD: '+';
CALL: 'call';
SUB: '-';
EQUAL: '=';
PRINT: 'print';
OPEN_BRAKET: '(';
CLOSE_BRAKET: ')';
VAR: [a-zA-Z] [a-zA-Z0-9]*;

create_function: DEF VAR OPEN_BRAKET only_var_parametrs CLOSE_BRAKET EQUAL expr #CreateFunction;

call_function: CALL VAR OPEN_BRAKET parametrs CLOSE_BRAKET #CallFunction;

prog: expr # OneLineProg
| assign # OneLineProgAssign
| print_any #Print
| prog SEP prog EOF? # MultLineProg
;

dbl: INT #DoubleRule1
| PT INT # DoubleRule2
| INT PT INT # DoubleRule3
;

print_any: PRINT OPEN_BRAKET parametrs CLOSE_BRAKET # PrintVariable
;


parametrs : expr (SEP_FOR_FUNCTIONS expr)* #StringParam 
;
only_var_parametrs: VAR (SEP_FOR_FUNCTIONS VAR)* #OnlyVarParam
;

expr: SUB expr # NegativeExpr
| expr op=(MUL | DIV) expr # MulDiv
| expr op=(ADD | SUB) expr # AddSub
| dbl # Double
| call_function #FuncInExpr 
| '(' expr ')' # parens
| VAR #OnlyVar
 
;

assign: VAR EQUAL expr #Assigned
;

