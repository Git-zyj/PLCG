/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (-9223372036854775807 - 1);
    var_12 += var_1;
    var_13 = ((~((18446744073709551600 ? 188455962456013611 : 1354841474))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (arr_2 [i_0] [i_0] [i_2]);
                    arr_7 [i_0] = (((((arr_4 [i_0] [i_1] [i_2]) < var_7)) || 35));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_16 = (arr_8 [i_1] [i_2] [i_1] [i_0]);

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            arr_15 [i_3] = (arr_3 [i_0] [i_0] [1]);
                            arr_16 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] [i_0] = (((arr_3 [i_3] [i_2] [i_0]) > (arr_3 [i_0] [4] [i_3])));
                            var_17 &= (arr_5 [1] [i_1] [i_2] [i_4 - 1]);
                            arr_17 [i_4] [i_3] [i_2] [i_1] [i_0] = var_10;
                        }
                        arr_18 [i_3] [i_0] = (((0 - var_4) == (arr_14 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_18 = (arr_21 [i_0] [i_1] [i_2] [i_0] [i_0]);
                            var_19 = (arr_4 [i_1] [i_1] [i_0]);
                            arr_25 [i_6] [1] [i_2] [i_5] [12] = ((((arr_14 [i_0] [i_1] [i_2] [i_5] [i_6] [18]) ? var_1 : var_1)));
                            var_20 = 241;
                            var_21 -= var_3;
                        }
                        arr_26 [i_5] [7] [i_1] [i_1] [i_0] [i_0] = (arr_21 [i_5] [i_2] [i_1] [i_1] [i_0]);
                    }
                }
            }
        }
        var_22 = (min(var_22, (((3 ? (arr_13 [i_0]) : (((arr_4 [i_0] [i_0] [5]) >> var_1)))))));
        arr_27 [i_0] = (((-8176187471787839049 < -1) >> (((arr_23 [i_0] [i_0] [1] [i_0] [i_0]) + 7908955468349139086))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] [i_7] = var_2;
        var_23 = (arr_12 [i_7] [i_7] [i_7] [i_7]);
    }
    #pragma endscop
}
