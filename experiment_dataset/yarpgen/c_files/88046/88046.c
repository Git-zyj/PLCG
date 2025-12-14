/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((((var_4 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((max((arr_1 [i_1]), (arr_1 [i_0])))) : (((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_1 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 &= min(((((min(var_3, (arr_3 [i_3] [i_1])))) ? 255 : ((252 ? var_11 : var_7)))), ((((239 > 49) < ((var_3 ? (arr_10 [i_3 - 3] [15] [i_0]) : var_2))))));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_14 = (254 || 3748822603621300441);
                                var_15 = (((arr_14 [i_4] [i_1] [i_1] [i_1] [i_1]) ? ((((arr_4 [i_0]) ? -17203 : (arr_10 [11] [11] [i_0])))) : ((13236 ? 13675287664189914677 : (arr_2 [i_2 - 1])))));
                                var_16 = (arr_2 [i_1]);
                                var_17 ^= ((4294967295 ? 4294967279 : (((((arr_3 [i_3 - 1] [i_4 - 2]) == 2147483647))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_18 *= var_4;
                                var_19 = (((((~(arr_21 [i_6] [i_6] [i_7 + 3] [i_6])))) ^ (((arr_14 [i_6] [i_1] [i_1] [i_1] [i_1]) ? (min(94, -3748822603621300441)) : (arr_17 [i_7] [i_7 + 2] [i_7] [i_7 - 2] [i_7 + 1] [i_7 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 += (max((var_5 * var_4), (~var_1)));
    var_21 = (~168);
    #pragma endscop
}
