/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (((max((~0), (arr_1 [i_0 + 1] [i_0 + 1])))) && var_16);
                                var_18 = (min(var_18, ((((min((arr_10 [i_0 + 1] [i_1 + 1] [i_2] [0] [i_4]), var_13)) ? 1 : (0 & -24329))))));
                                var_19 ^= (min(((((max(0, 243))) ? -19974 : (min(1, 4294967295)))), (((!(((-(arr_0 [1])))))))));
                            }
                        }
                    }
                }
                arr_11 [i_0] = (max((min(41771, 1)), (((!(((16309 ? var_7 : 61))))))));
                arr_12 [i_0] = ((var_1 ? (((!23764) ? (((min(1, var_8)))) : (arr_8 [i_0 + 1]))) : (((1 | ((1 ? var_14 : 41766)))))));
            }
        }
    }
    var_20 |= (min(var_15, (max((58490 >= var_12), ((var_15 ? 194 : var_14))))));
    #pragma endscop
}
