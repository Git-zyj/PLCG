/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = ((((var_8 ? var_3 : var_8)) < (!var_10)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 -= (max(2184754303295139975, (((-(arr_8 [12] [12]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = ((((((arr_10 [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_4]) ? (arr_10 [1] [1] [i_2] [i_2] [i_3] [i_4]) : var_12))) ? (!61) : (arr_11 [i_0] [9] [i_2] [i_2] [i_3] [i_4])));
                                var_17 = (min((arr_17 [i_0] [i_0] [4] [i_0] [i_4]), var_12));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 ^= (((((~var_8) + 9223372036854775807)) << (((((max(-8501803441879188178, var_5)) + 1054769537)) - 1))));
    #pragma endscop
}
