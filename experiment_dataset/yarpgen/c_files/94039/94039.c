/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (+(((27060 - -7258) / (max(var_7, 7257)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_3));
                var_17 = ((((~(arr_2 [i_0 - 2] [i_0 - 2] [i_1]))) >> (arr_0 [i_0 - 2])));
                var_18 |= (arr_3 [i_0] [10]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = (arr_13 [11] [i_3 - 3] [11] [i_5] [i_6 - 1]);
                                var_20 ^= ((((min((((~(arr_3 [i_6 - 1] [i_4])))), (arr_7 [12] [i_5])))) ? ((-(arr_1 [i_5]))) : (arr_2 [i_3] [i_3 - 2] [i_4 + 2])));
                                var_21 = (min((((var_2 == ((((arr_7 [i_6 - 1] [i_3]) < (arr_8 [i_6] [i_2] [i_4] [i_2]))))))), var_7));
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {

                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        var_22 = var_2;
                        var_23 += (((arr_4 [i_3 - 2] [i_3 - 2]) ? var_10 : (max(var_12, (arr_4 [i_3 + 1] [i_3 + 2])))));
                        var_24 = ((min(var_4, (arr_8 [i_3] [i_8 - 3] [i_8 - 4] [i_8]))));
                        var_25 |= (max(1012417801, (arr_11 [i_3])));
                        var_26 = 458752;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_27 = (arr_17 [i_2] [i_2] [i_2] [i_2]);
                                var_28 = (max(var_28, (((+(((arr_0 [i_9 - 3]) ? (((var_0 ? (arr_1 [i_7]) : (arr_18 [i_10] [i_10])))) : var_12)))))));
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_29 = ((~((-(arr_18 [i_3 - 2] [i_3 + 2])))));
                    var_30 = var_11;
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_31 = ((!((max(var_8, (((!(arr_31 [i_2] [11] [i_11] [i_12 - 2] [0])))))))));
                                var_32 = var_2;
                                var_33 = var_0;
                                var_34 = (max(458774, -7262));
                                var_35 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
