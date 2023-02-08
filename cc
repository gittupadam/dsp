int in1[4]={1,2,3,4}, in2[4]={1,2,3,4}, out[4], temp[10], i, sum=0, j;
void rot(int *x);
void main()
{
for(i=0;i<4;i++)
{
if(i == 1)
temp[i+2] = in1[i];
else if(i == 3)
temp[i-2] = in1[i];
else
temp[i] = in1[i];
}
for(i=0;i<4;i++)
{
sum = 0;
for(j=0;j<4;j++)
{
sum+=(in2[j] * temp[j]);
}
out[i] = sum;
rot(temp);
}
while(1);
}
void rot(int *x)
{
int t;
t = x[0];
x[0] = x[3];
x[3] = x[2];
x[2] = x[1];
x[1] = t;
}
