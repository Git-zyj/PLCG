/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (arr_2 [i_0]);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] = (((var_6 / var_15) ? (arr_2 [i_0 - 2]) : var_7));
                        var_17 = 43;
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((!(((-4018 ? -4018 : (arr_8 [i_1]))))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_4] [i_4] [i_1] [i_4] = arr_0 [i_0 + 1];
                        arr_16 [i_0] [i_1] = (((-60 >= 4294967292) - ((0 ? 0 : 11))));
                        var_18 = 119;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_19 += var_1;

                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            arr_21 [i_1] [i_1 + 1] [i_1 + 1] [i_2] [1] &= ((arr_3 [i_0 + 1]) * 3089168862);
                            var_20 = (!var_14);
                        }
                    }
                }
            }
        }
        arr_22 [i_0] = (var_15 <= var_3);
        arr_23 [i_0] = 10254159528197275772;
        arr_24 [i_0 + 2] [0] = (((arr_13 [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 2] [i_0]) ? var_2 : var_6));
    }
    var_21 = ((4109401301046546135 || (!4)));
    var_22 = (!8122648533470017005);
    #pragma endscop
}
