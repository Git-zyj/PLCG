/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -64134;
    var_17 = var_15;
    var_18 += (min(((min(((min(var_4, var_0))), 1391))), var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 += ((((0 ? ((1412 ? 1402 : 65535)) : 64134)) != var_10));
                                var_20 = (min(var_20, (min(((((134 ? 64136 : 15209434656971528756)) / ((min(732256557, 64140))))), var_4))));
                                arr_14 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = (min((~1421), 64134));
                            }
                        }
                    }
                    var_21 += -65534;
                }
            }
        }
    }
    #pragma endscop
}
