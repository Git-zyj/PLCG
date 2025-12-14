/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4003951104073204796;
    var_18 -= var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 += ((60691 ? 16363 : 4003951104073204796));
        arr_3 [2] = var_0;
        var_20 = ((var_11 ? ((((60691 / var_7) ? -1 : -112))) : var_15));
        var_21 = ((!((min((!var_11), (~var_2))))));
        arr_4 [1] = ((65528 ? 16386 : 22589));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_22 = (min(var_22, (((60714 <= -32764) ? (((((var_6 ? 60665 : var_8))) ? ((801389710403074874 ? -801389710403074889 : 29838)) : (((min(-23, var_0)))))) : ((((801389710403074888 ? 32743 : 1))))))));
        var_23 *= (((((-73 ? 189 : 49172))) ? -32764 : var_0));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_24 = (-1 % var_4);
        arr_9 [i_2] = (((arr_8 [i_2]) ? -49159 : ((1 >> (var_16 - 38309)))));
    }
    var_25 = var_10;
    #pragma endscop
}
