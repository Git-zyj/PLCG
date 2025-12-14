/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((52735 >> (arr_6 [i_0] [0] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [2] [i_0] [i_0] = (((arr_7 [i_2 + 1] [i_3 - 1] [i_4] [i_4 + 1]) - 1));
                                var_14 = (((((((max((arr_13 [i_0] [i_1] [i_2] [i_0] [i_4]), (arr_5 [i_4] [i_0] [7])))) ? var_7 : ((var_8 ? 1 : var_13))))) ? (min((arr_13 [i_3] [i_3] [i_3] [i_3] [i_3 + 1]), (((arr_12 [i_1] [i_0] [i_2] [i_3] [i_1] [i_2]) * var_9)))) : (max(((42557 >> (var_6 + 46))), (arr_5 [8] [i_0] [i_2])))));
                                arr_17 [9] [i_1] [i_0] [i_3] [i_3] = (((((var_3 ? var_7 : (arr_6 [i_0] [i_1] [i_2])))) ? var_4 : ((((max(1, var_13))) ? var_10 : var_3))));
                                var_15 = (((((((1 ? 1 : var_9)) > (110 && var_2)))) <= 1));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] = (!-var_10);
                }
                for (int i_5 = 4; i_5 < 8;i_5 += 1)
                {
                    arr_21 [i_1] [i_0] [i_5] [i_0] = (((1 ? 8433 : 5873)));
                    arr_22 [i_0] [i_0] [i_0] = (min(((max((arr_12 [i_5 - 4] [i_0] [i_0] [i_1] [i_0] [i_0 + 2]), (arr_2 [i_5 + 1] [i_0])))), ((((max((arr_20 [i_0] [i_0] [i_5 + 3]), (arr_2 [10] [i_0])))) ? ((1 * (arr_14 [i_5] [3] [10]))) : ((min(var_10, var_10)))))));
                    var_16 = ((var_5 ? (arr_20 [i_5] [i_0] [i_0]) : var_8));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    arr_26 [i_0] [0] [i_6] = (arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_6]);
                    arr_27 [i_0] [i_1] [i_6] [i_0] = ((39094 ? 59676 : (arr_3 [i_6] [i_1] [i_0])));
                    var_17 = (((1 << 1) && (arr_20 [i_6] [i_0] [9])));
                }
                var_18 = var_12;
                var_19 += ((var_0 ^ (((57102 != ((65533 ? 1 : (arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    var_20 = 1;
    var_21 = ((1 ? ((~((max(127, 1))))) : (((((var_7 ? 0 : 1)) != 1)))));
    #pragma endscop
}
