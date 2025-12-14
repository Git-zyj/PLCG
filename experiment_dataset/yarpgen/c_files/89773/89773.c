/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_11;
    var_13 = (2147483647 ? (((((var_3 ? var_4 : var_3))) ? (~6207820063301858392) : (((var_2 << (var_8 + 31384)))))) : var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = 1322309944;

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 = (!var_7);
                        var_16 = ((var_5 ? (arr_11 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 + 1] [i_1 - 3]) : (arr_11 [i_1 - 3] [3] [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 - 1])));
                        var_17 = (~var_7);
                    }
                }
            }
            var_18 += (12238924010407693223 ^ 21);
            var_19 = 0;
            var_20 = var_2;
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_21 = (min(var_21, (arr_3 [i_0])));
            var_22 = arr_13 [17];
        }
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            var_23 &= ((~(arr_7 [i_5 - 2] [i_5 - 2] [1] [1])));
            var_24 = (arr_11 [i_5 + 4] [i_5 + 4] [8] [19] [3] [i_5 + 4]);
        }
        var_25 = ((var_5 ? (arr_16 [i_0] [i_0]) : (arr_16 [i_0] [i_0])));
        var_26 = (arr_2 [i_0] [18]);
    }
    #pragma endscop
}
