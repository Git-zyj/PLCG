/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((((((max((arr_3 [i_0]), (arr_1 [13]))))) != var_4)) ? ((~(arr_0 [i_0]))) : ((-(arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 |= (((var_11 % (arr_5 [i_0]))));
                    var_16 = ((!((((max(-4834388856273596134, 1714416538)) + (min(1714416526, -4834388856273596134)))))));
                }
            }
        }
        arr_9 [i_0] [i_0] = 127;
        arr_10 [i_0] [i_0] = (((arr_7 [6] [i_0]) ? (max((arr_7 [0] [i_0]), 0)) : (arr_2 [i_0])));
        arr_11 [5] = (max((max((arr_8 [17] [17] [i_0]), (!-4834388856273596134))), 2580550750));
    }
    var_17 = ((((-var_0 ? 1714416526 : (((var_4 ? 13044 : 673085364))))) - (((((~var_11) > ((-93 ? 21 : var_5))))))));
    var_18 = ((-var_9 ? (var_7 + var_8) : var_12));
    var_19 = var_7;

    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_20 = (arr_3 [i_5]);
                        var_21 = (max(var_21, 4834388856273596133));
                    }
                }
            }
        }
        var_22 = ((((((((90 ? var_12 : (arr_7 [i_3] [i_3])))) * (((arr_13 [i_3]) ? var_1 : (arr_20 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))))) ? (((((((arr_15 [i_3 + 1] [5] [i_3 - 2]) ^ 41084)) + 9223372036854775807)) >> ((((1714416538 ? 97 : 1039510896)) - 78)))) : ((((~83893334) ? -38 : var_14)))));
        var_23 = ((var_0 ? ((~(arr_20 [i_3] [2] [i_3] [i_3]))) : (((((arr_22 [i_3] [i_3] [i_3] [i_3]) && (arr_18 [i_3 + 1] [i_3 - 2] [i_3 - 2])))))));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 13;i_7 += 1)
    {
        arr_27 [i_7 - 1] = var_14;
        arr_28 [i_7 + 1] [i_7] = (((arr_6 [i_7 - 3] [i_7 - 2] [i_7]) + (arr_6 [i_7 - 1] [i_7 - 1] [7])));
        var_24 = var_10;
        arr_29 [8] = arr_5 [i_7];
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_32 [i_8] = ((-(arr_31 [i_8] [i_8])));
        arr_33 [0] = (!var_13);
    }
    #pragma endscop
}
