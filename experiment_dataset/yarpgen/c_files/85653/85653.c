/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (1661325378 / 9453180277074717727);
    var_21 = ((!(((-((var_6 ? var_9 : var_4)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = (((arr_2 [i_0]) ? var_13 : (((arr_0 [i_0]) ? ((0 ? var_12 : (arr_1 [i_0] [i_0]))) : ((((!(arr_1 [8] [i_0])))))))));
        var_23 = (((((-8993563796634833888 == ((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))))) * var_17));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 0;
        arr_7 [20] &= (((arr_0 [i_1]) ? ((((arr_4 [i_1 + 1] [i_1 - 1]) / (arr_5 [i_1 - 2] [i_1])))) : ((((!(arr_1 [i_1] [i_1]))) ? (arr_2 [i_1 + 1]) : (((arr_3 [6]) ? 38111 : 8993563796634833888))))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_24 ^= ((!(((var_2 ? (arr_8 [0]) : ((var_10 / (arr_5 [i_1] [i_1]))))))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_17 [i_4] [i_1] [3] = ((((((arr_5 [i_3 - 1] [i_2 - 1]) ? var_4 : (arr_1 [i_3] [i_4])))) ? (((var_19 - (arr_9 [i_4] [i_1] [i_4])))) : var_9));
                        var_25 ^= (max((((!(arr_4 [i_3] [i_3])))), (min(var_5, (arr_12 [i_1 + 2] [i_2 - 1] [i_1 + 2] [i_4])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 20;i_6 += 1)
            {
                {
                    var_26 ^= (~-105);
                    var_27 = (arr_13 [i_1] [i_1 + 2] [i_6 - 3] [i_6]);
                }
            }
        }
    }
    var_28 = var_18;
    #pragma endscop
}
