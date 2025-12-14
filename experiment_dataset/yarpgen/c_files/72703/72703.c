/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(var_6 | 5658587846208681012)));
    var_18 *= var_6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_19 = (((((arr_1 [i_0] [i_1]) <= var_11)) ? 5658587846208681015 : ((6980 ? var_2 : -5658587846208681013))));
                        var_20 = (arr_5 [i_0 + 2] [i_1] [i_1 + 1]);
                    }
                    var_21 ^= (arr_0 [i_0]);

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_22 = (max(var_22, (((var_5 / ((var_16 ? (arr_11 [i_2]) : var_0)))))));
                        arr_13 [i_0] [i_1] [11] [i_4] = (1423866518 / -5658587846208681015);
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] = ((137 ? (arr_10 [i_0]) : (arr_9 [i_0])));
                        arr_15 [i_0] [i_0] = (arr_2 [11]);
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_23 = (arr_6 [i_0] [i_0]);
                            arr_22 [i_0] = (((arr_17 [i_0]) ? var_14 : 0));
                            arr_23 [i_0] [i_2] [i_5] [3] = var_7;
                            arr_24 [i_0] [9] [i_2] [i_5] [i_0] = ((var_3 ? (arr_7 [2] [i_1 - 1] [i_2] [i_6]) : ((var_14 * (arr_6 [i_0] [i_0])))));
                        }
                        var_24 = (!-100);
                    }
                    arr_25 [i_0] = (arr_17 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
