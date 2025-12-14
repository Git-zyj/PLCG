/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1550579265;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 *= (min((arr_4 [i_0 + 1]), 1225533128));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = ((-(arr_8 [i_0 + 1] [i_0 + 2])));
                                var_17 = (max(var_17, ((((arr_9 [i_0] [i_1]) ? ((~(arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0 + 1]))) : -3236999351)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [i_5] [i_6] = (min((((-15282 + 2147483647) >> (15293 - 15283))), ((((arr_2 [i_5 + 1]) && (arr_2 [i_5 - 1]))))));
                            var_18 = (((arr_16 [i_0 - 1] [i_0] [i_0] [i_0]) ? ((((arr_16 [i_0 - 1] [i_0 + 2] [i_0] [i_0]) || (arr_16 [i_0 - 1] [i_0] [i_0] [i_0])))) : (arr_16 [i_0 - 1] [i_0] [8] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_20 = (~var_4);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_21 = (max(var_21, (~var_0)));
                            var_22 += (min(((((((arr_20 [i_10]) > 444576546)) ? (((arr_19 [3]) ? var_8 : (arr_26 [i_7] [i_7] [i_7] [10]))) : (~var_4)))), var_5));
                            var_23 = (max(((((((arr_23 [12]) ? (arr_24 [i_8] [i_9] [i_10]) : (arr_19 [i_7])))) ? 98 : -46)), (((218 + 2147483647) << (218 - 218)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_24 = (arr_30 [i_7] [i_7] [i_7] [i_7]);
                            var_25 = (max(var_25, ((((((max(98, -2950)))) - ((-1 ? (min((arr_20 [0]), (arr_23 [i_7]))) : (arr_19 [i_7]))))))));
                            var_26 = (max((arr_19 [i_7]), (arr_26 [i_7] [i_8] [i_7] [9])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_27 = (min(var_27, (arr_26 [i_7] [i_13] [12] [12])));
                                var_28 = (max((arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), ((1775397466 + (min(var_13, (arr_24 [i_15] [i_14] [i_7])))))));
                                arr_40 [i_7] [i_7] [i_7] [i_7] [i_15] = (((((arr_21 [i_14 + 2]) == (arr_21 [i_14 + 2]))) ? -37 : (((arr_21 [i_14 + 1]) ? (arr_21 [i_14 - 1]) : (arr_21 [i_14 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 *= var_2;
    #pragma endscop
}
