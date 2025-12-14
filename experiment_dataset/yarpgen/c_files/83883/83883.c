/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((((arr_4 [i_1]) + (((arr_1 [i_1] [i_0]) - 1))))) < (max(var_14, 1))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [1] [i_0] [i_0] = (((-9223372036854775802 && var_14) ? ((((arr_3 [i_3 + 1]) && 0))) : ((max(48, 237)))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = var_14;
                            }
                        }
                    }
                }
                var_21 = (min(var_21, (((((max(1, 1))) << (7648978011984800675 - 7648978011984800649))))));
                var_22 = (((arr_6 [i_0] [i_0] [i_0] [10]) ? (~var_12) : (((5901 ? 70 : -5902)))));
            }
        }
    }
    #pragma endscop
}
