/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 2199023255551));
    var_19 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = -2824237092410851043;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_20 = -2199023255552;
                            var_21 = (max(var_21, 1));
                        }
                    }
                }
            }
            arr_13 [i_0] [i_0] [10] = 1;
        }
        var_22 = (min(var_22, 1));
        arr_14 [i_0] = 2459936255;
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_23 &= 2365919722;
        arr_18 [i_5 + 1] = 1929047599;
    }
    #pragma endscop
}
