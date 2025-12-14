/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(3753533461, (((var_6 ? (~-89) : ((max(var_9, var_2))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = ((~(((-32767 - 1) & 2091632445))));
        var_18 = (!1);
        var_19 -= ((!(arr_0 [i_0])));
        arr_5 [i_0] [7] = (((arr_2 [i_0]) <= 9));
    }
    var_20 &= 65528;
    var_21 = (!18446744073709551602);
    var_22 &= (((max(((-10 ? var_0 : var_12)), ((max(var_12, var_14))))) << (var_12 - 1221075527)));
    #pragma endscop
}
