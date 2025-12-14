/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_18 &= (!var_4);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = var_0;
                            var_20 = (max(var_20, var_6));
                            var_21 = (--9223372036854775807);
                        }
                    }
                }
            }
        }
    }
    var_22 = 64703;
    var_23 = var_12;
    #pragma endscop
}
