/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = (max(var_3, ((-((var_11 ? 64 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((!((max((arr_1 [i_1]), (arr_1 [i_1])))))))));
                var_15 |= ((((min((arr_1 [i_1]), ((((arr_5 [i_1] [10]) <= -27138)))))) >= (((arr_1 [i_1]) ? ((min(-1, (arr_2 [i_1] [i_1] [i_1])))) : ((max(111, 1)))))));
                var_16 = (~-59);

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_17 = (max(var_17, (((((((arr_1 [i_1]) >= ((var_8 ? (arr_3 [i_1] [i_0]) : 81))))) & ((~(arr_2 [i_1] [i_1] [i_1]))))))));
                    var_18 *= (arr_8 [i_2]);
                    var_19 |= ((-(((((-113 - (-127 - 1)))) + ((9 ? var_11 : var_11))))));
                    var_20 -= ((-(min((((var_4 == (arr_8 [i_2])))), (var_10 * var_11)))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = (((-(arr_4 [i_0] [i_0 - 2]))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] [i_3] = (((arr_2 [i_0] [i_0 + 1] [i_0 - 3]) ? (arr_2 [i_0] [i_0 - 2] [i_0 + 4]) : var_11));
                    var_21 |= ((1771348593 ? -13057 : (arr_7 [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 = var_3;
                                arr_22 [i_0] [i_0] [i_3] [i_1] [i_0] = (((arr_11 [i_0]) ? (((0 >= (arr_21 [i_5] [i_1] [i_3])))) : (arr_10 [i_0] [i_1] [12])));
                            }
                        }
                    }
                }
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    var_23 = (max((min(((-(arr_12 [i_0] [i_1] [i_6]))), (arr_24 [i_0 + 3]))), ((255 * (((arr_12 [i_0] [i_1] [i_1]) ? (arr_15 [i_0 + 2]) : (arr_2 [i_0] [i_1] [1])))))));
                    var_24 ^= (arr_16 [i_1] [i_6 - 2] [i_6 - 3]);
                }
            }
        }
    }
    var_25 = var_2;
    #pragma endscop
}
