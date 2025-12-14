/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [8] [i_0] = ((((((arr_3 [i_1] [4]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0])))) ? (min((arr_3 [i_0] [i_1]), var_1)) : (arr_1 [i_0])));
                arr_6 [i_0] = ((arr_1 [i_1]) ? (max((arr_3 [i_0] [i_1]), ((var_9 ? (arr_1 [i_1]) : var_14)))) : ((max((arr_3 [i_0] [i_0]), var_12))));
                var_20 -= (min(((var_0 ? var_5 : (arr_3 [2] [i_0]))), ((min(24319, 1)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_11 [0] [i_2] [i_3] = (max(((max((arr_7 [i_2]), var_19))), (((((-714359562 ? 25946 : 41))) ? (min((arr_8 [i_2]), (arr_8 [i_2]))) : var_18))));
            var_21 = ((var_1 ^ ((((min(-8460352315148414963, 176)))))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                {
                    var_22 = var_15;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_23 = ((~(((-17514 + 2147483647) << (17559221147484069078 - 17559221147484069078)))));
                                arr_22 [i_2] = (min((max(((((arr_21 [i_6] [i_4] [i_7] [i_2] [i_6] [i_5]) ? (arr_16 [i_5] [i_5 + 1] [i_2]) : (arr_9 [i_7])))), var_1)), var_7));
                            }
                        }
                    }
                    var_24 = ((max((arr_18 [5] [i_5 - 2] [i_2] [0]), (arr_19 [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 2]))));
                    var_25 = ((((((var_11 - (arr_18 [7] [i_4] [i_2] [i_5 + 3])))) ? (arr_8 [i_2]) : ((max(-19549, -828203166))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_30 [i_2] [1] [i_5] [13] [i_5 - 2] = ((((arr_29 [3] [i_9] [1] [i_2] [i_8] [i_4]) ? 25931 : (arr_21 [i_9 - 1] [i_9] [i_2] [i_2] [i_8 - 1] [i_8 - 1]))));
                                var_26 = (arr_10 [i_4] [i_4] [i_4]);
                                var_27 = (arr_19 [11] [11] [i_8 - 1] [i_8] [12]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
