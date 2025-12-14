/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_16);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = 8179628704929458665;
                        arr_13 [i_0] [i_1] [i_0] [i_3] = var_12;
                        var_18 = ((((max(0, 1))) ? 13 : 13));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_19 = 1;
                        var_20 = 4294967282;
                    }
                    var_21 = (((((min(-100, 776178992))) ? 101 : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                }
            }
        }
    }
    var_22 = (16724895761315529088 * (((var_16 ? var_10 : var_10))));
    var_23 = (max(var_23, var_6));
    #pragma endscop
}
