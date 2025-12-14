/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        var_21 -= ((~((16256 % (((0 || (arr_7 [i_0] [i_1] [i_2] [i_3]))))))));
                        var_22 = (arr_7 [i_2 - 2] [i_3] [i_2] [i_3 - 1]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_23 = 26;
                            arr_11 [i_0] [0] [1] [i_3] [i_0] [0] = var_11;
                        }

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_24 = (arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_5] [i_5]);
                            arr_15 [i_0] [i_1] [6] [i_3] [i_3] = var_7;
                            var_25 = (arr_12 [i_0] [i_0] [i_2]);
                            arr_16 [i_0] [i_0] [i_2] [i_3 - 1] [i_5] = (((((min(34, 23551))) ? -3860008604756036286 : 26)));
                            arr_17 [i_0] [i_0] [i_2] [4] [i_5] |= (arr_5 [i_2 - 1] [6]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [9] [i_1] [i_2] [i_3] [i_6] = (var_10 ? (arr_9 [i_6] [i_3] [9] [i_1] [i_0]) : ((1920 + (arr_3 [i_2] [i_2] [15]))));
                            var_26 |= (((((((!(arr_3 [i_0] [i_0] [i_3]))))) | (max((arr_18 [i_0] [i_1] [i_2] [10] [i_6]), var_3)))));
                        }

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_24 [i_0] [0] [i_2] [2] [i_7] [i_7] = (min((((!32767) == (max((arr_10 [i_0] [7] [i_2] [i_3 - 4] [i_3 - 4]), var_11)))), ((!((min(4294967267, 2147483647)))))));
                            var_27 -= var_9;
                        }
                    }
                }
            }
        }
        var_28 = (min(var_28, (((~((((32767 % 1163403248) == var_16))))))));
        arr_25 [i_0] = ((~(-2147483647 - 1)));
        arr_26 [i_0] [0] = ((!((min((arr_9 [5] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [9] [i_0]))))));
    }
    var_29 = ((var_10 ? var_12 : var_6));
    #pragma endscop
}
