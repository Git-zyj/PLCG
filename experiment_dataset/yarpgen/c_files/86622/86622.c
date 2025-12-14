/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (min((49152 + 15502), ((((var_2 ? -17775 : 0))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] = ((-var_5 ? (((arr_8 [i_0] [i_1] [i_4 - 1] [i_0] [i_2] [i_1] [i_3]) & 2147483647)) : (((((2147483647 ? (arr_0 [i_0]) : 9223372036854775807)))))));
                                var_16 = ((((2147483647 << (((-2147483647 - -2147483636) + 11))))) ? (((arr_8 [i_4 - 1] [i_2] [i_2] [i_2] [i_4 - 1] [i_4] [i_3]) ? (arr_8 [i_4 + 1] [i_1] [i_0] [1] [i_0] [i_0] [i_1]) : (arr_8 [i_4 - 1] [20] [20] [23] [i_4] [i_4] [i_2]))) : (min((arr_8 [i_4 - 1] [1] [i_2] [i_3] [i_4] [i_3] [i_0]), (arr_8 [i_4 + 1] [i_4 + 1] [i_1] [i_1] [5] [i_1] [i_4]))));
                                var_17 = (min(((var_6 ? (~49176) : (arr_4 [i_4 - 1] [i_2]))), (arr_4 [i_0] [i_1])));
                                var_18 &= (1820335198 != var_8);
                                arr_11 [i_0] [i_0] [i_2] = ((-2147483634 / (arr_8 [23] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4] [i_4])));
                            }
                        }
                    }
                }
                var_19 = ((1 ? 1820335180 : 1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_20 = (((((9223372036854775807 ? (-2147483647 - 1) : (arr_0 [i_5])))) > (((arr_12 [i_6]) ? (arr_12 [i_5]) : var_5))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_21 += ((~((-4 + (arr_8 [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9] [1])))));
                                var_22 = (127 || 798582450);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
