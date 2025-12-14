/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 ^= ((var_7 ? 2851375908 : (((max(-10234, 1))))));
        arr_2 [i_0] [i_0] = ((!(1 / 2851375913)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        var_17 -= ((1443591387 ? 15 : 3397365001));
                        arr_10 [i_0] [i_1] [6] [i_2] [i_3] [i_3] = (((!(arr_6 [i_0 - 2] [11] [i_2 - 4] [i_3 - 3]))));
                        var_18 ^= ((var_5 ? (((((2851375887 ? 2851375908 : 1443591396))) ? (((arr_3 [i_1]) ? var_6 : 65504)) : (((min((arr_0 [i_0] [2]), var_11)))))) : (((((arr_1 [i_0 - 2]) == (arr_1 [i_0 - 2])))))));
                    }
                }
            }
        }
    }
    var_19 = ((((var_13 / ((1 ? var_6 : 3)))) * (((((1443591374 ? 1042919720 : var_8)) / (((278272508 ? 104 : var_12))))))));
    var_20 = (((var_12 ? (max(16723018300432277383, -1)) : (((var_5 << (var_11 - 59156)))))));
    #pragma endscop
}
