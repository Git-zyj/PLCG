/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(0, var_6))) < ((((max(var_4, -126))) ? 1 : 1))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(((max(1, (arr_1 [i_0])))), (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [4] [i_0] [i_0] = ((-40 ? (arr_3 [i_0]) : ((((((arr_13 [i_0] [1] [i_0] [1] [i_0] [i_0]) + 1))) ? ((max(95, (arr_10 [i_0] [i_1 - 1] [i_0])))) : (((arr_0 [i_0]) ? 1 : 46))))));
                                var_12 = ((((((arr_14 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 1]) ^ 1))) ? ((min(1, var_6))) : ((min(var_8, (arr_12 [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 2] [i_3] [i_0] [i_1]))))));
                                var_13 -= ((1 ? ((((1 ? 1 : 96)) + -97)) : (min(((min(var_5, (arr_8 [i_0] [i_1] [6])))), ((var_1 ? var_9 : var_0))))));
                                var_14 -= ((~((max((min(1, var_8)), 1)))));
                                var_15 = (((((127 ? (1 / -61) : (arr_14 [i_0] [i_1 - 1] [1] [i_0] [i_0])))) ? 33 : (arr_12 [i_4] [i_0] [1] [i_2] [i_1] [i_0] [i_0])));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] = (((((arr_2 [i_1 - 2] [i_0]) / 1)) ^ (arr_4 [i_1])));
                    arr_17 [i_2] [i_0] [i_0] [i_0] = min(122, -99);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = (!1);
        arr_21 [i_5] [i_5] = (((((var_6 ? var_9 : var_9))) ? ((1 ? 1 : (arr_9 [i_5] [i_5] [i_5]))) : (arr_7 [i_5])));
    }
    var_16 = (((((1 == ((1 ? var_6 : var_7))))) - (((0 == 1) ? ((-43 ? var_9 : -1)) : var_2))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                {
                    var_17 = var_7;
                    var_18 -= (((((((var_4 ? var_8 : 116)) << ((23 ? 1 : 1))))) ? 1 : (~1)));
                    arr_30 [3] [i_7] [i_8] = -8;
                }
            }
        }
    }
    #pragma endscop
}
