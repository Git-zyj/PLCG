/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((min(((-32748 ? 2702613556590298962 : 12)), ((max(-31, -58)))))) ? (min(44387, (~var_3))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((arr_5 [i_1 + 1]) & (((min(120, -48))))));
                var_13 = (arr_0 [i_1]);
            }
        }
    }
    var_14 = (min(var_6, ((((~-6130959908655653067) ? (((18 == (-2147483647 - 1)))) : var_7)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            {
                var_15 -= var_6;
                var_16 = (min((arr_8 [i_2]), (arr_10 [i_2] [i_2])));
                arr_12 [i_2] [i_3 + 1] [9] &= (arr_8 [9]);
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] [i_3 - 3] = (arr_10 [i_5 - 1] [i_5 + 1]);
                                var_17 -= ((((((arr_14 [i_5 - 3] [i_4 + 1] [i_4] [i_3 - 3]) ? 102 : (arr_14 [i_5 - 3] [i_4 + 1] [i_3] [i_3 - 2])))) ? ((18446744073709551615 - (arr_14 [i_5 - 1] [i_4 + 1] [9] [i_3 - 3]))) : ((min(var_9, -65)))));
                            }
                        }
                    }
                }
                var_18 = (max(var_18, ((((min(var_6, var_1)))))));
            }
        }
    }
    #pragma endscop
}
