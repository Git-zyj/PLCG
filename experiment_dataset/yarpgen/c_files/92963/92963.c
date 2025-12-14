/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [1] [i_2] = (!3558789372150190338);
                                var_17 = (min(3163440382, 17045651456));
                            }
                        }
                    }
                    var_18 = (((~var_6) ? (min((-10 ^ -66), (384 ^ 482285521))) : ((((((arr_11 [i_0] [i_0] [i_2] [i_1] [i_0] [i_2] [i_2]) ? var_1 : var_13)))))));
                    var_19 = arr_1 [i_0];
                }
            }
        }
    }
    var_20 |= var_9;
    #pragma endscop
}
