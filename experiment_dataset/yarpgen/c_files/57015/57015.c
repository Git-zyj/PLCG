/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (arr_3 [i_0]);
        var_20 -= ((((((25045 | 133) ^ (arr_3 [8])))) ? (((!((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : var_3)))))) : (((((((((arr_2 [i_0] [i_0]) + 2147483647)) >> (((arr_0 [i_0] [6]) - 15997))))) <= (arr_3 [i_0]))))));
        var_21 -= (arr_0 [7] [i_0]);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_22 = (((192 / -32634) * (((arr_3 [i_1 - 1]) ? (arr_0 [i_1 + 2] [i_1 + 2]) : var_15))));
        arr_7 [3] = ((((((var_16 ? var_18 : 255)))) ? var_13 : ((~(arr_4 [i_1 + 3])))));
    }
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        var_23 = (~var_10);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_18 [i_2] = arr_4 [i_4 - 1];
                        var_24 = (((~var_0) < (arr_0 [i_5] [i_5])));
                        arr_19 [0] [i_3] [i_4 - 1] [i_2] = (((arr_2 [15] [i_4]) < (((arr_16 [i_2 - 4] [i_2 - 1]) ? var_13 : var_15))));
                        var_25 -= (((((3458968164 ^ (arr_10 [i_3])))) ? ((~((((arr_9 [i_3]) || (arr_14 [i_2 - 1] [i_3] [i_3] [4])))))) : var_13));
                    }
                }
            }
        }
        var_26 = (var_9 - ((var_1 ? (14 + var_8) : 20128)));
        var_27 = ((((233 ? -4813 : -487)) == (var_12 * 63)));
        var_28 = (max(((((((arr_1 [i_2]) % var_4))) ? (var_11 > 1477979661) : var_1)), (arr_9 [i_2])));
    }
    var_29 = ((var_5 ? ((var_12 ^ ((var_4 ? 10026 : var_17)))) : var_17));
    #pragma endscop
}
