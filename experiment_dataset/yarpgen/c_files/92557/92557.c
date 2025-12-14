/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_14 = ((arr_5 [i_0] [i_1]) ? (((((-2147483647 - 1) / 51883)) * (((arr_5 [i_0] [i_0]) / var_11)))) : (arr_4 [i_0] [i_1]));
            var_15 *= (((((126 ? -15178 : -8790199957060390037))) != var_8));
            arr_7 [i_0] = (1221499756638050271 <= 12812);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_0] |= (var_12 + var_11);
                        arr_19 [i_0] = (~19540);
                        var_16 = 0;
                    }
                }
            }
            var_17 = (((arr_1 [i_0] [i_0]) ? (arr_14 [i_0]) : (arr_5 [i_2] [i_0])));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_18 = 184398636;
            var_19 -= (min((arr_5 [8] [i_0]), ((((((arr_8 [i_5] [i_0]) ? (arr_14 [8]) : var_11))) ? var_7 : (arr_20 [10] [i_5])))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 9;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [1] = 10479450224897768652;
                        var_20 = (~(arr_3 [i_0] [10]));
                    }
                    var_21 = (((arr_10 [i_0] [i_0]) && (arr_27 [i_6] [i_0] [i_6] [i_7 - 3] [i_7])));
                    arr_30 [i_0] [i_6] [i_6] = (((8256582124805321052 / 2147483617) ^ (((arr_3 [i_0] [i_0]) ? (arr_2 [i_7]) : var_9))));
                    arr_31 [i_0] [7] [i_7] [i_0] = ((~((~((max((arr_23 [i_7] [i_0]), var_1)))))));
                }
            }
        }
        var_22 = ((4722 ? var_2 : 45996));
        var_23 -= -17;
        var_24 = ((((((var_9 / (arr_23 [i_0] [i_0]))))) ? ((((!((max((arr_17 [i_0] [i_0] [1] [i_0] [1] [i_0]), (arr_0 [i_0])))))))) : (max((arr_21 [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_0] [i_0])))));
    }
    var_25 = (1 | 637311135);
    var_26 = (((var_13 | 4015752517) ? 637311135 : 1));
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 9;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            {
                var_27 |= ((~(arr_13 [i_10] [10] [10] [i_9 - 3])));
                arr_37 [i_9 + 1] [i_10] [i_9 + 1] = ((14160362375256088845 != ((((arr_20 [8] [i_9 - 1]) != (arr_24 [i_9 - 3] [i_9 - 3] [i_9 - 3]))))));
                arr_38 [i_10 - 1] [i_10] = ((!((((~var_10) ? (arr_21 [i_9] [i_9] [4]) : (128 / 31))))));
                arr_39 [6] [i_10 - 1] = ((arr_26 [i_10] [i_10 + 1] [10] [i_9 - 2]) ? (((3592062830 ? var_10 : (min(var_3, var_12))))) : (max(7665296691390990690, (((2147483647 ? -1110798564 : (arr_26 [i_10] [2] [2] [i_9])))))));
            }
        }
    }
    #pragma endscop
}
