/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (((((-1 + 9223372036854775807) >> (((((arr_0 [1]) & 48432)) - 43306)))) * 0));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = (arr_7 [i_3] [1] [i_2] [i_3]);
                                var_15 &= ((!(arr_8 [i_2] [i_3 - 1] [i_0 - 1])));
                                var_16 = (((arr_0 [i_1]) == (arr_3 [i_0])));
                            }
                        }
                    }
                    var_17 = ((var_9 ? ((-(arr_8 [i_2] [i_1] [i_2]))) : var_3));
                    var_18 -= ((var_5 << (((arr_2 [i_0] [i_2]) - 8574))));
                    var_19 = (min(var_19, ((((arr_3 [i_0 - 1]) == ((var_2 ? (arr_3 [5]) : 266957918)))))));
                }
                for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_20 = (((((arr_2 [i_0 - 1] [i_5 - 1]) || (arr_2 [i_0] [1]))) ? (arr_7 [i_0] [i_1] [i_5] [10]) : 5161383678646670238));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_21 = var_1;
                                var_22 &= (~var_11);
                                var_23 = (((((arr_6 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) - (arr_7 [i_0 - 1] [i_1] [11] [i_6]))) + (arr_6 [i_6] [i_1] [i_5 - 1] [14] [i_7] [0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_24 = var_7;
                                var_25 = (((((max((arr_13 [i_5] [i_1] [i_5 - 1] [i_8]), 4028009378))) / (arr_7 [0] [i_8] [0] [i_8]))));
                            }
                        }
                    }
                    var_26 = (((1 ^ var_0) ^ (((max(576460752303292416, -126))))));
                    var_27 = (arr_21 [i_5 - 2] [i_5 + 1] [10] [i_5] [10] [i_0] [i_0 - 1]);
                }
                for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_28 = (arr_5 [i_0] [i_0 - 1] [i_1] [i_10 - 2]);
                    var_29 = (max(((max((arr_17 [13] [i_10] [11] [i_10 - 2] [i_10 - 2]), var_9))), (min((arr_0 [i_0 - 1]), (arr_10 [i_0 + 1] [i_1] [i_10 - 1])))));
                }
            }
        }
    }
    var_30 -= ((!(var_2 + 1)));
    var_31 = 16508339621624287872;
    #pragma endscop
}
