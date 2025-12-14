/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (min((max(1, -1)), (max(-542383666, ((max(-28, 1)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = 1;
                                var_15 = (max(var_15, ((max(((1 ? (-2147483647 - 1) : 99)), 1)))));
                                var_16 = ((max((-127 - 1), 45416)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_4;
    var_18 = (-32767 - 1);
    #pragma endscop
}
