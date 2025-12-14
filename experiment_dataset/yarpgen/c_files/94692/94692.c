/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (max((max((((var_9 ? var_3 : var_4))), (min(6, var_0)))), (((((min(var_3, 1228179077))) - ((var_8 ? 1 : -1507690141225796829)))))));
    var_16 = max(var_7, (min((max(5740371437529846711, 82)), var_10)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_6 [i_1] = (~var_13);
                    var_17 = var_10;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 ^= var_3;
                        var_19 = (((arr_8 [1] [i_1] [i_2] [18] [10] [i_2]) - -3));
                        arr_9 [i_2] |= (((((var_13 ? var_5 : var_12))) ? 17805310132174175882 : (arr_5 [i_2] [i_0 - 1])));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_20 = 2249600790429696;
                            var_21 = (arr_12 [i_0] [i_1] [i_0 + 1]);
                            var_22 = (max(var_22, var_8));
                            var_23 = ((27049 ? (arr_7 [i_1] [i_1] [i_2] [i_0 + 1] [i_4] [i_4]) : var_3));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_0 - 1] = (!13643);
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_24 ^= var_5;
                            arr_16 [15] [i_1] [i_2] [i_1] = (!var_5);
                            var_25 = (max(var_25, -20828));
                            arr_17 [i_1] [i_3] [i_1] = ((134 - (((arr_7 [i_1] [i_1] [i_5] [i_5] [i_2] [10]) ? var_8 : (arr_15 [i_0] [i_1] [i_2] [i_3] [i_5] [i_0])))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_20 [i_0] [10] [i_2] [i_6] [i_1] [9] = (((arr_4 [i_0 - 1] [i_1] [i_2]) ? (~var_1) : (((var_7 ? var_6 : (arr_0 [i_0 - 1]))))));
                        var_26 += (((arr_4 [i_0 + 1] [i_2] [4]) ? var_14 : var_8));
                        var_27 += (((var_12 + 9223372036854775807) << (var_5 - 4571280478727306217)));
                    }
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_28 = ((arr_0 [i_7 - 1]) ? var_7 : var_8);
                    var_29 = (((arr_14 [i_7 - 1] [1] [i_0 - 1] [i_1] [16] [i_1]) ? (arr_18 [17] [i_1] [i_7 - 1] [i_1] [i_0 + 1]) : 16128525310377063145));
                }
                arr_24 [i_1] [i_1] = (min((((((max(4294967277, var_7))) ? 115468544 : (var_9 - var_11)))), var_7));
                var_30 = (max((arr_4 [i_0 + 1] [i_1] [i_1]), (min((arr_18 [i_1] [i_1] [i_0] [i_1] [i_0]), var_8))));
                var_31 ^= (max(1, (min((arr_7 [0] [i_0 + 1] [i_0] [i_1] [i_0 - 1] [i_1]), (arr_7 [12] [i_0 + 1] [i_0 - 1] [i_0] [i_1] [i_0 + 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            {
                arr_30 [i_8] [i_8] = 1;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_32 = ((min(-27310, (max((arr_4 [i_8] [6] [i_10 + 1]), 1145)))));
                            var_33 -= -1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_34 += (min(((max(var_12, var_11))), ((var_4 ? (arr_23 [14] [4] [i_9 + 2]) : var_14))));
                            var_35 = ((+(min((arr_12 [i_12] [i_9 + 2] [i_12]), var_1))));
                        }
                    }
                }
                var_36 = (arr_38 [i_8] [i_9] [i_8]);
            }
        }
    }
    #pragma endscop
}
