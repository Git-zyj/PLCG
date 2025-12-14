/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 += var_11;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = 9223372036854775807;
                                var_22 *= var_18;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 *= var_13;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            {
                arr_17 [i_5] [i_5] [i_5] = (arr_13 [i_6 - 1] [i_5]);
                var_24 *= (((arr_16 [i_5] [i_5]) || (arr_14 [i_5] [i_5])));
                var_25 *= (((max(11315770663746291960, 1811464181)) * ((((arr_14 [i_5] [i_6 - 1]) / 1640354306)))));
            }
        }
    }
    var_26 = (min(var_26, var_0));
    #pragma endscop
}
