/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 18446744073709551593;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (((((min(var_2, (arr_6 [i_0] [i_0] [i_0]))))) != (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [12]) : var_1))));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_4] = (max(var_8, 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [9] [i_6] = (((((-(!var_5)))) != (max((arr_2 [i_5]), 18200050128112377664))));
                                var_12 = ((var_8 <= ((-((min(var_8, (arr_20 [i_0] [i_1] [i_2] [1] [i_5] [i_6]))))))));
                            }
                        }
                    }
                    arr_23 [i_2] [2] [i_0] [i_0] = -2082377582;
                }
            }
        }
        arr_24 [i_0] [i_0] = (((var_8 ? 254 : ((min(2, var_4))))));
        arr_25 [7] = (((((~((65535 ? 1893907305 : 192))))) ? var_2 : ((((arr_0 [i_0] [i_0]) == 247)))));
    }

    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_13 = ((((((max(-34, 1))) ? (arr_26 [i_7] [i_7]) : ((((!(arr_26 [i_7] [i_7]))))))) % (max(-var_0, (arr_26 [i_7] [i_7])))));
        arr_28 [i_7] [i_7] = (max((min((arr_26 [i_7] [i_7]), (arr_26 [i_7] [i_7]))), (arr_27 [i_7])));
        var_14 = (max(var_14, (~11129225087352735322)));
        var_15 = (((~8936830510563328) && ((max((arr_26 [i_7] [i_7]), 2)))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            {
                var_16 = 1;
                arr_34 [i_9] [i_9] [i_9] = (((((1 >> (-6732 + 6763)))) ? (min(var_4, 8388096)) : (arr_32 [15] [i_9 - 1] [15])));
            }
        }
    }
    #pragma endscop
}
