/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0 + 2]) <= (arr_1 [i_0 + 3])));
        var_17 ^= (((arr_0 [i_0 - 1] [i_0 + 1]) - ((((arr_0 [i_0] [i_0]) <= (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = 23723;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (arr_3 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_18 = (((arr_7 [i_1 - 3] [i_1]) | -21965));
                        var_19 = var_2;
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((var_0 ? 23717 : (arr_9 [i_2 + 3] [i_2 + 3] [i_2 + 2] [i_2 - 2])));
                        arr_15 [i_1] [i_2] [13] [i_1] = var_13;
                    }
                }
            }
        }
        arr_16 [i_1] = var_9;
        var_20 += var_0;
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = ((-23713 ? 65 : ((((min(var_15, (arr_17 [i_5])))) ? (var_10 << 2) : (arr_18 [i_5 - 2])))));
        arr_21 [i_5] = ((((max(-23736, (arr_17 [i_5 + 1])))) ? var_1 : ((((((arr_18 [i_5]) > (arr_17 [i_5])))) << (((arr_17 [i_5 - 1]) - 40))))));
    }
    var_21 = (((((11792 ? ((var_14 ? var_3 : var_3)) : var_1))) ? var_15 : (var_4 < var_13)));
    #pragma endscop
}
