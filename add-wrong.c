succ: (0,0)->(0,0), (1,0)->(1,1), (1,1)->(1,1);
pred: (0,0)->(0,0), (1,0)->(1,0), (1,1)->(1,1);
greater_than_zero: (0,0)->(0,0), (1,0)->(1,0), (1,1)->(1,1);
x: 1;
y: 1;

while (greater_than_zero(x)) {
    x = pred(x);
    y = succ(y);
}

