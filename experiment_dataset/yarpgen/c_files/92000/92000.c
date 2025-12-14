/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((~((var_2 ? var_3 : var_7)))))));
    var_20 = -var_9;
    var_21 = ((var_16 ? ((var_9 ? 4050962947 : var_17)) : (!var_8)));
    var_22 = (~var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_23 -= (((max((arr_6 [i_2 + 1] [i_1 - 1] [i_1 + 1]), 452125695)) / (arr_6 [i_2 + 1] [i_1 - 1] [i_1 + 1])));
                    var_24 ^= (max((((arr_3 [i_2 - 1] [i_1 + 3]) ? (arr_3 [i_2 - 1] [i_1 + 2]) : (arr_3 [i_2 + 1] [i_1 - 1]))), (((arr_3 [i_2 - 1] [i_1 + 3]) ? var_4 : (arr_3 [i_2 - 1] [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_25 = ((((((arr_3 [i_2 - 2] [i_2 - 2]) > (arr_13 [i_2 - 1] [i_3] [1] [i_1 + 1])))) * ((-99 ? (arr_3 [i_2 - 2] [i_2 - 1]) : (arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_1 - 2])))));
                                arr_15 [0] [i_0] [i_0] [i_0] = 23146;
                                arr_16 [11] [i_1] [i_2] [i_2] [i_1] [i_3] = (arr_11 [11] [i_1]);
                                arr_17 [0] [i_1] [i_1] [0] [i_1] [0] [i_1 + 1] = ((((((var_7 != -1840582748) == ((min((arr_13 [3] [i_1] [3] [6]), (arr_8 [i_2] [11] [i_2] [i_2]))))))) * (min((((arr_5 [i_1 + 4] [i_3]) ? 19 : 1072008220)), (arr_10 [i_0] [3] [i_2] [i_3] [i_4])))));
                            }
                        }
                    }
                    arr_18 [8] [i_1] [i_1] = ((1 ? (48683 * 12411032323819179187) : (~-1001350599)));
                }
                var_26 = (max(var_26, (((176 ? ((-1840582748 ? (arr_11 [i_1 - 2] [i_1 + 2]) : 25549)) : (-1840582759 == var_3))))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_27 = (min(var_27, (arr_26 [i_5] [1])));
                                arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] [i_7] = (!(~var_17));
                                var_28 ^= ((var_6 ? 73 : (((-(min((arr_14 [i_0] [i_1] [i_5] [i_6] [i_5] [i_7 - 2]), (arr_7 [i_1] [i_1] [i_6] [i_7]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
