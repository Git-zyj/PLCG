/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 <= ((((max(98, -6))) ? (((min(4, var_7)))) : -7367183137177038752))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = (var_9 ? (((~(!var_3)))) : (((((max(-6615762968653485466, var_8)) + 9223372036854775807)) >> (var_2 - 4314143637696525283))));
                var_12 = (-9 ? -9 : ((((0 ? 0 : 250)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] = (1 && 21610);
                                arr_14 [i_0] [i_2] [i_2] [i_4] = ((+((((arr_7 [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_3 + 1]) < var_9)))));
                                var_13 -= (-(arr_11 [i_0]));
                                var_14 |= ((max(var_1, (arr_4 [i_3 - 1] [7] [i_3 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
