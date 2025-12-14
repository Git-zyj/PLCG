/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [11] [11] = (min(((var_17 ? (min(-1002440198, 35184372088831)) : (var_14 + var_1))), ((max(0, var_5)))));
                    arr_8 [i_2] [i_1] [i_0] = (max((max(-35184372088820, var_13)), (min(((-35184372088831 ? var_9 : var_6)), var_11))));
                    arr_9 [16] [i_1] = 35184372088825;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 24;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_21 = (max(((var_14 ? var_11 : 24775)), (((max(1, 65532))))));
                            arr_19 [i_3] [i_4] [i_4] [20] [i_6] [i_6] = var_7;
                            var_22 = var_5;
                        }
                    }
                }
                var_23 = (((((var_1 ? var_18 : 36028797018963968))) ? -35184372088831 : (var_11 / var_16)));
                var_24 = -6304214793920435427;
            }
        }
    }
    var_25 = var_19;
    var_26 = var_7;
    #pragma endscop
}
