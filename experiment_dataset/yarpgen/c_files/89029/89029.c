/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (~var_4);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_10 = ((~var_8) ^ (((arr_6 [i_1] [i_1] [1]) ? (arr_2 [i_3]) : (arr_8 [i_0] [i_1]))));
                        var_11 ^= -224;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_12 -= var_0;
                            var_13 = ((var_7 ^ ((var_4 ? (arr_9 [i_0] [i_1] [i_1]) : (arr_5 [i_1])))));
                            arr_14 [i_0] [i_4] [12] [i_3] [i_1] [i_1] = (arr_13 [i_0] [i_0] [i_2] [i_0] [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_14 = (min(var_14, (((-(arr_2 [i_2 - 4]))))));
                            arr_17 [i_0] [i_1] [i_2 + 1] [i_3] [i_1] = ((var_0 ? (arr_6 [i_2 - 1] [i_1] [i_2 - 2]) : (((arr_16 [i_1] [0] [i_5] [i_3]) ? (arr_10 [i_0] [i_1] [i_2] [8] [1]) : 9069))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_15 -= var_5;
                            var_16 = (max(var_16, (((-(arr_4 [i_0] [i_6]))))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_24 [i_7] [i_1] [i_1] [i_0] = var_8;
                            arr_25 [i_1] [10] [10] = 234;
                            var_17 = (max(var_17, ((((arr_19 [10] [i_0] [i_2] [i_3] [i_7]) ? (arr_13 [i_3] [i_3] [8] [i_2 - 1] [i_0]) : (!var_7))))));
                            var_18 = ((((arr_19 [i_0] [i_1] [i_2 - 4] [i_3] [i_7]) ? var_9 : -13908)));
                            var_19 = (var_1 >= var_8);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_20 = (var_8 ? -20028 : (arr_13 [i_1] [i_1] [i_8 + 4] [i_9] [i_1]));
                                var_21 = 0;
                                var_22 -= ((-(arr_23 [i_2] [i_2] [i_8 - 2] [i_8] [i_9])));
                            }
                        }
                    }
                    arr_31 [i_0] [i_1] [i_1] = (((arr_21 [i_1] [i_1] [6] [6] [i_2 - 1]) ? var_4 : (arr_21 [i_1] [i_1] [i_1] [i_1] [i_2 - 4])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                var_23 = (((arr_20 [i_11] [i_11] [i_10 - 2] [i_10] [i_10 - 2]) ? ((((-212 > ((var_6 ? var_7 : (arr_18 [i_10 - 1] [i_11] [i_10] [i_11] [6]))))))) : (max((arr_22 [i_10] [i_10] [i_10] [i_10] [8] [i_11] [i_11]), (((arr_20 [i_10] [i_10 - 2] [i_10] [7] [i_11]) ? var_1 : 0))))));
                arr_37 [i_10] [i_11] = (arr_23 [i_10] [i_11] [i_10] [i_11] [i_11]);
                var_24 += (264904119 * 0);
                var_25 = (((-(arr_26 [i_10]))));
                var_26 = (min(((!(!var_9))), ((!((((arr_11 [i_10] [i_10] [i_10] [i_10] [i_10 - 2] [i_10 - 1]) ? (arr_22 [6] [i_11] [i_11] [i_10 + 1] [0] [i_10] [3]) : var_1)))))));
            }
        }
    }
    #pragma endscop
}
