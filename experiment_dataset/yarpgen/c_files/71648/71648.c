/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_19 = ((var_16 ? -7117594118274665054 : -var_9));
        arr_3 [3] = ((var_8 ? 7117594118274665054 : (((-4112601108728381715 ? var_17 : ((var_15 ? var_4 : 0)))))));
        arr_4 [i_0] = (max(var_16, (min(353753190, (min(var_16, 0))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_20 &= (((((~((max(var_18, var_17)))))) ? 9123 : var_18));
        arr_7 [i_1] [i_1] = (((((0 ? var_12 : 16424467845699821245))) ? (((!0) ? (~14494121600937442663) : (((var_4 ? var_5 : var_8))))) : var_7));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_10 [1] [1] = 996125818;
        arr_11 [5] = (((((((max(-7117594118274665054, -583170070))) ? var_11 : -2049733093))) ? ((((max(1, var_16))) ? (~9007199254740990) : (((var_1 ? var_6 : -8370594210558097675))))) : ((max(-7117594118274665054, var_18)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_17 [i_2] |= (133 ? (((var_3 ? 3 : -124))) : ((var_11 ? (~1436173544) : 11351962241497644438)));
                    var_21 = 8566551992617282068;
                }
            }
        }
    }
    var_22 = (min(var_22, (!var_16)));
    var_23 = 253;
    #pragma endscop
}
