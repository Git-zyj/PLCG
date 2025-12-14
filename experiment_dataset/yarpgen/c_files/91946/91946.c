/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(-1801803613, var_0));
    var_11 = (min((max(var_3, ((var_9 ? 29129 : var_9)))), 52));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = ((87 * ((((min(var_9, 1))) ? ((-67 ? 18446744073709551615 : 115)) : (var_6 * -1801803597)))));
        var_13 = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [14] = var_2;
        var_14 = -118;
        arr_6 [i_1] = -var_1;
        arr_7 [4] [i_1] = var_2;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_19 [6] [i_2] [i_3] [i_3] [i_3] [i_5] = 1801803608;
                        arr_20 [i_2] [i_3] [i_4] [i_5] = (min((~var_3), var_3));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_15 = ((102 ? (((min(var_2, var_8)) & (!var_6))) : (~var_8)));
                            arr_23 [i_3] [i_3] [i_3] = ((~((~(~var_5)))));
                            arr_24 [i_2] [i_3] [i_4] [i_5] [i_3] = (((-(~1801803612))));
                            arr_25 [i_2] [i_3] [i_3] [i_3] [i_5] [i_3] = min(176, 0);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_16 = ((16083856875106717058 & (arr_15 [i_2] [i_3] [i_7])));
                            arr_29 [i_3] [i_3] [i_4] [i_4] [i_3] [i_3] = 27430;
                        }
                    }
                }
            }
            arr_30 [i_3] = (((((((arr_4 [i_3]) ? var_3 : -1891374215)) == ((min(32761, 64))))) ? (min(2167631400, 16083856875106717056)) : (((max(118, var_5))))));
            var_17 = (min(var_9, (min((((arr_26 [i_3] [i_3] [i_2] [6] [10] [i_2] [i_2]) ^ 15347109170727841282)), (((2047 ? var_7 : (arr_1 [i_3]))))))));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_18 = (arr_17 [4] [i_2] [i_2] [6] [i_8]);
            var_19 = min(224, (((!((((arr_32 [8] [i_8]) ? 31132 : var_1)))))));
        }
        arr_34 [i_2] = -6282109008013033620;
    }
    var_20 = var_3;
    var_21 = ((var_9 ? var_7 : var_3));
    #pragma endscop
}
