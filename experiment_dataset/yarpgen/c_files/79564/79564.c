/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 += (max(var_16, (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (((~(((!(arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 = (var_7 - var_6);
        var_20 = (((arr_3 [1]) ? ((var_15 ? (arr_4 [i_1]) : var_14)) : (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {
                    var_21 = var_0;
                    var_22 -= ((192 ? ((~(min((arr_4 [i_1]), (arr_8 [2]))))) : ((max(((((arr_7 [i_1] [i_1] [i_1] [i_2]) && 8160))), (arr_5 [i_1] [i_1]))))));
                    var_23 &= (((((var_10 > (arr_6 [i_3] [i_2] [i_1])))) / (~var_16)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_24 = (arr_4 [i_1]);
                                arr_13 [i_1] [i_3] [13] [i_1] = ((!(arr_9 [0] [i_1] [i_1] [i_1] [i_1] [i_1])));
                                arr_14 [i_3] [i_2] [i_3 + 1] [i_4] [i_5] [i_5] [i_3] = (arr_9 [i_1] [i_1] [i_2] [i_4] [i_5] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_4;

    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        var_26 += (min(((((((~(arr_12 [i_6 - 2] [i_6] [i_6] [i_6 - 2])))) ? (((arr_6 [i_6] [i_6 - 1] [i_6]) ? 816124139945253543 : (arr_17 [i_6]))) : (~19)))), (max((((arr_16 [i_6]) ? 14077137483689414437 : 2985400166766150869)), ((max(1, (arr_0 [i_6]))))))));
        arr_18 [i_6 + 1] = min(var_16, ((min(var_10, var_4))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_27 ^= (((~((((arr_27 [i_8]) || (arr_1 [i_8])))))));
                    arr_29 [i_7] [i_7] [i_7] [12] = ((((((-(arr_5 [i_7] [i_7])))) <= (((arr_24 [i_9] [i_8] [i_7]) ? var_7 : (arr_0 [i_9]))))));
                }
            }
        }
        var_28 = (arr_6 [i_7] [i_7] [i_7]);
    }
    #pragma endscop
}
