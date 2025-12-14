/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_10);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(var_14, ((min(((~(var_7 & -11458))), (~var_5))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_15 = (((((var_4 ^ (arr_11 [i_0] [i_0 - 1] [i_1 + 1] [i_2 - 1])))) ? var_6 : var_1));
                        var_16 = var_12;
                        var_17 = (min(var_2, (~var_8)));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                    }
                }
            }
        }
        var_18 |= (var_12 + -1);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_19 = (1 | 4294967289);
        arr_15 [i_4] [i_4] = ((!(3891 || 1)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_20 = (((1 | var_6) * 1));
            var_21 *= -0;
        }
        arr_22 [i_5] = var_10;
    }
    var_22 = max(((((min(1, var_0))) & var_5)), var_7);
    var_23 = (min(var_23, ((var_5 <= (min(((var_4 ? var_1 : 10)), (((1 ? var_1 : 0)))))))));
    var_24 = ((10 ? 2730 : 1));
    #pragma endscop
}
