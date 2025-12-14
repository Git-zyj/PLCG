/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (min((((min(var_14, 7158236199116493100)) & (-8695554377849456951 & 64834))), ((((((~var_7) + 2147483647)) >> (var_10 + 1354595161835254721))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 ^= (((arr_2 [i_0] [i_0]) ? ((-5176567943294586649 ? -5176567943294586651 : (arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_17 ^= ((max((((arr_5 [i_1 - 1]) | var_4)), 9223372036854775807)) & (((~((~(arr_12 [i_0])))))));
                        var_18 = (~(max((((var_8 ? 65522 : (arr_1 [i_0])))), 39692)));
                        var_19 = (min(((5176567943294586656 / (max(var_14, 9223372036854775807)))), -65521));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_20 = (((var_8 && (arr_13 [i_0] [i_1] [i_0] [i_4] [i_2]))));
                            var_21 = (!var_0);
                        }
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_22 = (~5176567943294586648);
                            var_23 = (max(var_23, 65531));
                            arr_20 [18] = (((arr_7 [i_4]) ^ (arr_13 [i_6 - 2] [i_2 + 2] [i_2 + 1] [i_2] [i_1 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_24 = ((((arr_12 [i_0]) ^ var_9)));
                            var_25 = 17968;
                            arr_24 [i_0] [i_1] [i_2] [i_4] [i_7] = var_10;
                            var_26 = (max(var_26, (((var_6 >= ((var_6 ? (arr_15 [i_0] [i_1] [i_2] [i_4] [i_4] [i_7]) : var_8)))))));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_27 += (arr_13 [15] [19] [i_2] [i_4] [i_8]);
                            arr_28 [i_0] = (var_0 | var_11);
                        }
                        var_28 = (1753036746834054854 % 1446026409718038905);
                        var_29 = var_1;
                        var_30 = (((arr_6 [i_0] [i_0]) >> (((((arr_5 [i_0]) ? 5176048397446446772 : var_11)) - 5176048397446446746))));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_32 [i_9] [i_0] [15] [i_9] [i_0] [i_9] = 65535;
                        arr_33 [5] [5] [5] [i_9] = var_1;
                        var_31 = (((((((-9223372036854775807 - 1) && -5936073693679786579)) || (((-6373765549001724514 ? var_1 : var_6))))) && (((((arr_10 [8] [i_2] [i_1]) || var_7))))));
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        arr_36 [i_0] [i_2] [i_2] [7] [i_10] [i_10] = ((((-(arr_15 [i_0] [8] [i_0] [i_10] [i_10] [i_0])))) / var_10);
                        var_32 = (max(var_32, var_3));
                        var_33 = (((((min((arr_12 [i_0]), 49713))) ? (((62342 - (arr_35 [i_1] [i_1] [i_2] [i_1])))) : (arr_5 [i_10]))) - var_3);
                    }
                    var_34 = var_1;
                    arr_37 [i_0] = 65535;
                }
            }
        }
        arr_38 [i_0] = arr_2 [1] [1];
    }
    #pragma endscop
}
