/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((var_6 == (((-32767 - 1) ? (-9223372036854775807 - 1) : -1)))))));
    var_18 = ((32762 ? 65535 : (3 == 1)));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_1] [i_4] = var_10;
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = (~var_9);
                                arr_17 [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_2] [i_2] [i_3] [i_4] &= ((var_4 ? ((((((arr_7 [i_3] [2] [i_0]) * var_7)) >= (arr_7 [i_0] [i_1] [i_4])))) : (arr_1 [i_4 + 1])));
                            }
                        }
                    }
                }
                arr_18 [i_1] [i_1 + 4] [i_0] = (arr_6 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
