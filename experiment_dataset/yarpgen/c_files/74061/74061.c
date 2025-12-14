/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = 4294967295;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [11] [5] [i_2] [i_2] [i_2] [i_2] [i_2] = (min(((((arr_8 [i_0] [i_1] [i_1]) * -29))), ((334987926 * (arr_8 [i_1] [i_2] [i_3])))));
                                arr_15 [i_1] [i_2] = var_5;
                            }
                        }
                    }
                    var_12 ^= (((+(((arr_12 [i_1]) / 32038)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_32 [i_5] [i_5] [i_7] [i_5] [14] = ((((max((min(345200844154032021, 0)), (arr_25 [i_5] [i_6] [i_7] [i_9])))) ? ((((-1894252948 / -3364) ? var_10 : 33301))) : (((arr_6 [i_5] [i_8] [i_5]) * var_7))));
                                var_13 |= ((((max(2130374142, (var_3 * 32226)))) || ((((48 || var_4) * 4294967265)))));
                                arr_33 [i_5] [i_6] [i_7] [10] = (((((((32234 ? 0 : 32228)) * (45 || 33290)))) * ((-65 ? (((arr_21 [i_5] [i_5] [i_7]) / var_5)) : var_8))));
                                var_14 = (((4208134236 + -11250) ? (((arr_21 [i_8] [1] [1]) + (arr_21 [i_8] [16] [i_7]))) : (((((-6 ? 32224 : 64)) - (62 + 212))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_15 = (arr_17 [i_5] [i_5]);
                                arr_39 [i_5] [i_5] [0] [i_7] [7] [7] [i_11] = var_4;
                                var_16 = (min(var_16, (((+(((arr_18 [i_5]) ? 32748 : (arr_18 [i_7]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
