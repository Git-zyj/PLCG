/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_12 += ((((((arr_3 [i_0 + 2] [i_1]) ? var_5 : (arr_3 [i_0 - 1] [2])))) ? (arr_4 [i_0 + 1]) : ((((var_4 & var_1) != (((var_3 ? (arr_0 [11]) : (arr_4 [i_0 - 1])))))))));
                            var_13 ^= ((((((arr_6 [i_1] [i_2] [12]) && (arr_10 [i_0] [0] [i_2] [i_3]))) ? (var_10 - var_2) : ((var_3 ? var_7 : (arr_6 [i_0] [i_0 - 1] [i_0 - 1]))))) ^ ((((((arr_1 [i_1]) | (arr_8 [i_3])))))));
                        }
                    }
                }
                arr_12 [17] = ((arr_3 [i_0] [i_1]) == (((max((arr_2 [i_0] [i_0 + 1] [i_1]), (arr_2 [i_0 - 2] [i_0 + 1] [i_1]))))));
                arr_13 [i_0] [i_0] [i_0] = (max((arr_11 [i_0] [i_0] [13]), (((!(!268434432))))));
                var_14 += (((arr_2 [10] [i_1] [i_0 - 2]) > (arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] [i_5] = (arr_17 [i_5] [i_4]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_15 = (max(var_15, (arr_21 [i_4] [16] [10])));
                            var_16 = (min(var_16, ((((arr_22 [i_4] [i_6] [i_7]) << (((min(112, 341955371)) - 95)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                var_17 = (max(var_17, (((+(((arr_3 [i_8 - 2] [i_8 - 1]) ? (var_3 % var_5) : (((arr_29 [i_9]) ? var_3 : (arr_29 [i_9]))))))))));
                arr_31 [i_8] [i_9] = (((arr_21 [i_8 - 2] [i_8] [i_8 - 1]) + (arr_23 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 1])));
                arr_32 [1] [1] [i_9] = ((!(!38256)));
                var_18 *= ((!(((~(-127 - 1))))));
                arr_33 [i_8] [i_8] = (42 || 127);
            }
        }
    }
    var_19 = (min(var_19, (((var_11 ? ((((var_6 ? var_0 : var_1)))) : (((12041 | -110) ? (var_5 & var_8) : -var_0)))))));
    var_20 = ((var_9 >> (var_5 + 370)));
    #pragma endscop
}
