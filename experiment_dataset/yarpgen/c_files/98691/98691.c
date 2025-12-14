/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [4] = min((min(((var_4 ? var_0 : 18)), ((((arr_0 [16]) ? (arr_3 [12] [15]) : (arr_0 [1])))))), (arr_0 [17]));
        var_19 = (arr_2 [3] [i_0]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((((((arr_5 [i_1]) && var_7)) ? (arr_3 [i_1] [i_1]) : (min(-1102756991, -1650059761))))) ? (((min(var_13, 1102757016)) / ((((arr_1 [i_1] [i_1]) ? 1102756988 : var_4))))) : (max(((-2147483634 ? (arr_6 [i_1] [13]) : 1102756993)), ((min(11173, (arr_2 [i_1] [1]))))))));
        arr_8 [i_1] [4] = var_12;
    }
    var_20 = (((var_8 ? var_5 : (((1 ? var_8 : var_13))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_13 [i_3] = ((((((max(var_13, (arr_11 [i_3] [i_2] [6]))) - ((((arr_10 [1]) ? 2 : (arr_10 [17]))))))) ? (max(((2726717812 ? 7064 : -22550)), (arr_10 [i_2 + 3]))) : ((-((var_8 ? -126 : (arr_10 [i_2])))))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_21 = (max((arr_20 [i_6] [i_5] [i_4] [19] [i_2]), (min(((max((arr_20 [6] [i_3] [i_4] [9] [5]), (arr_18 [i_2] [i_3] [16])))), (2 * var_3)))));
                                var_22 = (max(var_22, ((((arr_19 [i_4] [i_3] [7] [i_3] [i_6] [3] [i_3]) + (max((arr_9 [i_2 + 4]), (arr_16 [i_2 + 2]))))))));
                            }
                        }
                    }
                }
                var_23 = (arr_14 [i_2] [7] [13] [3]);
            }
        }
    }
    var_24 += ((((((var_18 ? 9 : 2147483647)))) ? var_10 : var_5));
    #pragma endscop
}
