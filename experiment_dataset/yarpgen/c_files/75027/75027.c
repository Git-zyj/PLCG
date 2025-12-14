/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_8 == var_0);
    var_13 = (0 ? (!1) : var_4);
    var_14 ^= (min(1, -8));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 2] [i_0 + 1] [i_1] [i_2] [i_3] [i_3] [i_4] = (((arr_10 [i_1]) * ((((var_8 ? 212463746430150919 : 621313362))))));
                                var_15 = -864861653;
                            }
                        }
                    }
                }
                var_16 ^= arr_9 [i_1] [i_1] [i_0] [i_1];
            }
        }
    }
    var_17 = (min(var_17, var_7));
    #pragma endscop
}
