/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((var_9 ? var_14 : (((((var_4 ? var_1 : var_7))) ? var_5 : var_5)))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = (((~(arr_1 [i_0 + 1]))));
        arr_3 [i_0] [i_0 + 1] = (arr_1 [i_0 + 1]);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_17 -= ((~((~(arr_0 [i_1 - 1])))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = (((arr_1 [i_0]) ? (arr_11 [9] [i_2] [i_1] [i_0 + 1] [i_0]) : (arr_7 [i_0] [i_1] [i_1])));
                        var_19 = (arr_7 [i_0] [i_2] [i_3]);
                        var_20 = ((-13906 ? 4019948838856465839 : 1));
                        var_21 = (arr_8 [i_0] [i_0] [1]);
                    }
                }
            }
            var_22 = (((arr_5 [i_0] [i_0]) ? (((!(arr_4 [i_0 + 1])))) : (arr_2 [i_0])));
            var_23 = (((arr_2 [i_0]) ? (arr_6 [i_1] [i_1] [i_0] [i_0]) : (arr_10 [i_1] [i_0])));
        }
        var_24 = (((216 ? 0 : ((-32765 ? 4019948838856465839 : 0)))));
    }
    #pragma endscop
}
