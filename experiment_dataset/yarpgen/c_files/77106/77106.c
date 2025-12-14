/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((((var_10 ? var_6 : var_15)) - ((max(var_3, var_3))))) + var_5));
    var_19 *= (max((max((max(var_6, var_10)), (max(var_3, var_6)))), (((-var_2 && ((max(var_8, var_13))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(var_9, var_7))) == ((max(var_2, var_5)))));
        arr_3 [i_0] [i_0] = var_15;
        var_20 = (min(var_20, (((((!var_15) ? ((var_6 ? var_2 : var_4)) : var_14))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (max(((max(var_1, (var_9 || var_6)))), ((max(var_1, var_11)))));
        var_21 *= (max(var_8, ((var_12 ? var_14 : var_6))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_22 = (max(((((var_13 || var_11) == ((var_14 ? var_12 : var_14))))), (max(((var_2 ? var_4 : var_16)), -var_16))));
                    var_23 = (((((((max(var_4, var_14))) ? (var_17 <= var_3) : ((min(var_1, var_9)))))) ? (((var_4 ^ var_0) ? ((max(var_0, var_9))) : var_10)) : var_0));
                    var_24 = ((max(var_14, var_10)));
                }
            }
        }
        arr_14 [0] [10] |= ((((var_9 <= (max(var_11, var_15)))) && ((max(var_11, (var_9 == var_0))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_25 = var_10;
        var_26 = (min(var_26, var_13));
        var_27 -= ((max((max(var_14, var_16)), ((max(var_0, var_8))))));
    }
    var_28 = (max(var_28, ((max(var_12, var_4)))));
    var_29 = var_11;
    #pragma endscop
}
