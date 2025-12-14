/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_4 ? -232 : ((min((min(var_8, var_5)), var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((-(arr_3 [i_2]))))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_14 = (min(var_14, (((arr_6 [i_0] [i_0] [i_2]) | (arr_0 [i_2 + 3] [i_1 + 2])))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_4] [i_0] [i_2] [i_2] [i_0] [i_1] [i_4] = (((((-(arr_10 [i_0] [i_1] [i_0] [i_4] [i_0])))) ? (arr_10 [i_4] [i_4] [i_2] [i_4] [i_2]) : 24));
                            var_15 = ((arr_6 [i_2 + 3] [i_2 - 2] [i_2 - 2]) ? (arr_5 [i_2 + 3] [i_2 - 2] [i_2] [i_2 + 1]) : (arr_6 [i_2 + 3] [i_2 - 2] [i_2 - 2]));
                            var_16 = ((arr_11 [i_0] [i_4] [i_1 - 1] [i_0] [i_0] [i_2 - 1]) ? (arr_11 [i_0] [i_4] [i_1 + 2] [i_0] [i_0] [i_2 + 1]) : (arr_11 [i_0] [i_4] [i_1 + 1] [i_3] [i_0] [i_2 + 3]));
                            var_17 = -1726375549;
                            var_18 += ((71 + ((var_9 ? (arr_12 [i_3]) : (arr_8 [i_1])))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_19 = (max(var_19, ((min((arr_0 [i_1] [i_1]), ((((((arr_2 [i_0]) - var_7))) ? 21 : (((arr_10 [i_1] [i_2] [i_2] [i_2] [i_0]) ? (arr_0 [i_3] [i_3]) : 13294)))))))));
                            arr_17 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_0] = 238;
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        var_20 = (min(var_20, (((var_6 ? ((13294 ? var_5 : var_3)) : (arr_6 [i_1] [i_1] [i_0]))))));
                        var_21 = (max(var_21, (((~(arr_11 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0]))))));
                        arr_21 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6] = ((var_3 ? (arr_7 [i_1 - 1] [i_2 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : (arr_7 [i_1 + 1] [i_2 + 1] [i_6 + 1] [i_6] [i_6 + 1])));
                        var_22 = 30748;

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_12 [i_2]) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((65359 ? var_2 : var_2))));
                            arr_26 [i_0] [i_1] [i_1] [i_1] [i_7] [i_7] = (((arr_19 [i_2 - 2] [i_2 + 3] [i_2 - 2] [i_2 - 1]) - 5));
                        }
                        for (int i_8 = 4; i_8 < 18;i_8 += 1)
                        {
                            arr_30 [i_2] [i_2] [i_2] [i_1] [i_0] |= var_11;
                            var_23 = (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((((arr_7 [i_0] [i_1] [i_0] [i_0] [i_1]) > 13736))) : (160 & 0)));
                        }
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            var_24 = (min(var_24, 4095));
                            var_25 = ((var_0 > ((var_5 ? var_8 : 1))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, var_2));
    #pragma endscop
}
