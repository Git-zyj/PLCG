/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? (((((var_7 ? var_9 : var_4))))) : (((var_3 + var_3) & (var_8 + var_3)))));
    var_12 -= var_7;
    var_13 = var_5;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0 - 4] [i_1] = ((var_3 ? (((var_5 ? var_9 : var_0))) : var_8));
            var_14 = ((var_1 ? var_4 : var_1));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_15 &= (((((((var_0 ? var_0 : var_7))) || ((min(var_6, var_10))))) ? (var_10 && var_2) : var_5));
            var_16 ^= var_10;
            arr_10 [i_2] [i_2] [i_2] = var_6;
        }
        var_17 = min((((var_10 ? var_6 : var_0))), (((var_3 & var_5) ? (var_1 >= var_9) : var_9)));
    }
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        arr_14 [i_3] = ((((((var_4 ? var_10 : var_2)) >= var_9)) ? (((var_7 ? (var_5 > var_1) : var_9))) : ((var_0 ? var_1 : var_8))));
        arr_15 [i_3] = ((((max((((var_8 ? var_9 : var_0))), ((var_10 ? var_8 : var_9))))) && ((((var_2 <= var_6) ? ((var_8 ? var_7 : var_2)) : (var_9 + var_9))))));
        var_18 |= ((((((var_10 ? var_4 : var_0)))) ? ((((var_0 < (max(var_8, var_10)))))) : ((var_3 ? var_0 : var_8))));
    }
    #pragma endscop
}
