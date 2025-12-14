/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (max(880008958976167049, 1716806635))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((-((1 ? (1 - 1) : 1)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 = 695;
                            arr_12 [i_0] [i_1] [i_2] [i_3] = (-1358314241 != 695);
                        }
                    }
                }
            }
        }
    }
    var_22 ^= var_7;
    #pragma endscop
}
