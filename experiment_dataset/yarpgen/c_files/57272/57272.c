/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((var_7 + ((var_10 ? var_6 : (0 * -32740)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] = var_4;
                                var_19 = ((max(var_3, var_5)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_6] = ((((var_6 & (0 & 65527))) + (((var_12 || ((max(var_6, var_17))))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_20 = (-32739 ^ var_16);
                            var_21 = var_15;
                        }
                    }
                }
                var_22 = (-((~(var_3 ^ var_16))));
                arr_30 [16] |= ((((var_15 & (5 | var_18))) * (-var_2 / 17854864223174425007)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_37 [i_9] [i_9] [0] |= (((((9108498048562472535 + var_11) + (!1))) ^ (623 >> 14)));
                arr_38 [6] &= var_18;
                var_23 = (min(var_23, ((((var_16 ^ -var_17) ? var_13 : (((-(-32740 / var_1)))))))));
            }
        }
    }
    #pragma endscop
}
