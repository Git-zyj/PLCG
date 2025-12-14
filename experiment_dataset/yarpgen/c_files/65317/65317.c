/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-(var_3 % var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (arr_2 [i_0] [i_1]);

                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    var_12 = ((((min(((-13184 ? 10 : 221)), (var_3 - var_6)))) ? ((+(max((arr_7 [i_1]), (arr_3 [i_0] [i_1] [i_2]))))) : (arr_0 [i_0] [i_0 + 1])));
                    arr_8 [i_0] [6] |= 122;
                }
                var_13 = (max(var_13, 122));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_14 = (min(var_14, (((!(arr_10 [i_4]))))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_15 = (arr_23 [i_3] [i_4] [i_5] [i_3] [i_7]);
                            arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_5;
                            var_16 = -7741;
                            arr_25 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] [i_7] = ((~(arr_15 [i_3] [i_3])));
                            arr_26 [i_3] [i_4] [i_5] [2] [i_7] [i_5] [i_7] = ((((-(arr_10 [i_5]))) - var_3));
                        }
                        var_17 = (arr_10 [i_5]);
                    }
                    var_18 = (((arr_18 [i_3] [i_3] [i_3] [i_3]) + (arr_13 [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_32 [i_3] [5] [i_5] [i_9] [5] = (arr_19 [i_3] [i_4] [i_5] [i_8]);
                                var_19 += 49994;
                                arr_33 [i_3] [i_9] [i_4] [i_5] [i_8] [i_8] [i_9] = 4194304;
                            }
                        }
                    }
                    arr_34 [i_3] [i_4] [i_5] = (((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_23 [i_3] [i_3] [i_4] [i_4] [i_5]) : 22387));
                }
                var_20 = (min(var_20, 88));
            }
        }
    }
    var_21 = (max(var_21, var_10));
    #pragma endscop
}
