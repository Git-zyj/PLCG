/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        arr_2 [20] = arr_1 [i_0];
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_16 = -32767;

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                arr_13 [i_1] &= ((!((((~var_2) ? (((var_3 + 9223372036854775807) >> (var_7 - 2981660912162850709))) : (var_13 & var_4))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_17 = (min(((((((arr_19 [i_1] [i_1] [13] [i_2] [i_3] [i_4] [i_5]) != (arr_7 [i_4]))) ? (arr_9 [i_1] [i_2] [0]) : (((!(arr_7 [i_1]))))))), (((((arr_8 [i_1] [i_2]) >= (arr_5 [10]))) ? (((arr_4 [i_3 + 1]) ? var_13 : (arr_7 [14]))) : ((min(var_12, var_4)))))));
                            arr_20 [i_1] [i_3] [i_3] [4] [4] = (max(((max((arr_4 [i_3 + 1]), (arr_5 [i_4])))), 29537));
                        }
                    }
                }
                var_18 = (((((-(arr_14 [i_3] [i_3 - 1] [i_1 + 1] [i_2 - 1] [i_2] [i_3])))) ? (min(0, ((var_4 + (arr_0 [i_2]))))) : (((~(((!(arr_9 [9] [i_2] [i_1])))))))));

                for (int i_6 = 4; i_6 < 14;i_6 += 1)
                {
                    var_19 += (max((arr_11 [i_6] [i_3]), (((arr_18 [i_6] [i_6 - 4] [i_2 + 1]) * (arr_3 [i_1] [i_6 + 2])))));
                    var_20 = (((-(!1))));
                    var_21 = ((((max(518171752, (!var_5)))) ? ((-(arr_15 [i_3] [i_1] [i_3]))) : (min((min(var_13, 1)), ((max((arr_4 [i_6]), var_8)))))));
                    var_22 = (min((((((11456820656238024191 / (arr_8 [6] [i_2])))) ? ((var_4 ? 1943052576 : 1)) : (((~(arr_15 [i_3] [i_2] [i_3])))))), 1));
                }
            }
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            arr_27 [i_1] [i_7] [i_1] = (((arr_7 [i_7]) == (((min(var_9, var_10)) & var_5))));
            arr_28 [i_1] &= (((-(arr_23 [i_1] [i_7 + 2]))));
            var_23 = (((((arr_14 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [5]) < 1)) ? (arr_14 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]) : (((arr_14 [i_7] [i_7] [i_7] [i_1] [i_7 + 2] [i_7]) ? 1 : (arr_14 [i_7] [i_7] [i_7] [1] [i_7 + 2] [i_7])))));
            var_24 = (min((arr_4 [i_1]), (((var_0 / var_0) ? (((arr_19 [7] [i_7] [i_1] [1] [1] [1] [1]) ? -9030777500419309278 : (arr_0 [i_1]))) : (arr_5 [i_7])))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_25 = ((((((arr_26 [i_1 + 1] [i_8]) ? (arr_26 [i_1 + 2] [i_1]) : (arr_26 [i_1 - 2] [i_8])))) ? (arr_14 [i_8] [i_8] [i_8] [4] [i_8] [i_8]) : (min(var_10, (((arr_7 [1]) ? (arr_7 [i_1]) : (arr_18 [i_1] [i_8] [6])))))));
                    arr_33 [8] [i_8] [4] = ((((min((arr_23 [i_1] [i_1]), (arr_23 [i_8] [6])))) ? (((arr_23 [i_8] [i_9]) ? (arr_23 [i_1] [i_1]) : (arr_23 [i_8] [i_1]))) : ((-(arr_23 [i_8] [16])))));
                }
            }
        }
        arr_34 [12] [i_1] &= (min((((arr_32 [i_1] [i_1] [i_1 + 2]) ? (arr_32 [7] [i_1] [i_1 - 2]) : (arr_32 [1] [7] [i_1 + 2]))), ((max((arr_19 [i_1] [i_1] [11] [i_1] [i_1 - 2] [6] [i_1]), (max((arr_29 [i_1]), (arr_4 [i_1]))))))));
        arr_35 [i_1] [i_1] = (((((min(1, (arr_17 [i_1] [i_1])))) ? (arr_10 [i_1]) : var_6)));
        arr_36 [16] = (min(-67, (max(40, 2705210712))));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_26 *= (((((((arr_16 [i_10] [i_10] [i_10] [i_10]) ? var_0 : (arr_7 [i_10])))) ? (arr_21 [i_10]) : (arr_5 [i_10]))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    arr_46 [i_10] [1] [1] [i_11] = ((((~(arr_8 [i_11] [i_12]))) == (~1)));
                    arr_47 [i_10] [i_12] [i_12] = ((-(min(((((arr_4 [i_10]) ? 118 : var_5))), (arr_7 [i_11])))));
                }
            }
        }
    }
    #pragma endscop
}
