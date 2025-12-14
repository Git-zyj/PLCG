/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((min(((((arr_13 [i_0 + 1] [i_0 + 1]) <= (arr_13 [i_0 + 1] [i_0 + 1])))), (((arr_2 [i_0 + 1] [i_0 + 1]) / 25042)))))));
                                arr_16 [0] [i_1] [i_2] [i_3] [i_2] [i_3] [i_4] = ((47265 ? (min((20 != var_12), var_9)) : var_7));
                                var_17 ^= 231;
                            }
                        }
                    }
                    arr_17 [4] [4] |= var_11;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            {
                arr_24 [i_5] [i_6] = 131071;
                var_18 = var_1;
                arr_25 [i_5] [i_5] = ((var_7 || (((-((var_10 & (arr_4 [i_5] [18] [i_5]))))))));
                var_19 = ((~(((arr_23 [i_5] [0]) ^ (arr_8 [i_5] [i_6] [i_6])))));
            }
        }
    }
    #pragma endscop
}
