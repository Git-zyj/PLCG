/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = var_2;
    var_16 = (min(var_16, ((((var_1 ? ((1 ? 1689096216 : -53)) : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 = (((((((((arr_5 [i_0 + 2]) ? var_0 : var_5))) ? (arr_3 [i_1 - 1]) : (arr_9 [i_0 + 4] [i_0 - 3] [i_0] [i_0])))) ? (arr_1 [i_2 - 1] [i_0]) : (arr_3 [i_0 + 2])));
                    var_18 = (((((~((var_12 ? var_13 : (arr_5 [i_0])))))) ? ((((arr_1 [i_2 + 2] [i_0]) ? var_8 : (arr_1 [i_2 + 1] [i_0])))) : (arr_6 [i_0 + 4] [i_0])));
                    var_19 = (i_0 % 2 == 0) ? ((+(((arr_6 [i_1 + 3] [i_0 - 2]) << (((arr_8 [i_0]) + 24676)))))) : ((+(((arr_6 [i_1 + 3] [i_0 - 2]) << (((((arr_8 [i_0]) + 24676)) - 48796))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = (((arr_12 [i_3]) >= (arr_10 [i_3])));
        var_21 = (((arr_13 [i_3]) ? ((var_0 ? var_7 : (arr_11 [i_3] [11]))) : (arr_12 [i_3])));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_22 = (i_4 % 2 == 0) ? ((min(((var_12 ? var_9 : (arr_14 [i_4]))), (((arr_14 [i_4]) << (((arr_14 [i_4]) - 191689362509241592))))))) : ((min(((var_12 ? var_9 : (arr_14 [i_4]))), (((arr_14 [i_4]) << (((((arr_14 [i_4]) - 191689362509241592)) - 9216515954792407389)))))));
                    var_23 ^= (~var_2);
                }
            }
        }
        var_24 *= (arr_20 [i_4] [i_4 + 4] [i_4] [i_4 + 4]);
        arr_22 [i_4] = ((-(((((158 ? 32233 : 1))) ? (-1 || 1576738193) : 206462042252034392))));
    }
    #pragma endscop
}
