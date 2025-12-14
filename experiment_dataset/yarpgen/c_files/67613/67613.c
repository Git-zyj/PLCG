/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((((min(17432, (arr_1 [i_1]))))))));
                    var_11 = (((arr_0 [4]) ? ((+((var_5 ? (arr_3 [i_0] [i_2]) : -17433)))) : 248697361));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_3] = (arr_0 [i_1]);
                        var_12 = (max(var_12, (((((max((((-17410 ? (arr_8 [i_0] [i_1] [i_2] [21]) : 1040196274))), ((var_3 ? -17432 : var_4))))) ? var_4 : ((var_4 ? -248697361 : ((var_9 ? var_2 : 17592186044384)))))))));
                    }
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        var_13 = (((min(((var_7 ? 2892134523885618536 : 16777212)), (((~(arr_4 [22] [i_1] [i_2]))))))) ? (((((-248697361 ? -248697361 : (arr_8 [i_0] [i_1] [i_2] [i_1])))) ? ((((arr_1 [20]) ? (arr_8 [i_0] [i_1] [i_2] [i_4 - 3]) : 24998))) : (min(var_4, (arr_6 [i_0] [23]))))) : (arr_13 [i_0] [i_0] [0] [24]));
                        var_14 &= var_9;
                        var_15 = 17432;
                        arr_14 [i_0] [i_0] |= (~18446744073709551615);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_0] [13] [0] [i_5] = ((~(arr_16 [i_0] [i_0] [i_2] [i_5])));
                        var_16 += (arr_2 [i_5]);
                        arr_20 [i_5] = arr_10 [i_0] [24] [i_0] [i_5];
                        arr_21 [i_0] [i_2] [i_5] |= 17592186044361;
                        var_17 = (max(var_17, (arr_13 [i_0] [i_1] [i_2] [i_0])));
                    }
                }
            }
        }
    }
    var_18 = var_5;
    var_19 = (~var_8);

    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_20 = 248697361;

            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    var_21 = (min(var_21, ((~((707619351 ? (arr_5 [i_9 - 2]) : (arr_22 [i_7] [i_8])))))));
                    arr_35 [8] [i_7] [i_6] [i_9] = ((1040196274 ? var_9 : (((3163920428 ? var_4 : (arr_24 [i_6] [i_8] [i_9]))))));
                }
                for (int i_10 = 4; i_10 < 10;i_10 += 1)
                {
                    var_22 = (min(var_22, (((-(arr_16 [i_6] [i_7] [i_8] [18]))))));
                    var_23 = ((var_3 ? var_7 : 2135185802));
                }
                arr_39 [i_6] = var_4;
                arr_40 [2] [8] [i_8] |= (arr_13 [i_6] [i_7] [i_8] [i_8]);
            }
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                var_24 = (((~var_9) ? var_0 : ((4278190102 ? var_1 : (arr_31 [i_6 - 1] [i_6] [9] [i_11])))));
                var_25 = var_3;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_26 = ((((arr_42 [i_6]) ? var_5 : -17439)));
                            var_27 = (arr_0 [i_12]);
                            var_28 = ((((((arr_27 [i_6] [i_7]) ? var_3 : var_3))) ? -248697361 : ((~(arr_5 [i_7])))));
                            arr_48 [i_6] [i_7] [i_11] [i_12] [i_12] |= 17650565606986253697;
                            var_29 = 17409;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            arr_55 [i_6] [i_6] [i_7] [i_11] [i_6] [i_15] [i_15] = (arr_3 [i_6 - 1] [i_6 - 1]);
                            arr_56 [i_6] [6] [i_6] [12] [1] [12] [i_6] = ((((((arr_54 [i_6] [2] [4] [i_11] [i_6] [i_15]) ? (arr_42 [i_6]) : (arr_42 [i_6])))) ? var_9 : (((17592186044361 ? var_4 : 2147483628)))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 12;i_18 += 1)
                {
                    {
                        var_30 = (max(var_30, (arr_27 [i_6] [i_18 + 2])));
                        arr_64 [i_6] [i_16] [i_6] [i_17] [3] [i_18] = (max(var_7, var_0));
                        var_31 = (max(var_31, var_5));
                        var_32 = (((arr_0 [i_16]) ? (arr_34 [i_16] [i_16]) : ((((((arr_27 [i_16] [5]) ? -1999762260599473541 : 564860181))) ? (arr_18 [i_6] [i_16] [i_17] [i_18]) : var_6))));
                        var_33 = (arr_62 [i_6] [i_16] [i_6] [i_18]);
                    }
                }
            }
        }
        arr_65 [i_6] = (!var_5);
    }
    for (int i_19 = 0; i_19 < 19;i_19 += 1)
    {
        arr_68 [i_19] [i_19] = ((~(min(0, -32432))));
        var_34 = ((!(arr_0 [i_19])));
        var_35 = ((var_0 ? (((((var_5 ? 13466935238230715932 : 17410))) ? ((max((arr_2 [i_19]), var_8))) : ((var_4 ? var_8 : var_3)))) : 0));
        arr_69 [i_19] = var_6;
    }
    #pragma endscop
}
