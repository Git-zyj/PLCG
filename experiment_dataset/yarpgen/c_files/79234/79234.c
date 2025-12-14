/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = ((!(((((((arr_0 [i_0]) + 17264))) ? ((1 ? 1 : 1)) : (~1))))));
                    arr_8 [i_0] [i_1] = (((((((((arr_4 [i_0]) ? 1 : var_11))) * var_9))) ? -var_8 : var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 ^= (arr_0 [8]);
                                var_14 = ((!(arr_4 [i_2 + 4])));
                                var_15 = ((((((((1 > (arr_6 [i_0])))) * (((1 < (arr_13 [i_0] [i_0] [i_2 + 2] [1] [i_0]))))))) * (max((arr_1 [i_0]), var_0))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] = ((-var_6 ? ((((arr_5 [i_2 + 3]) < (arr_12 [i_1] [i_2 - 1] [i_2])))) : ((((1 + (arr_9 [i_1] [i_0]))) + (arr_11 [i_2 + 4] [i_2] [i_2] [3] [i_2 + 4] [i_0] [i_2 + 1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_16 &= ((((((((arr_13 [i_7] [i_5] [i_6 - 2] [18] [i_7]) ? (arr_21 [i_6 - 2] [i_6 - 2] [i_5]) : 1))) ? ((min(var_2, 1))) : (min((arr_16 [i_5]), var_9)))) * ((((((var_2 && (arr_4 [i_6])))) | (arr_18 [1] [i_6]))))));
                    var_17 = ((((var_3 ? (arr_17 [i_5]) : (arr_14 [12] [i_7] [i_7] [i_5] [i_5]))) + (((var_5 ? ((var_4 ? 1 : var_6)) : 1)))));
                    arr_23 [i_5] [2] [i_5] = ((arr_11 [i_5] [22] [i_7] [i_5] [18] [i_7] [i_7]) * (((1 || var_3) ? ((-(arr_3 [i_5]))) : (var_1 | 1))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                var_18 = ((((arr_3 [i_8]) ? (1 | var_0) : ((((var_3 >= (arr_1 [i_8]))))))) >= ((min((((var_4 + 2147483647) << (((((arr_28 [7] [i_8]) + 26106)) - 12)))), ((min(1, 1)))))));
                arr_30 [i_8] = (((arr_5 [i_8]) ? ((-(arr_10 [i_8] [i_9] [i_9] [i_9]))) : (((arr_24 [i_9]) ? var_8 : 1))));
            }
        }
    }
    var_19 = ((min((min(var_7, 1)), var_3)));
    var_20 = 1;
    #pragma endscop
}
