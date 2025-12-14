/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 ^= ((~((9712 ? var_10 : (arr_0 [i_2] [i_2])))));
                    var_19 = (!var_0);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = ((!((((arr_1 [i_1]) ? 1 : var_7)))));
                    var_20 = ((-var_0 ? 16951 : (arr_5 [i_3] [i_1] [i_1] [i_0])));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_21 = arr_4 [i_0] [i_0] [i_0];
                        var_22 = (arr_9 [i_4] [12] [i_1]);
                        var_23 = (arr_0 [i_3] [i_1]);
                        var_24 = ((!(arr_0 [5] [2])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_16 [i_5] [i_1] [15] [15] [i_6] [i_6] [i_6] = (((arr_13 [10] [i_0] [i_3] [i_5 + 1]) ? (arr_12 [i_5 + 1] [i_5 + 2]) : (18446744073709551615 * 2314)));
                                arr_17 [i_6] [i_1] [i_1] [3] [i_5] [22] = ((9707 ? -1263164341767715320 : 15));
                                var_25 = (min(var_25, (1 == 7)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_26 = (((((var_10 ? (7 ^ -1) : var_17))) ? (arr_5 [i_0] [i_1] [i_7] [10]) : (arr_18 [i_0] [i_1] [24] [i_8])));
                            arr_23 [i_8] [i_7] [12] [i_8] = (max(((127 & (min(var_14, 3213)))), (min((max(15, (arr_22 [i_0] [i_1] [i_1] [i_7] [i_8]))), (min(1, (arr_4 [i_0] [i_1] [i_1])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 4; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                var_27 ^= (((((((!(arr_0 [i_9] [i_9]))) ? ((((arr_15 [i_9] [i_9] [i_9] [i_9] [i_9 - 2]) ? var_10 : (arr_19 [i_9] [i_10])))) : (arr_9 [i_9 + 2] [i_9] [i_9 + 3])))) ? (arr_21 [i_9 - 2] [i_9 + 1]) : (arr_5 [i_9 - 2] [13] [13] [i_9 - 2])));
                arr_29 [i_9 + 3] [i_9 - 2] [i_9] = (((arr_21 [i_9] [i_10]) & -288160007407534080));
                var_28 = (max(var_28, 63));
            }
        }
    }
    #pragma endscop
}
