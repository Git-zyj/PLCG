/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (arr_3 [i_0] [i_1 - 1] [i_2]);

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_11 [i_2] [i_1] [8] [13] [i_3 - 1] [i_4] = (arr_3 [i_2] [i_1] [i_0]);
                                arr_12 [i_2] [i_1] [i_2] [i_2] [i_4] = var_5;
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                var_15 = var_0;
                                var_16 -= (((arr_7 [1] [i_5] [i_5]) ? 9223372036854775807 : ((var_9 >> (((arr_14 [i_0] [i_1] [i_2] [i_3] [i_3]) - 2034813358))))));
                                arr_16 [i_2] [i_2] [i_0] = ((83 ? 1 : 2147483647));
                            }
                            for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                var_17 ^= (min(((((max(2094523155121705622, 2094341259))) ? (arr_4 [i_0] [i_0] [i_2] [i_2]) : var_7)), 1974207904));
                                arr_19 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                            }
                            /* vectorizable */
                            for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                            {
                                var_18 = (arr_7 [i_1] [i_3 + 1] [2]);
                                arr_23 [i_1 - 2] [i_1] [i_2] = (((arr_0 [i_1 - 1] [i_3 + 1]) ? var_12 : ((1 ? -6268702415885469074 : 11956276213972847795))));
                                arr_24 [i_2] [i_1] = var_4;
                            }
                            arr_25 [i_2] [i_2] = ((1 ? (min((arr_21 [i_1] [i_2] [i_3 + 1]), (arr_7 [i_3] [i_2] [5]))) : (arr_21 [i_0] [i_0] [i_0])));
                            arr_26 [i_0] [i_2] [i_2] [11] = (32761 ? var_4 : 17645535218264825776);
                            arr_27 [i_2] = 6268702415885469069;
                        }
                    }
                }
                arr_28 [i_0] [i_0] [i_1] = var_3;
                arr_29 [10] [1] [i_1 - 2] = (((((var_4 * ((801208855444725842 ? (arr_6 [i_0] [i_1 + 1]) : var_6))))) ? 17645535218264825764 : ((15 ? var_9 : 801208855444725821))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_19 = ((!(((var_13 ^ (arr_34 [i_9] [i_9] [i_8 + 1] [i_8 + 1] [5] [5]))))));
                            arr_35 [i_0] [i_8] = ((127 ? var_7 : (((arr_21 [i_0] [9] [i_0]) ? 5723101985597903075 : 4101559911))));
                            arr_36 [i_0] [i_8] [i_8] = min(17645535218264825759, ((max(-21912, 1))));
                            arr_37 [i_1 - 1] [i_8] [i_1 - 2] [13] = var_2;
                        }
                    }
                }
            }
        }
    }
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            {
                arr_45 [i_10] = ((17645535218264825762 ? (arr_42 [11] [i_10] [i_10]) : var_6));
                var_21 = var_11;
                arr_46 [i_10] [i_11] = var_9;

                for (int i_12 = 4; i_12 < 11;i_12 += 1)
                {
                    var_22 = ((((((max(1, 1)) ? -3025367927797823477 : (max(var_2, (arr_40 [i_10])))))) ? ((min(8, 1))) : (((arr_41 [i_10] [i_10 - 1]) | (arr_41 [i_12 + 4] [i_12 - 4])))));

                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        var_23 = var_5;
                        var_24 = (((max(17645535218264825773, (arr_47 [i_10] [i_10] [i_10 + 3] [i_10 - 2])))));
                        var_25 += min((max((arr_39 [i_10] [i_11]), (arr_40 [i_10]))), ((((((var_7 ? var_13 : var_4))) ? (arr_44 [i_12] [i_12]) : ((var_0 ? -12905 : (arr_52 [3])))))));
                    }
                }
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    arr_56 [i_10] [i_11] [i_14] = (arr_42 [i_10 + 2] [i_11] [3]);
                    var_26 = (((min((((arr_50 [i_14] [i_11] [i_10 - 3]) ? 801208855444725858 : var_6)), (7 ^ var_10))) * var_13));
                    arr_57 [8] [i_14] [8] [i_14] = var_4;
                }
            }
        }
    }
    #pragma endscop
}
