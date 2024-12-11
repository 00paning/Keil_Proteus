//arithmetic operations +,-,*,/,++,

mov a,#25h  //first number
mov b,#12h  //second number
add a,b
mov 40h,a  //result moved to 40h ram memory location
mov a,#25h
subb a,b
mov 41h,a  //subtraction result moved to 41h ram memory location
mul ab
mov 42h,a
mov 43h ,b
mov a,#25h
mov b,#12h
div ab
mov 44h,a
mov 45h,b
mov a,#25h
inc a
mov 46h,a
dec a
mov 47h ,a
end