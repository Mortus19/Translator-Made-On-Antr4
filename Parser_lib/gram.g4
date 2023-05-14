grammar gram;


prog: expr # OneLineProg
| assign # OneLineProgAssign
| print_any #Print
| create_function #CreateSomeFunction
| prog SEP prog EOF? # MultLineProg
;

create_function: DEF NAME OPEN_BRAKET parametrs CLOSE_BRAKET EQUAL expr #CreateFunction;

call_function: NAME OPEN_BRAKET arguments CLOSE_BRAKET #CallFunction;

print_any: PRINT OPEN_BRAKET arguments CLOSE_BRAKET # PrintVariable
;

arguments : expr (SEP_FOR_FUNCTIONS expr)* #OnlyArg 
;
parametrs: NAME (SEP_FOR_FUNCTIONS NAME)* #OnlyParam
;

assign: var EQUAL expr #Assigned
;

expr: SUB expr # NegativeExpr
| var #OnlyVar
| expr op=(MUL | DIV) expr # MulDiv
| expr op=(ADD | SUB) expr # AddSub
| dbl # Double
| call_function #FuncInExpr 
| '(' expr ')' # parens
;

var : NAME #InitVar;

dbl: INT #DoubleRule1
| PT INT # DoubleRule2
| INT PT INT # DoubleRule3
;

INT: [0-9]+;
SEP: ';';
SEP_FOR_FUNCTIONS: ',';
MUL: '*';
DIV: '/';
DEF: 'def';
PT: '.';
ADD: '+';
SUB: '-';
EQUAL: '=';
PRINT: 'print';
OPEN_BRAKET: '(';
CLOSE_BRAKET: ')';
NAME: [a-zA-Z] [a-zA-Z0-9]*;
WS: [ \t\r\n]+ -> skip;