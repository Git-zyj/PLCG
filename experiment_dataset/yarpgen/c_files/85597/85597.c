/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 += (((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : var_15)) <= (18696 | 33)));
        var_17 = ((-6188 | ((0 << ((((var_13 ? (arr_1 [i_0] [i_0]) : var_10)) - 815654442))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 ^= (arr_1 [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, (((-((-(arr_3 [i_3] [i_3]))))))));
                        var_20 += ((((max((arr_4 [i_2]), var_1))) ? (arr_4 [i_2]) : (((arr_4 [i_3]) ? 1 : var_15))));
                    }
                }
            }
        }
    }
    var_21 = var_3;
    var_22 ^= var_4;
    #pragma endscop
}
