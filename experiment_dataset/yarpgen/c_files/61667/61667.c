/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-1 ? var_10 : var_16);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 35958428274786304;
                arr_5 [i_0 - 1] [22] [i_1 - 1] &= var_16;
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_19 = (max((min((arr_7 [i_2]), ((max(32, var_6))))), ((((max(var_10, 1))) ? 223 : ((-(arr_6 [i_2])))))));
        var_20 = (min(var_20, (max(32, 255))));
        arr_9 [i_2] = ((!(((~(arr_6 [i_2]))))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        arr_12 [i_3] = 224;

        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_21 = ((max((arr_13 [i_3 + 2]), (min(1951284746, var_12)))));
            var_22 = ((~(arr_1 [i_3] [i_4 - 1])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        var_23 = (arr_8 [i_3 - 2]);
                        var_24 = (max((max((max(var_1, var_11)), (~var_6))), (max(8, -1951284769))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_25 -= (min((((arr_20 [i_3 + 2] [i_3 + 2]) - -1)), -55));
            arr_25 [i_3 - 2] [i_7] = ((-(((arr_13 [i_3 + 2]) ^ (arr_13 [i_3 + 1])))));
            var_26 += (max(8, 239));
        }

        /* vectorizable */
        for (int i_8 = 4; i_8 < 21;i_8 += 1)
        {
            arr_29 [i_3] = (arr_3 [i_3 + 3] [i_3 + 1] [i_8 - 1]);
            var_27 = ((var_8 % (arr_27 [i_3 + 3] [i_3 + 3] [i_3])));
        }

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_28 = ((((-(5199 & -1))) % 65528));
                            arr_40 [i_10] [i_9] [i_10] = -27;
                            arr_41 [i_3] [i_3 + 3] [i_10] [i_3] [i_3] [i_3 + 3] [i_3] = (((((-6049131250908999586 ? 16080 : 3563934734))) ? (max(3584, 1073741824)) : 65511));
                            arr_42 [i_3] [i_9] [i_10 - 1] [20] [i_10] = (0 && 84);
                        }
                    }
                }
            }
            var_29 -= ((~(arr_24 [i_3])));

            for (int i_13 = 4; i_13 < 20;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            arr_51 [i_3 - 1] [i_3 - 1] [13] [0] [i_15] = var_0;
                            var_30 |= (((((46894 + ((max((arr_3 [i_9] [17] [i_15]), var_10)))))) | (arr_17 [15])));
                        }
                    }
                }
                arr_52 [6] [6] [i_9] [i_13 + 1] = 1;
            }
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {

                /* vectorizable */
                for (int i_18 = 3; i_18 < 21;i_18 += 1)
                {
                    var_31 = (max(var_31, var_0));
                    var_32 = ((arr_15 [i_18 + 1] [i_3 + 1]) ? var_10 : (arr_15 [i_18 + 1] [i_3 + 2]));
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        {
                            arr_68 [i_3] [i_3] [i_3] [12] [i_3 + 2] [i_3] [i_3] = (var_11 ? ((var_13 / (arr_36 [i_3 - 2]))) : (((arr_6 [i_20]) | (!var_11))));
                            var_33 = var_5;
                            arr_69 [i_20] [i_20] [1] [i_17] [6] [6] [6] = (max((((!((min(var_8, 1626677815)))))), 16091));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 0;i_22 += 1)
                    {
                        {
                            arr_78 [13] [i_21] = (((arr_67 [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3]) ? ((((max(var_7, -4186169187614756598))) ? 1 : 32)) : 13));
                            var_34 = ((((min(var_10, (arr_35 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_21])))) ? (((-(arr_64 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_3] [i_3 - 2])))) : (max(var_16, (arr_35 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_21])))));
                            var_35 = (min((((!(var_14 && var_0)))), (((arr_73 [i_3 - 1] [i_3] [i_3] [i_3 - 1]) ? (arr_21 [i_3 + 3]) : (arr_16 [i_3 + 3])))));
                        }
                    }
                }
            }
            arr_79 [i_3 + 3] [i_16] = (~((65518 ? 5256173525747809102 : 9223372036854775807)));
            var_36 -= (2 <= 1);
        }
        var_37 = -16081;
    }
    var_38 = var_14;
    var_39 &= (((((var_11 || -16081) && (((var_17 ? var_13 : 16))))) ? (((!(((254 ? var_12 : var_6)))))) : ((max(var_3, (!0))))));
    #pragma endscop
}
