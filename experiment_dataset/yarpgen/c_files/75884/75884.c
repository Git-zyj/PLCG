/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(38251, 0));
    var_18 = -6571289729621664553;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = var_6;
                            var_21 = (max(var_21, (arr_3 [i_0] [i_0] [i_0])));
                        }
                    }
                }
                arr_9 [i_0] |= (38251 / 1018089551);
            }
        }
    }
    #pragma endscop
}
