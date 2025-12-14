/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [15] = -3;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [10] [i_1] [i_2] [i_3] [i_0] = var_15;
                                var_18 *= (((-70 ? -9007883666359383473 : var_5)) < (max(70, var_2)));
                            }
                        }
                    }
                }
                var_19 = ((((max(var_0, 9007883666359383473))) ? ((min(var_15, -70))) : (var_14 + -70)));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1 - 1] [20] [i_0] [i_7] |= 4294967295;
                                var_20 = (min(var_20, (max((((((min(70, var_9))) ? var_15 : 2941653030))), (-70 % var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
