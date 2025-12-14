/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (((arr_0 [i_0]) ? 13019614342881317379 : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 += (var_4 >= var_3);
                    var_21 -= ((var_6 ? -0 : (arr_2 [8])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 ^= (arr_8 [i_0] [i_1] [i_2] [1] [i_3] [i_3]);
                        var_23 += 3924153167;
                        var_24 -= (arr_8 [4] [8] [i_1] [10] [1] [8]);
                    }
                }
            }
        }
    }
    var_25 += var_7;
    #pragma endscop
}
