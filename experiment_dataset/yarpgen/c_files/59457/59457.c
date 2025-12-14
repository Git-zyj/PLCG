/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = (max(var_21, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (arr_5 [i_0])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_23 = (max(var_23, (arr_2 [12])));
                    arr_9 [i_2] [i_1] [16] |= ((((-1 ? -89 : var_14)) < (arr_4 [i_0] [i_0])));
                }
                var_24 += (((~-89) ? ((var_15 ? (arr_5 [i_0]) : 16)) : -1));
                arr_10 [i_0] [i_0] [i_0] = var_19;
            }
        }
    }
    var_25 -= var_18;
    #pragma endscop
}
