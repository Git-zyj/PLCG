/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = var_7;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_2] = (arr_2 [i_1 - 1] [i_2 + 2]);
                    var_17 = (arr_9 [i_2 + 1] [17] [i_2 + 2] [i_2 - 1]);
                    arr_12 [i_0] [i_2] [i_2] [i_0] = var_16;
                    arr_13 [1] [i_2] [i_2] [i_0] = ((((((arr_9 [i_0] [i_0] [i_1] [i_2]) ? 0 : var_3))) ? -513394401 : var_0));
                }
            }
        }
        var_18 -= (!var_0);
    }
    var_19 = var_14;
    var_20 = 1;
    #pragma endscop
}
