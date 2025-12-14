/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_4, (max(var_9, var_0))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 -= var_5;
        arr_3 [i_0] [i_0] = 3061595368;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 ^= (arr_5 [7]);
        arr_6 [i_1] = (((arr_4 [i_1] [i_1]) ? ((((var_2 ? (arr_4 [i_1] [i_1]) : 5)) + (15147 + 1))) : (min(((-(arr_4 [i_1] [i_1]))), (17215 - 1)))));

        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = ((~(min((max(23665, (arr_8 [i_2] [i_2] [i_1]))), (arr_4 [i_1] [i_1])))));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_12 [i_2] = (3026201161 & 40900);
                var_14 = (max(var_14, (((((-(arr_5 [i_2 + 2]))) + (var_0 * 0))))));
                var_15 = (arr_4 [16] [i_3]);
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_15 [i_2] [15] [8] [i_2 - 3] = ((var_0 || (arr_8 [i_2 + 1] [i_2 + 2] [i_2 - 2])));
                var_16 = (min(var_16, -var_6));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_17 = ((((!(arr_19 [i_2] [i_5] [i_4] [i_2] [i_2]))) ? (((!(arr_19 [i_2] [i_2] [i_4] [i_1] [15])))) : (arr_20 [i_6 - 1] [i_2] [i_2] [i_4] [i_2] [i_2] [i_1])));
                            var_18 -= ((var_2 - (arr_14 [i_1] [i_4] [i_5] [i_5])));
                            arr_21 [i_4] [i_2] [i_4] = (((~var_4) ? (arr_19 [i_2] [i_2 - 3] [i_6 - 3] [i_2] [i_6]) : (~4150804282)));
                            var_19 = ((var_8 ? (arr_16 [i_2 - 4] [i_2 - 2] [i_4] [i_6 - 1] [4]) : (arr_13 [i_2 + 2] [i_2 + 2] [i_2])));
                        }
                    }
                }
            }
            var_20 = var_2;
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_21 = 3489537974;
            arr_24 [6] [i_1] [24] = (((((var_4 + (arr_7 [6] [6])))) * ((-((-(arr_8 [i_7] [1] [i_1])))))));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_28 [i_8] [i_1] [i_8] = (((((-(arr_20 [5] [i_8] [i_1] [i_1] [i_1] [i_8] [5])))) ? ((-((1 ? var_10 : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((1 + 60136) ? 3360698478 : (((arr_19 [i_8] [i_1] [i_1] [i_1] [i_8]) ? var_8 : (arr_10 [i_1] [9] [i_1] [i_8])))))));

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_22 = (min(var_22, (((min((arr_26 [i_1] [i_8] [i_9]), 1))))));
                arr_32 [i_1] [i_1] [10] [i_8] = min((arr_18 [i_1] [i_1] [i_8] [i_9] [i_9]), (min(var_9, (arr_18 [i_9] [i_8] [i_8] [i_1] [i_1]))));
            }
        }
    }
    var_23 = ((1 >> (-15 + 45)));
    var_24 = var_8;
    var_25 = ((var_7 ? (min(var_1, ((max(1, 8167))))) : ((var_5 / (((max(var_4, var_4))))))));
    #pragma endscop
}
