/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] |= (arr_0 [i_0]);
        arr_3 [i_0] = var_4;
        var_17 = (((!var_15) ? ((((!(arr_0 [i_0]))))) : var_10));
    }
    var_18 ^= ((!((((((-911671553644578656 ? 911671553644578655 : 25))) ? 911671553644578655 : (!110))))));
    #pragma endscop
}
