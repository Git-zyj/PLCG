/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] [i_4] = ((3 ? (max(1, 18446744073709551611)) : 3766));
                                arr_14 [i_0] [17] [i_2] [i_3] [i_0] = -2785081172048501952;
                                arr_15 [i_0] [i_1] [i_2] [i_0] = var_13;
                                arr_16 [i_0] [10] [i_0] [i_3] [10] = (((((18446744073709551615 / (var_6 + 8388608)))) ? (8 || 127) : ((var_8 ? (min(15962544755066286159, 1)) : 6))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_5] [1] = (1 | 2404279066);
                            arr_24 [i_0] = -456582473;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_37 [i_10] [i_9] [1] [i_7 + 1] = ((109 + (min((arr_6 [i_7 - 1] [i_7 - 1] [i_7 - 1] [1]), var_10))));
                            arr_38 [i_7] [i_8] [i_9] = (arr_19 [10] [10]);
                            arr_39 [i_7] [i_8] [i_9] [14] = ((((5 ? ((2537086700989483861 ? 0 : 65535)) : 6)) - -195660286));
                            arr_40 [i_7] [3] [i_9] [i_9] [i_10] = ((((1 ^ (arr_29 [i_7 + 2] [i_7 - 1] [i_8 + 1]))) << (arr_30 [i_8 - 1] [i_7 + 2])));
                            arr_41 [7] [4] [4] [7] [i_10] = (((((-(arr_9 [i_7 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1])))) ? ((((arr_36 [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_8 + 1]) != 1))) : ((1 << (((arr_9 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_8 + 1]) - 9598))))));
                        }
                    }
                }
                arr_42 [i_7 + 2] = ((((max((((arr_3 [18] [i_8 - 1]) >> 1)), (-128958626 || 15962544755066286162)))) ? (min((19893 & 1), 28932)) : 1));
            }
        }
    }
    #pragma endscop
}
