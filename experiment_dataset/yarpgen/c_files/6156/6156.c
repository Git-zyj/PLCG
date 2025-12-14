/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min((~var_19), ((var_3 ? var_8 : -2300986018393666467))))) & (min(5400553567661517345, (43 & var_19)))));
    var_21 = (max(var_21, ((min(((1 ? -34 : -30)), -20)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [9] [9] [i_2 + 1] [i_1] = ((~((min(30, 2735)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [2] [i_0] [i_1] [i_2 + 1] [i_3] [i_2 + 1] = ((~0) ? -var_12 : ((((arr_12 [i_2 + 1] [9] [i_2 + 1] [i_2] [1] [i_1 - 1] [i_1 - 1]) < var_15))));
                                var_22 *= (((73 ? (~var_9) : -1253211251)));
                                var_23 = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
