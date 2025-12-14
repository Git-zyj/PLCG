/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_17;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] &= 65535;
            var_21 = (arr_4 [i_1] [i_1 + 1] [i_1]);
            var_22 = (((((1552022623 ? (-32767 - 1) : 56))) ? 3661752973 : (633214323 / var_18)));
        }
        arr_6 [i_0] = (max(633214311, 17180));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            var_23 -= (min((arr_1 [i_2] [i_3 + 2]), ((3661752944 ? (arr_1 [i_3] [i_3 - 4]) : 28037))));
            var_24 = ((((max((arr_10 [i_3 - 4]), 5))) ? (((max(var_1, (arr_4 [i_2] [i_3 - 2] [i_2]))))) : ((-var_19 ? (max((arr_3 [i_3] [i_2]), var_8)) : (((-(arr_2 [i_2]))))))));
            var_25 -= ((var_15 ? -15185 : (min(var_14, (max(-2, 4136950406))))));
            arr_12 [i_2] [i_3] = ((((var_12 | ((var_4 ? (arr_0 [i_3]) : (arr_8 [4]))))) & ((((!(arr_4 [i_3 - 3] [i_3 - 3] [i_3 + 2])))))));
        }

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_26 -= ((((((~(arr_11 [i_5] [i_4] [i_2])))) ? ((min(-2040601131, (arr_2 [i_2])))) : ((var_17 ? (arr_4 [i_2] [i_2] [i_2]) : var_9)))));
                var_27 -= (arr_19 [i_2] [i_4] [i_5]);
            }
            var_28 = (max(var_28, var_10));
            var_29 = var_5;
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_22 [i_6] = (arr_15 [i_2]);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_30 = ((((((arr_8 [i_9 - 1]) ? (max(var_7, (arr_1 [i_7] [12]))) : (~37)))) + (max((arr_27 [i_9 - 1] [i_9 - 1] [i_2] [i_9] [i_2] [i_7]), var_14))));
                            var_31 *= var_14;
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_32 = (min(var_3, var_17));

                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    var_33 = (-2147483632 || 163);
                    arr_38 [i_6] = ((49152 ? ((((((98 ? var_18 : (arr_7 [i_2])))) <= 62251))) : (min(219, (((arr_2 [19]) * 227))))));
                }

                for (int i_12 = 3; i_12 < 10;i_12 += 1)
                {
                    var_34 = (var_5 + var_13);
                    var_35 -= (~143);
                    arr_42 [i_2] [i_6] [i_6] [3] = (arr_13 [i_2] [i_2] [i_10]);
                    arr_43 [i_2] [i_6] [1] [i_12 - 2] [i_6] = 254;
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 11;i_13 += 1)
                {
                    arr_46 [i_2] [i_6] [i_2] = (221 > 0);
                    arr_47 [7] [i_6] [7] [i_6] [i_2] = ((var_11 ? -var_1 : var_12));
                    var_36 = (max(var_36, var_0));
                }
            }
            var_37 = ((~(arr_33 [i_6] [i_6] [i_6] [i_6])));
        }
        var_38 = 59754;
    }
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        var_39 = (max(var_0, 965075957));
        var_40 = (min(16, 3661752972));
        var_41 ^= (min((((arr_48 [i_14]) ? (arr_48 [i_14]) : var_10)), (arr_49 [i_14])));
        var_42 = (max(((-1 & (min(3661752964, (arr_48 [i_14]))))), var_7));
        var_43 -= (((max((min(var_4, var_13)), 13))) ? (min(var_10, (!3661752957))) : 41149);
    }
    for (int i_15 = 0; i_15 < 0;i_15 += 1)
    {
        arr_52 [i_15] = ((var_17 ? (((((max(var_15, var_3))) ? (var_1 || 23268) : var_19))) : (max((arr_3 [i_15 + 1] [i_15]), (max(var_18, (arr_50 [i_15] [i_15])))))));
        var_44 = ((!3) == ((3292240319 ? 3329891339 : -21)));
    }
    var_45 *= 1;
    #pragma endscop
}
