/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_10, (max((((0 ? 2147483633 : 22))), (~var_0))));
    var_12 = (!-1398855112);
    var_13 = (((var_5 ? var_1 : var_2)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = var_1;
                    var_15 = 9091011059089203849;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_16 = 19;
        arr_11 [i_3] = arr_8 [i_3] [i_3];
        var_17 = ((arr_8 [i_3] [i_3]) ? 3844776624051599437 : var_4);
    }
    var_18 = (max((((var_10 ? var_9 : 1))), ((-3844776624051599415 ? var_10 : -3844776624051599415))));
    #pragma endscop
}
