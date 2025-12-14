/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((!((((arr_4 [i_0] [i_0] [i_2]) ? (arr_7 [i_0] [i_0] [i_0] [i_2]) : (arr_0 [i_2])))))) ? (~-18109) : (arr_9 [i_1]))))));
                    var_17 = (((((((!(arr_2 [i_2]))) ? var_2 : (arr_8 [i_2] [i_2] [i_2 + 2] [i_2])))) ? (arr_2 [2]) : ((((100 ? var_6 : var_12))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_18 = ((((((arr_17 [i_3 + 1] [9] [11] [i_5 - 1]) ? ((max((arr_12 [18]), (arr_22 [14] [9])))) : (((1101102229 || (arr_18 [2]))))))) ? ((((((arr_18 [i_4]) - 32)) << (((arr_18 [i_3 + 2]) - 238))))) : ((~((var_8 ? var_0 : (arr_22 [i_3] [2])))))));
                                var_19 += ((((max((arr_23 [i_6] [i_6] [i_5 + 1] [21] [21] [21]), (arr_19 [i_4] [i_4] [i_5] [i_4])))) ? (120 > 136) : (arr_11 [i_5 - 2])));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, (arr_20 [i_3 + 2] [i_3 + 2] [i_4] [i_4] [i_3 + 2] [i_4])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {
                var_21 *= (min(30720, var_1));
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_34 [i_8] [i_8] [i_10] [i_11 - 1] = arr_25 [i_11 + 1];
                            var_22 = (max((!var_4), var_12));
                            arr_35 [10] [10] [i_8] [9] [i_8] = 65535;
                        }
                    }
                }
            }
        }
    }
    var_23 = var_12;
    var_24 = (min(var_7, (((var_14 + 2147483647) >> (var_11 - 1026248779)))));
    #pragma endscop
}
