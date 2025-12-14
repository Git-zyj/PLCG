/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min((max((arr_0 [i_0 - 2]), (!var_12))), (~var_3)));
                var_18 = 252;
                var_19 = (min(var_19, (arr_2 [i_0])));
                var_20 = (((arr_2 [5]) == (((-4568935296342596524 == 0) & var_4))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_14 [i_3] = (var_16 != (arr_12 [i_2 - 1]));
            var_21 += (((arr_13 [i_2 + 1]) / (arr_13 [i_2 + 3])));
            var_22 = (((arr_13 [i_2 - 1]) != var_13));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_24 [13] [i_5] [4] [i_3] [i_2] [i_2] = (((arr_11 [i_2 - 1] [i_5]) & (arr_11 [i_2 + 2] [i_2 + 2])));
                            var_23 = (((arr_8 [i_2]) < (arr_21 [i_4] [i_4] [i_2 + 2] [i_2])));
                            arr_25 [i_3] [8] = var_7;
                            arr_26 [i_5] [i_5] [1] [11] [i_2] = ((-(var_10 != 65533)));
                        }
                    }
                }
            }
            arr_27 [12] [i_2] [12] = (65531 % ((var_7 ? (arr_12 [13]) : 3586854639056900390)));
        }
        var_24 ^= (arr_13 [i_2]);
        var_25 = var_10;
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 4; i_8 < 21;i_8 += 1)
        {
            var_26 = (arr_30 [i_7] [10]);
            arr_34 [i_7] [i_7] [i_8] = (((((65524 ? (arr_30 [i_7] [i_7]) : (arr_31 [i_7] [i_8])))) >= 3353428869276655479));
            var_27 = (((arr_32 [i_7] [i_7]) ? (arr_32 [i_7] [i_7 - 2]) : (arr_30 [i_7] [i_8 - 3])));
        }
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            arr_39 [i_7] = ((((((arr_35 [19] [i_9 - 1]) >= (arr_35 [i_7 - 1] [i_7 - 2])))) < ((-(arr_35 [i_7] [i_7 + 1])))));
            var_28 = (((((~(arr_30 [i_7] [i_9 + 2])))) ? (11 != 65529) : var_0));
            var_29 = (min(var_29, ((0 ? 2930153120 : -2048))));
        }
        var_30 = ((~((((arr_38 [i_7 - 2] [i_7] [8]) < (arr_37 [i_7 - 2] [i_7]))))));
        var_31 = ((-(arr_30 [i_7] [i_7])));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 22;i_10 += 1)
    {
        arr_42 [i_10] = ((((((arr_40 [i_10]) ? (arr_41 [i_10] [i_10]) : 11))) ? ((12 ? 12 : 169)) : 65526));
        arr_43 [i_10] [i_10] = ((!(~var_8)));
        arr_44 [i_10] = (~0);
    }
    #pragma endscop
}
