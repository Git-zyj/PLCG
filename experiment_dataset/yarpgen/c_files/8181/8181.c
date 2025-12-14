/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = (2 | -36);
                    var_16 = var_9;
                    arr_6 [i_0] [19] [14] = ((!(arr_2 [i_1])));
                }
                arr_7 [13] [i_1] = (~var_7);
                arr_8 [i_1] [i_1] = (max((((!(!2508511284)))), (arr_0 [i_1])));
            }
        }
    }
    #pragma endscop
}
