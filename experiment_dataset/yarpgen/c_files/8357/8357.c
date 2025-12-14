/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (min(var_4, (max(255, (~var_12)))));
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = ((1 ? var_5 : (-3420 | var_4)));
        arr_4 [3] = 65521;
        var_19 ^= (((!0) ? (arr_3 [i_0] [i_0]) : var_15));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_20 = (((((~((0 ? (arr_9 [2] [i_2] [i_2]) : 0))))) ? (arr_0 [i_1]) : (-2147483647 - 1)));
                        arr_15 [i_4] [i_4] = ((min((arr_0 [i_3 + 1]), 0)));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_21 = (127 | var_9);
                var_22 = (min((min((max(var_10, var_0)), (((~(arr_9 [i_1] [i_1] [i_1])))))), (min((arr_1 [i_1]), 18148))));
                arr_19 [i_1] [2] = (((var_4 ? 171 : (arr_18 [i_1] [i_2]))));
                var_23 = (((((1066010232 ? ((536608768 ? 4294967295 : 14)) : (arr_12 [i_5] [i_5] [i_1] [i_1] [i_1])))) ? ((max(1260118303, (max(4441521202190613170, var_6))))) : (((arr_17 [i_1] [i_1] [i_1]) ? (arr_17 [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_1] [i_1])))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_23 [8] [8] [i_2] [i_1] |= ((0 ? (((arr_2 [i_1] [i_2]) ? var_3 : 32767)) : (arr_22 [i_1] [i_2])));

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_24 = -7;
                    var_25 = (((1900791128 != 2047) ? ((0 << (arr_22 [i_1] [i_1]))) : (var_11 | 3462591974)));
                    var_26 = (((arr_22 [i_1] [i_1]) ? 2433113774484847593 : -74));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_27 = ((33808 ? -1538523859050589943 : 24));
                    var_28 += 0;
                    arr_30 [i_6] = (arr_10 [i_6] [i_6]);
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_29 += ((-124 ? var_8 : (arr_24 [i_10] [i_9] [i_6] [i_2] [2])));
                        var_30 = (((((~(arr_10 [i_1] [i_2])))) ? var_14 : (arr_26 [i_1] [i_1] [1] [5] [13])));
                        arr_36 [i_6] [i_6] [i_6] [i_6] = 1608847238;
                        var_31 = 117;
                    }
                    var_32 = (max(var_32, (~1)));
                    arr_37 [i_1] [i_1] [i_9] [3] = ((var_1 ? 1 : 2147483631));
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_33 = (((arr_13 [i_11] [i_6] [i_2] [i_1]) >> (((arr_5 [i_2] [i_2]) - 2243662355))));
                    var_34 = ((arr_14 [i_1] [i_6]) ? var_10 : (arr_14 [i_6] [i_6]));
                    arr_41 [13] [i_11] [i_11] [i_11] = ((~(arr_31 [i_1] [i_1])));
                    var_35 = (min(var_35, 1));
                }
                var_36 = (2147483647 ^ var_4);
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                var_37 = (min(((0 << (-32759 - 4294934527))), (((arr_17 [i_12] [i_2] [i_1]) ? 4094 : ((var_8 ? var_4 : (arr_14 [i_1] [i_12])))))));
                var_38 = (min((!0), ((var_2 + (arr_39 [i_1] [i_1] [1] [i_1] [i_1])))));
                arr_45 [i_1] [17] [13] |= ((~(min(144115188071661568, (arr_39 [i_1] [1] [15] [8] [i_12])))));
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_51 [i_1] [i_14] [i_1] [i_2] [i_1] = var_3;
                        var_39 += (min((arr_27 [i_1]), (min(((0 ^ (arr_5 [i_2] [i_2]))), (255 < var_13)))));
                        var_40 = (min((((var_12 ^ 255) ? (~2) : 0)), (((~(min(0, (-2147483647 - 1))))))));

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            var_41 = ((-1 ? 0 : (arr_14 [i_1] [i_15])));
                            var_42 = ((65535 ? 1 : 1939910324));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 3; i_17 < 17;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 16;i_18 += 1)
                {
                    {
                        arr_63 [i_1] [i_1] [i_1] = ((3710039186 + (((arr_9 [i_1] [i_1] [i_1]) ? 53096 : var_9))));
                        var_43 = (var_5 << (var_15 - 13345));
                        var_44 = (((((-32767 - 1) ^ var_15))) ? (~0) : ((var_7 ? var_4 : -21157)));
                        var_45 -= var_8;
                    }
                }
            }
            var_46 = -var_8;
        }
        var_47 += ((min((max(var_1, var_15)), ((min(var_14, 12))))));
    }
    var_48 = (min(var_48, var_6));
    #pragma endscop
}
