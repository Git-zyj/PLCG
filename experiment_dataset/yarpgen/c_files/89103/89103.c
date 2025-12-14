/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 |= 531;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] = (arr_7 [i_1 + 2] [i_2 + 1] [i_4] [i_2 + 1] [i_2 + 1] [i_1]);
                                arr_12 [6] [i_1] [i_4] = ((((!(arr_6 [i_1] [i_4])))) == -1);
                            }
                        }
                    }
                }
                var_15 = (max(1, var_11));
                arr_13 [i_0] [i_1] = (((!var_6) != (((min(29797, (arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_18 [i_6] [i_1] [i_1] [i_0] = (+(((arr_9 [i_1 + 1] [17] [i_1] [i_1 + 1] [14] [11] [i_0]) ? (arr_9 [i_1 + 2] [i_0] [3] [i_0] [4] [8] [i_0]) : (arr_9 [i_1 + 2] [i_1] [i_1 - 1] [17] [13] [i_1] [i_1]))));
                            var_16 = ((252 ? 32 : 3715715063));
                            arr_19 [i_1] [5] = (((arr_7 [i_1] [i_1] [i_1 + 1] [11] [i_1 - 2] [i_1]) >> (((~var_2) + 10))));
                            arr_20 [i_1] [i_6] = ((((((arr_7 [i_0] [i_0] [10] [21] [21] [i_1]) + 253))) ? ((var_11 ? (arr_2 [i_5 + 1]) : 579252222)) : 2147483625));
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, (var_5 / var_8)));
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                arr_25 [i_8] [0] [i_7] = ((((min((arr_8 [i_7] [i_8] [i_7] [i_7] [i_7]), 1))) ? var_9 : (((((var_5 ? 243 : var_8)) - 1)))));
                arr_26 [i_7] [i_7] [i_7] = (arr_23 [i_7] [i_7] [i_7]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            {
                arr_31 [5] = var_13;
                var_19 = (min(var_19, (((max((max(var_8, (arr_28 [i_9])), 2147483634)))))));
            }
        }
    }
    #pragma endscop
}
