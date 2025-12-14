/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 ^= ((14527718602161787107 ? ((((var_9 ? -4793142723329741865 : var_13)) / ((4 ? 36026597995708416 : var_0)))) : var_12));
                    var_15 = var_12;
                    var_16 = (~var_13);
                    arr_8 [i_2] = var_12;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_4] [i_5] = (28877 != 2);
                    var_17 = (min(var_17, (((21584 ? -796907090 : 5058532147070311303)))));
                    var_18 = ((((min(var_5, var_4))) ? (arr_4 [i_5 + 1] [i_4] [i_3 + 2]) : (var_1 + var_1)));
                }
            }
        }
    }
    var_19 = var_11;
    var_20 = var_6;
    #pragma endscop
}
