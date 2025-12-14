/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = (var_5 ? ((((min(-826604652, 826604651))) ? (min(var_6, 9223372036854775807)) : (arr_0 [i_0 + 1]))) : ((((-32767 - 1) ? var_9 : var_5))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [3] [i_2] = (min(var_0, 11264617051818524261));
                    arr_10 [4] [i_1 + 3] = (var_4 / var_9);
                    arr_11 [i_2] = (min(0, 274737078));
                    arr_12 [i_0] = 16323;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_17 [i_3] = var_6;
        arr_18 [i_3] = ((((-969741333 ? var_0 : -826604644)) & (((!(arr_15 [i_3]))))));
    }
    var_11 = (min((((~(max(826604632, 826604651))))), var_9));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_26 [i_6] [i_4] [i_5] [i_4] = ((23404 ? 22681 : -969741333));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            {
                                arr_33 [i_6] = (max(969741353, -30525));
                                arr_34 [i_4] [i_5] [i_6] [i_5] [i_7] [i_5] [i_6] = (((((var_10 == (arr_7 [i_4] [i_5] [i_6] [i_8 - 1])))) > ((((arr_20 [i_4]) || (arr_29 [i_6] [i_6] [i_8] [7]))))));
                                var_12 = ((~(((((arr_19 [i_4]) / var_5)) >> ((((826604651 ? 30530 : -3954530054744726769)) - 30519))))));
                                arr_35 [i_4] [i_6] [1] [1] [i_8] [i_8] = ((((((min(51651, (arr_31 [i_4] [i_4] [i_6] [i_4] [i_8])))) - var_9)) >> (((274737093 % -425765796) - 274737065))));
                                var_13 = (max((min(2064069210199378363, 0)), ((((var_8 ? var_8 : (arr_28 [i_4] [i_4] [i_5])))))));
                            }
                        }
                    }
                    arr_36 [i_4] [i_6] [i_4] = (((max((arr_0 [i_4]), var_1)) >> (18446181123756130304 - 18446181123756130298)));
                }
            }
        }
        var_14 = var_1;
        arr_37 [i_4] = (max(((var_8 ? 22681 : (arr_20 [i_4]))), (((30063 < (((arr_30 [i_4] [2] [i_4] [2] [i_4]) + (arr_8 [i_4] [1] [i_4]))))))));
        arr_38 [i_4] = ((!(~var_2)));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_15 = (((min((min(-5683, var_10)), (arr_39 [1])))) ? (min((1649267441664 / -826604663), (!var_9))) : ((min((arr_40 [i_9]), 826604652))));
        arr_41 [i_9] = ((((-24191 / (-32767 - 1)))) | (((-425765797 > 1) % (var_1 | 9212))));
        arr_42 [i_9] = ((1 ? 268427264 : 21445));
    }
    for (int i_10 = 3; i_10 < 16;i_10 += 1)
    {
        arr_45 [i_10] = (~8418088714159094635);
        var_16 = (max(1073741312, 1));
    }
    #pragma endscop
}
