/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 = var_10;
                    var_14 = (arr_8 [i_0] [i_0] [i_0] [i_2]);
                }
                var_15 = (max(((var_6 ? var_5 : ((var_11 ? 4294967283 : (-9223372036854775807 - 1))))), ((-var_2 ? 42 : var_0))));
            }
        }
    }
    var_16 -= (((min(var_2, var_1)) - var_7));
    var_17 = var_7;
    #pragma endscop
}
