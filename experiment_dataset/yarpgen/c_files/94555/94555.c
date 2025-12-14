/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!117);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (arr_0 [i_0]);

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_21 = (max(var_21, var_8));
                        arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] [i_1] = arr_2 [i_1] [i_2] [i_3];

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [13] [i_0] = var_5;
                            var_22 = (arr_9 [i_0] [i_1 + 1] [i_2] [i_3]);
                            arr_14 [i_2] [i_0] [i_3] [i_3] [8] = ((var_7 ^ (arr_7 [i_0] [15] [i_2] [i_3])));
                            var_23 = ((((var_15 % (arr_0 [0])))) ? var_14 : (arr_9 [i_0] [i_1] [i_1] [i_1]));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_24 *= ((!(arr_7 [i_0] [i_1] [i_2] [i_3])));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_5] = (arr_2 [i_1] [14] [i_2]);
                            arr_20 [i_0] [i_1] [i_2] [i_0] [i_3] [i_5] = (((arr_17 [i_1 + 1] [i_1 + 1]) + (arr_17 [i_1 + 1] [i_1 - 1])));
                        }
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] = ((((var_12 ? (arr_21 [7] [i_3] [i_0] [i_1] [i_0]) : var_12))) ? var_0 : (((((arr_2 [i_3] [i_1 - 1] [i_2]) + 9223372036854775807)) << (((var_10 + 6145248243826290576) - 37)))));
                            arr_25 [i_0] [16] [i_2] [i_3] [i_0] [i_6] [i_1] = (((((var_9 ? (arr_9 [0] [i_1 - 1] [8] [i_1]) : var_8))) ? var_12 : ((((var_6 + 2147483647) << (((var_6 + 34) - 22)))))));
                            var_25 = (arr_17 [i_6 - 1] [i_6]);
                            var_26 = (min(var_26, (arr_21 [i_1 - 1] [i_6 + 1] [i_6] [i_6] [i_6 + 1])));
                            var_27 = (~var_9);
                        }
                    }
                    var_28 = ((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) - (min((46 - 202), (max((arr_12 [i_0] [i_0] [i_0] [i_0] [15]), (arr_4 [i_0] [i_0] [i_0] [20]))))));
                    arr_26 [i_0] = ((var_10 <= ((var_12 ? (min((arr_11 [13] [i_0] [11] [i_1] [i_2] [i_2]), (arr_0 [i_0]))) : (~var_8)))));
                    var_29 = ((arr_8 [i_0] [i_0] [i_0] [i_0] [14] [i_0]) ^ -6143405818449402557);

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_30 *= ((!(((((min(var_6, (arr_11 [i_0] [i_1] [24] [6] [i_7] [i_7])))) ? (var_18 * 34359738367) : (arr_4 [i_0] [10] [i_2] [16]))))));
                        var_31 = (min(var_31, (((((((var_15 ? var_12 : (arr_23 [i_0] [i_7] [20] [i_7] [i_7]))) / var_6))) ? ((((min(var_6, var_13))))) : (((arr_27 [i_0] [i_0] [16] [i_0]) ? (arr_27 [i_1] [i_1 + 1] [18] [i_1 - 1]) : var_1))))));
                    }
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_12 [i_0] [i_8 - 1] [i_2] [i_0] [i_1 + 1]) ? ((((min((arr_7 [i_0] [i_8] [i_2] [i_8]), (arr_29 [i_0])))) ? 64 : (arr_22 [i_0]))) : (((209 ? (arr_21 [i_8] [6] [i_1 - 1] [i_0] [i_0]) : ((((arr_2 [i_1] [i_1] [i_1]) && (arr_23 [i_0] [0] [i_0] [i_8] [i_8])))))))));

                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            var_32 = (min(var_32, -4086255902338404849));
                            arr_37 [21] [i_0] [2] [i_0] [i_0] = min(((min((min(var_18, 59)), (((!(arr_0 [i_0]))))))), ((-(min((arr_1 [i_0] [i_0]), (arr_6 [i_1] [i_2] [i_8] [i_9]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
