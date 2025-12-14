/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_2] [i_0] = (~-13);
                        arr_12 [i_2] = ((!(((var_3 / (~1874282843))))));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            var_11 = (max(var_11, ((((-10 ^ 2356203121) ? ((30720 ? (arr_14 [i_0] [i_1] [0] [11] [i_4]) : (arr_7 [i_2] [i_3] [i_4 - 1]))) : -10)))));
                            arr_15 [i_2] = ((((((arr_7 [i_4 - 2] [i_3] [i_1]) < (arr_2 [i_0])))) << (4294967295 - 4294967274)));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_12 = ((var_7 ? ((1368686109 ? 1048575 : 0)) : (16777208 / var_10)));
                            arr_18 [i_2] [i_3] [i_2] [i_2] [i_2] = ((-((1368686096 ? 63 : -17))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_13 = var_6;
                            var_14 += -26427;
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_2] = 32758;
                            var_15 *= (((min(792289713, var_7))));
                            var_16 = (max(3577763738, ((((((4294967272 ? (arr_6 [i_2] [i_1]) : 2926281160))) || ((max(var_0, (arr_19 [i_2] [i_3] [i_0] [i_1] [i_2])))))))));
                        }
                        arr_23 [i_2] [i_0] [11] [i_3] [i_3] = (var_2 == 1024);
                        arr_24 [i_0] [i_1] [i_2] [i_0] = var_7;
                    }
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        var_17 = (max(var_17, var_1));
                        arr_27 [2] [i_1] [i_2] [i_1] |= var_3;
                        var_18 = (max(var_18, var_10));
                    }
                    var_19 = ((-(arr_9 [i_2] [5] [i_1] [i_1] [4] [i_0])));
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_30 [i_1] = (!var_10);
                    arr_31 [i_0] [i_1] [i_8] [i_8] = (+(((arr_6 [i_8] [i_8]) ? (arr_6 [i_1] [i_8]) : var_5)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_38 [i_0] [i_0] = 9;
                                var_20 -= (((arr_16 [i_0] [i_0] [i_0] [i_9] [i_0]) ^ (((arr_16 [i_10] [i_10] [i_8] [i_10] [i_0]) ? (arr_16 [i_0] [i_0] [i_8] [i_10] [i_10]) : var_1))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    arr_42 [i_11] [i_11] [i_1] [i_0] = (~4294967295);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_21 ^= -56;
                                arr_47 [12] [i_12] [14] [5] [i_12] &= ((arr_8 [i_0] [i_0] [i_11] [i_13 - 4]) / (arr_8 [i_13] [i_13 - 1] [i_11] [i_13 - 3]));
                            }
                        }
                    }
                    arr_48 [i_11] [i_1] [i_0] = ((((((var_0 <= (arr_35 [i_0] [i_0] [i_1] [i_1] [i_0] [i_11] [i_11]))))) == (arr_8 [i_0] [i_0] [i_11] [i_11])));
                }
                var_22 = (max(var_22, (((!((((((var_1 ? (arr_20 [i_0] [i_0] [i_0] [i_0] [14] [i_1]) : (arr_46 [i_0] [i_1] [i_0] [i_1])))) ? (((arr_1 [i_1] [i_0]) ? var_7 : (arr_14 [i_1] [i_1] [2] [i_1] [i_1]))) : (min((arr_46 [i_0] [i_0] [i_0] [0]), (arr_32 [i_0] [i_1] [i_1] [i_1])))))))))));
                var_23 = (max(var_23, (((var_1 == (min(10, ((-1032 ? (arr_3 [i_1]) : var_0)))))))));
                arr_49 [i_0] [i_1] [i_1] = ((0 ? (arr_35 [i_1] [i_1] [i_1] [12] [i_1] [i_1] [4]) : (((arr_13 [i_1]) ? (arr_16 [i_0] [i_0] [i_0] [i_1] [i_1]) : (arr_16 [i_0] [i_1] [i_0] [i_1] [i_0])))));
                var_24 = (arr_1 [i_0] [i_1]);
            }
        }
    }
    var_25 = (max(var_25, 12901));
    var_26 = var_2;
    var_27 = ((!((((((var_0 ? -16785 : var_7))) ? (var_7 <= var_1) : var_2)))));
    #pragma endscop
}
