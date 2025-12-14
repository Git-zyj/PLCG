/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = ((~((((((arr_3 [i_0] [i_1]) ? 176 : (arr_7 [i_3 - 2] [i_0] [i_0])))) ? 32752 : ((((arr_8 [i_3] [i_1] [i_0]) || (arr_7 [i_2] [i_1] [i_0]))))))));
                            var_15 = ((((((arr_1 [i_1 + 2]) & (((arr_4 [16] [i_1] [i_1] [i_3 - 2]) ? (arr_0 [i_0] [i_1]) : -1))))) ? ((((((0 ? (arr_5 [i_0] [i_1 + 1] [i_2] [i_1 + 1]) : (arr_7 [1] [i_1] [i_2])))) ? -1 : (25535 + var_4)))) : (((((var_8 ? var_0 : (arr_0 [i_0] [i_1])))) ? ((((arr_6 [i_2] [i_0] [i_2] [i_0]) ? (arr_3 [i_0] [i_3 - 4]) : -1))) : (arr_6 [i_2] [i_1] [i_2] [i_3])))));
                        }
                    }
                }
                var_16 = (((((var_12 - (arr_5 [i_1 - 1] [i_1 + 1] [14] [i_1 - 1])))) + (((arr_5 [i_1 - 1] [i_1 + 1] [4] [i_1 - 1]) - 2811225778318024783))));

                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_18 [i_4] = ((~(((arr_9 [i_6] [1] [i_1] [i_1]) ? ((var_7 ? var_12 : 1)) : (arr_10 [i_1] [i_1] [i_4 - 1] [i_6 - 3] [i_6 - 3])))));
                                var_17 = (((((25518 & (!0)))) ? ((((((arr_12 [i_0] [i_0] [i_5]) - (arr_15 [i_0] [17] [i_0])))) ? (((arr_10 [i_0] [i_1] [i_4 - 1] [i_1] [7]) ? var_2 : (arr_10 [i_0] [i_1] [i_1] [i_5] [5]))) : (((arr_5 [i_0] [i_1] [i_4] [i_0]) ? var_1 : (arr_17 [i_0] [i_1] [i_6] [i_5] [i_6 - 2] [i_0] [20]))))) : ((~(((arr_14 [i_4] [i_4] [i_5] [i_6] [i_4]) ? var_7 : 1))))));
                                arr_19 [i_4] [i_5] [i_4 + 1] [12] [i_4] = ((((((arr_8 [i_1 - 1] [i_4] [i_5]) + (arr_8 [i_0] [i_0] [i_6])))) ? (arr_7 [i_4 - 2] [i_5] [i_6 + 1]) : (var_9 & var_8)));
                                var_18 = ((((((arr_16 [i_4]) & 47896))) ? (((~var_8) ? (var_1 | var_2) : var_5)) : (~32)));
                                var_19 = (min(var_19, (((((((arr_4 [i_6 + 2] [i_6 + 1] [i_4 - 1] [i_1]) ? (arr_4 [18] [i_6 - 2] [i_4 + 1] [i_4 - 2]) : (arr_4 [i_6] [i_6 - 3] [i_4 - 1] [i_4])))) ? (((-4599390086952835366 ? 717720159 : 59778))) : (((arr_15 [i_4 - 2] [i_4 - 2] [i_1 + 2]) ? (arr_12 [i_1 + 1] [i_5] [i_6]) : (arr_15 [i_0] [i_1 - 1] [i_4 - 1]))))))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_4] = ((((-(arr_4 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1]))) / 25519));
                }
            }
        }
    }
    var_20 = ((var_0 ? 1 : 8043));
    #pragma endscop
}
