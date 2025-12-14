/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_0;
    var_15 = ((-((var_4 ? 14104 : (!var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = ((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0]));
        arr_4 [i_0] = (((arr_1 [0] [i_0]) ? (arr_3 [i_0]) : (var_0 <= 45253)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [6] [i_2] [i_1] [15] [2] = -var_10;
                        arr_13 [i_0] [i_0] [i_1] [i_3] = 14098;
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = ((var_10 ? (arr_7 [i_0] [10] [i_1] [i_1 + 1]) : -var_6));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_17 = (((arr_9 [i_0] [i_1 - 1] [i_1 - 1]) ? (arr_9 [i_2] [i_2] [i_1 - 1]) : (arr_9 [i_2] [i_2] [i_1 - 1])));
                            arr_17 [i_1] [i_2] [i_1] = (((arr_8 [i_1 + 1] [i_1] [i_1 - 1]) ? (arr_8 [i_1 + 1] [i_1] [i_1 - 1]) : var_6));
                            var_18 = (((arr_10 [i_0] [i_0] [i_1 + 2] [i_2] [i_3] [1]) <= (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        var_19 = ((209350284460793493 ? ((-(arr_3 [i_5]))) : (167511708 != 17807561333585361268)));
        arr_22 [i_5 - 2] = -54927;
        var_20 = ((58 ? 35246 : 198));
        arr_23 [i_5] = 14729953466411406427;
        var_21 = var_4;
    }
    var_22 += var_7;
    #pragma endscop
}
