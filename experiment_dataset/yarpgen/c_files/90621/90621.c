/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min(((min(var_0, (var_6 * 1)))), (max((~var_0), (max(var_13, 3)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 += ((((max(109, 1642120624))) ? (max((arr_0 [i_0 + 1]), (arr_4 [i_1]))) : ((var_3 ? (~var_2) : ((var_4 ? var_10 : var_13))))));
                var_17 = (max(2652846670, 1642120625));
                var_18 = (((0 != var_2) < (arr_3 [i_0] [i_1])));
                var_19 = (((min((arr_1 [i_0 + 1]), var_11)) & ((-(arr_1 [i_0 + 1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_5] [i_4] [i_3] [i_2] [i_2] [i_2] = var_7;
                                var_20 = -1642120625;
                                var_21 = (max(var_21, var_0));
                                var_22 *= (((((var_2 ? (arr_14 [i_3] [i_3]) : 9223372036854775807))) ? (max(var_10, (arr_14 [i_2] [i_3]))) : ((((arr_14 [i_4 - 1] [i_5]) ? 2652846655 : (arr_14 [i_2] [i_2]))))));
                            }
                        }
                    }
                    var_23 = -25;
                }
            }
        }
    }
    #pragma endscop
}
