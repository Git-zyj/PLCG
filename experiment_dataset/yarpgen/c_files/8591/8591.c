/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!((max(var_13, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = 14655822108889607982;
                var_16 = var_6;
                var_17 = (-1 || -1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((((((65535 & 3790921964819943651) | 14655822108889607986))) ? ((((max(9223372036854775794, 14655822108889607978))) ? (~14655822108889607969) : (!var_1))) : -14655822108889607982)))));
                            var_19 = 14655822108889607991;
                            var_20 += (3790921964819943625 || 3790921964819943622);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
