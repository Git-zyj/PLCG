/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_10 -= ((-(min(9362189500766718717, (arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                                arr_13 [i_2] [13] = (arr_10 [i_4] [i_3 - 1] [i_2] [i_0] [i_0]);
                            }
                        }
                    }
                    var_11 = (min((max((((-(arr_3 [16])))), 411136181677562568)), (((!((var_3 || (arr_9 [i_2]))))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_12 = (min(var_12, (arr_7 [9] [i_6] [i_7] [1])));
                        var_13 = ((((var_6 ? 0 : 16964814354035120576)) ^ var_6));
                        var_14 = var_2;
                    }
                }
            }
        }
        var_15 = ((var_0 <= (((arr_3 [i_5]) << (var_8 - 8475756831776800358)))));
        var_16 -= (((var_1 != 4125) & var_0));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_17 = ((((((arr_6 [i_9] [i_9]) ? var_4 : ((var_2 ? (arr_27 [i_9] [i_9]) : var_5))))) ? ((((15983296639639411611 * var_1) > (arr_10 [i_9] [i_9] [i_9] [i_9] [i_9])))) : var_9));
        arr_28 [i_9] [i_9] = var_4;
        arr_29 [i_9] = 2463447434070140005;
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_18 = ((((max((arr_26 [i_10]), (~var_8)))) ? (arr_8 [i_10] [i_10] [i_10] [i_10]) : ((((max(15983296639639411611, (arr_1 [i_10] [i_10])))) ? (((arr_11 [i_10] [i_10] [i_10] [i_10] [i_10]) ? (arr_16 [1]) : (arr_9 [i_10]))) : (arr_3 [i_10])))));
        var_19 = (((((var_9 ? ((15983296639639411591 ? var_0 : (arr_19 [i_10] [i_10]))) : (max(var_4, -1928172723))))) ? (arr_23 [2] [i_10]) : (arr_26 [i_10])));
        var_20 += var_5;
    }
    #pragma endscop
}
