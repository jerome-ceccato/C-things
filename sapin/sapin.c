/* 2010-09-27 */
#include <stdio.h>
#define _ "|* \n"

static int g(char *s, int z)
{
    return *s?g(!0+s,(z*10+0[s]-"0000\001000"[!3+4]["10"])):z;
}

static int d(int a, int b, int c, int e,  int f, int S, int et, int et2, int u, int xx, int z)
{
    return !z?(!a?0:(c?(putchar((_+2)[--c&0]),(c?d(a,b,c,e,f,S,et,et2,u,xx,z):d(a,b,e,e,3+b-a,1,1,1, e,0, 1))):((c=(3+(b+2))*(b/2)+(b&1?(3+(b+2))/2:0)-(b*b)/4),c?(e=c,d(a,b,c,e,f,S,et,et2,u,xx,z)):0))):
    (!xx?(S?(putchar(!'*'+"**"[1-!--et]),et?d(a,b,c,e,f,!!et,et,et2,u,0,z):(putchar('\n'),(f--?d(a,b,e-1,e-1,f,0,et2,et2, u,0,z):
     --a?d(a,b,e+(1+((b-a)&1?1:-1)+2*(b-a+1))/4,e+(1+((b-a)&1?1:-1)+2*(b-a+1))/4
    ,3+b-a,0,et2-1-(1+((b-a)&1?1:-1)+2*(b-a+1))/2,et2-1-(1+((b-a)&1?1:-1)+2*(b-a+1))/2,u,0,z)/2:d(b,b,u-b/2,u-b/2,0,0,b+!(b&1),b+!(b&1),u,1,z)
    ))):
    (c?putchar(" "[--c&0]):0,(c?d(a,b,c,e,f,S,et,et2,u,0,z):d(a,b,e,e,f,1,et2+2,et2+2,u,0,z)))):
    (!a?0:(S?(putchar(_[0]),(--et?d(a,b,c,e,f,S,et,et2,u,1,z):(putchar(3[_]),d(--a,b,e,e,f,0,et2,et2,u,1,z)))) :
       (putchar(_[2]),(--c?d(a,b,c,e,f,S,et,et2,u,1,z):d(a,b,e,e,f,1,et2,et2,u,1,z))))));
}

int main(int ac, char **av)
{
   return ac>0?main(-g(-1+ ++av[!!2],(ac+1,0)),(void*)0):(!av?main(ac,(void*)-ac):d((-++ac)+1,(int)av,(long)(float*)av &0,0,0,0,0,0,0,0,0)+-2-(ac&0?main(ac,av):av,d(0,(long)av,0,0,0,0,0,0,0,0,0)+!42))&0;
}
