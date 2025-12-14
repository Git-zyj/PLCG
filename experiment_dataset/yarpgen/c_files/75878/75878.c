/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_13 ^= ((-(((arr_4 [i_0 - 1] [i_1 - 2] [i_1 + 2]) ? (arr_4 [i_0 - 2] [i_1 + 1] [i_1 + 3]) : var_1))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_14 = -1;
                    arr_7 [i_0] [i_1] [i_1 - 1] [i_0] = 4094;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_15 = ((1 ? 18446744073709547522 : 1));
                                var_16 = ((~(arr_10 [i_5])));
                            }
                        }
                    }
                }
                arr_22 [i_3] [i_3] [i_4] = ((!((((((-(arr_18 [21] [i_4] [i_3] [i_4])))) ? (arr_15 [i_3]) : 1)))));

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_17 = var_2;
                    arr_25 [i_3] [i_3] = (min(((min(1, (arr_14 [i_3] [i_3] [i_3])))), ((~((~(-9223372036854775807 - 1)))))));
                }
                var_18 -= ((-((17703135039244992573 ? 67108863 : (arr_10 [i_4])))));
            }
        }
    }
    #pragma endscop
}
