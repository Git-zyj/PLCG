/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = min((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_4)), ((1 ? 1 : (arr_2 [i_0] [i_0]))));
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [6] [6] [i_2] [6] [i_3] |= (var_10 || 1);
                        var_19 = (!0);
                    }
                }
            }
        }
        var_20 = (arr_4 [i_0] [i_0]);
    }
    var_21 = ((var_9 >= (max(var_1, var_13))));
    var_22 = (min(var_22, var_10));
    var_23 = 2019053256;
    #pragma endscop
}
