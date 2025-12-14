/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = 1446;
    var_22 = (((var_17 > ((var_13 ? var_14 : var_18)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((+(((arr_0 [i_0]) ? var_7 : (((arr_1 [i_0]) * (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (arr_6 [i_0]);
                    var_23 = var_18;
                    arr_11 [i_0] [i_1] [2] [i_2] = (var_4 && 67108863);
                }
            }
        }
        var_24 *= (((var_8 ? (arr_8 [i_0] [i_0] [i_0]) : 1)));
    }
    #pragma endscop
}
