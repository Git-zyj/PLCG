/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (((71 ? ((0 ? 16736 : 48808)) : 48824)));
                    arr_10 [19] [i_0] [i_1] = -45;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = ((((((2336467006 ? 0 : 3322172497297055625)))) ? 1 : (((((255 ? -1831248877162217666 : -9223372036854775805))) ? ((2338285812236817968 ? 16728 : -278079500)) : 69))));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_1] = 1958500289;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_6] [i_2] [i_5] [i_6] [6] &= 34413;
                                var_22 = ((((((((222 ? 110 : -36))) ? -21389396917688404 : 133))) ? (((2078443834 ? 99 : 61599))) : ((-71 ? 212 : 90))));
                                var_23 *= ((9961189571484259416 ? -1091908882 : 26));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((((8795556151296 ? 108 : 15209921358978531530))) ? 7325997615859228794 : -97)));
    #pragma endscop
}
