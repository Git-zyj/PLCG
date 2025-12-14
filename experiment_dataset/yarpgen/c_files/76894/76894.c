/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 0;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (max(var_16, (arr_10 [6] [i_1 + 1] [i_2] [i_3])));
                        arr_11 [i_3] = ((((((1 ? var_12 : 1))) ? (~939107833) : (arr_10 [i_1 - 1] [1] [i_1 - 2] [i_1 + 1]))) ^ var_14);
                        arr_12 [i_0] [i_2] [i_1 - 1] [i_0] = ((((67108863 << (((arr_7 [i_3] [i_0] [i_0]) - 2477687561024706263)))) << (((arr_10 [7] [i_1 + 1] [i_2] [8]) - 79))));
                        arr_13 [i_3] [i_3] [13] [10] [i_0] = (((((-(var_11 / 939107833)))) - ((var_4 ? (max((arr_3 [i_3] [i_1]), var_0)) : var_14))));
                        var_17 = ((~((0 ? 0 : 192))));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        arr_16 [3] [1] [3] = (((((var_14 & (arr_0 [i_1 - 1] [i_2])))) ? (((0 == 0) ? (-81 && var_0) : (arr_10 [i_1 + 1] [i_4] [11] [i_4 - 1]))) : (((!((((arr_4 [9] [9] [i_4]) ? var_13 : 13375))))))));
                        arr_17 [i_0] [i_1] = -0;
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        arr_22 [6] [i_1 - 2] [9] [i_5 + 1] = 4294967295;
                        arr_23 [i_2] [i_1 + 1] = (arr_7 [i_5 + 1] [11] [i_0]);
                        var_18 = (min(var_18, 0));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(((((max(8608, var_10))) ? 4294967295 : (max((arr_20 [i_0] [i_1] [i_2] [i_0]), (arr_14 [i_0] [i_1] [0] [i_5 + 1]))))))));
                        arr_25 [i_0] [7] [7] [i_2] [i_2] [i_5 + 1] = (max(((max((((arr_4 [i_5 + 1] [i_2] [2]) ? (arr_20 [i_0] [i_2] [i_1 - 2] [i_0]) : (arr_18 [i_5 + 1] [i_5 - 1] [i_2] [i_1] [1]))), (!var_3)))), var_6));
                    }
                    arr_26 [i_0] [i_0] = (arr_19 [i_0] [i_0] [i_0] [i_0]);
                    var_19 = (max(var_19, var_7));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_20 = (arr_28 [i_6]);
        var_21 = (min(var_21, ((((max(var_1, (arr_29 [i_6])))) ? ((((max(-5366678369838309169, -13))) ? (((~(arr_28 [7])))) : (((arr_29 [i_6]) ? 5366678369838309169 : 1890688151635092631)))) : 21520))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_22 = (max(var_22, (((var_3 ? (((arr_32 [1]) ? (arr_31 [i_7]) : 11744810476625310476)) : ((((arr_32 [i_7]) ? var_13 : (max(7997, 1517647746))))))))));
        var_23 = (min(var_23, ((((arr_31 [i_7]) ? var_10 : (arr_31 [i_7]))))));
    }
    var_24 &= var_10;
    #pragma endscop
}
