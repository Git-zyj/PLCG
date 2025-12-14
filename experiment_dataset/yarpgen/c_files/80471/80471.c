/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = ((arr_1 [i_0]) <= (arr_1 [20]));
        arr_2 [i_0] [i_0] &= 1428;
        var_13 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_14 = (arr_1 [i_0]);
            var_15 = (((arr_0 [i_0]) >= (arr_4 [i_0] [i_0] [i_1])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_16 = (105 <= 57);
                arr_8 [i_2] = (arr_7 [i_0] [i_0] [i_2] [i_1]);
                var_17 |= -4081;
            }

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                var_18 |= (~1825588473170643588);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_19 |= 12;
                            var_20 = (arr_16 [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5 - 1]);
                            var_21 = (((((arr_4 [i_1] [i_1] [i_1]) < 106)) ? (((arr_16 [i_0] [i_1] [i_1] [i_5] [i_5]) ? (arr_10 [i_5 + 1] [i_3] [i_5] [i_5 - 2]) : (arr_10 [i_0] [i_3] [18] [i_0]))) : (arr_15 [21] [i_1] [i_5 - 1] [i_4] [i_1] [i_5 + 1])));
                        }
                    }
                }
                arr_17 [i_0] [i_3] = (arr_0 [i_1]);
                var_22 = (arr_1 [i_3]);
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {
        arr_21 [i_6 - 3] = (arr_3 [i_6 + 1] [i_6 + 1]);
        var_23 = (arr_19 [i_6 - 1]);
    }
    var_24 ^= ((var_0 + (!var_4)));
    var_25 = (105 & var_1);
    #pragma endscop
}
