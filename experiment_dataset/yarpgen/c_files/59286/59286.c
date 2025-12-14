/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(var_2, ((max(var_18, var_7))))) < var_19));
    var_21 = (var_5 > (min(14932343324338739598, 103)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (min(3514400749370812021, ((((-102 || -8192) == 153)))));
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 1] [1] [i_3] [i_3] = 1023;
                                arr_17 [11] [i_1] [i_0] [i_3] [11] = max(153, (((arr_7 [i_0]) - (arr_7 [i_0]))));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        var_23 &= (arr_8 [i_1] [i_1]);
                        var_24 = (((((var_10 != (arr_9 [i_0 + 3] [i_2 - 1] [i_5])))) <= (arr_9 [i_0 + 2] [i_2 + 2] [i_2])));
                        var_25 = (min((((arr_14 [i_0] [i_0] [i_0]) - (arr_14 [i_0] [i_0] [1]))), (129 >= 33808)));
                        var_26 = ((((max((arr_10 [1] [i_0] [1]), var_4))) | (((arr_15 [i_0] [i_2 + 2] [i_0] [i_2 + 2] [i_2 + 2]) | (arr_10 [i_2] [i_0] [i_2])))));
                        var_27 = (var_13 ^ (min((arr_8 [i_0 + 3] [i_0]), (arr_7 [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_0] [16] [i_0] = (arr_1 [i_0]);
                        arr_24 [i_0] [i_2] [i_2] = (i_0 % 2 == 0) ? (((103 >> (((arr_14 [i_0 + 4] [i_0] [13]) + 5349287688445015396))))) : (((103 >> (((((arr_14 [i_0 + 4] [i_0] [13]) + 5349287688445015396)) + 606403925524876575)))));
                        arr_25 [i_0] [i_1] [i_0] [i_0] [i_2] [i_2] = (((arr_9 [i_2 + 2] [i_1] [i_1]) / (arr_9 [i_2 + 2] [i_1] [i_0])));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = (arr_18 [i_0] [5] [i_2] [1] [11]);
                    }

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_28 = (min(var_28, var_17));
                        arr_29 [14] [i_1] [i_0] = (((arr_19 [i_0] [10] [i_0 + 4] [i_2 + 3] [i_7 + 2] [i_7]) == var_11));
                        var_29 = (((arr_27 [i_0 + 3] [i_0 + 3] [i_2 + 2] [i_0] [i_7 + 1] [i_7 + 1]) >= var_5));
                    }
                    var_30 = (-9223372036854775807 - 1);
                    var_31 = (max((max((arr_22 [i_2 - 2] [i_0] [i_2] [i_2]), (arr_22 [i_2 + 2] [i_0] [i_1] [i_1]))), (max((arr_22 [i_2 + 3] [i_0] [i_2] [i_2]), (arr_22 [i_2 + 3] [i_0] [i_0] [4])))));
                }
            }
        }
    }
    #pragma endscop
}
