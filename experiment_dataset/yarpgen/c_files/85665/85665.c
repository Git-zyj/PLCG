/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((332229736 ? var_11 : var_1))) ? var_6 : (min(var_6, var_3)))) >> (var_10 + 152)));
    var_13 ^= (((min(((max(var_11, var_5))), (var_8 ^ var_7))) + ((((min(1, 18446744073709551615)))))));
    var_14 = ((var_11 ? ((((((max(var_2, var_5))) || (var_9 < var_1))))) : ((var_10 ? (min(4, var_9)) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_15 = (-1086960163 & (((arr_4 [i_1 - 2] [i_1 - 2]) ? 1086960169 : (arr_5 [i_1 - 2] [i_1 + 3] [i_1 + 3]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 ^= (((((((((arr_8 [i_2] [i_2]) ^ var_4))) ? -var_1 : var_5))) ? (min((arr_5 [16] [i_1] [i_1 + 3]), (arr_12 [1]))) : (arr_3 [i_1 + 1] [i_1 + 1] [i_4 + 2])));
                                var_17 = (min(((2 ? 1 : -2350977060343415352)), ((max((((arr_7 [i_4] [0] [0]) >> (2780802914 - 2780802895))), (((arr_0 [i_0] [i_2]) ? (arr_11 [1] [1] [2]) : (arr_5 [i_0] [1] [21]))))))));
                                var_18 = (((arr_0 [i_1 + 2] [i_1]) >> ((((18446744073709551609 ? 205 : 1)) - 202))));
                            }
                        }
                    }
                    var_19 = 4187694205;
                    var_20 = ((((((arr_4 [i_0] [i_2]) ? (arr_11 [i_0] [i_1 - 1] [1]) : ((2 ? var_7 : (arr_12 [7])))))) ? ((4 >> (2780802918 - 2780802897))) : (arr_8 [i_0] [i_2])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    var_21 *= (((arr_8 [i_1 + 3] [i_1]) ? (arr_2 [i_1 - 1] [i_1 - 2]) : (arr_2 [i_1 + 1] [i_1 + 2])));

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_22 = ((((1 ? (arr_15 [i_7] [8] [1] [0]) : (arr_4 [6] [14]))) >> (2002996796 - 2002996756)));
                            var_23 = var_2;
                            var_24 ^= ((~(arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 2])));
                        }
                        for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_25 = var_9;
                            var_26 = (((((var_2 ? 3882473468 : 2780802918))) ? ((var_11 ? 629900865 : var_6)) : 1));
                        }
                        for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_27 = 1;
                            var_28 = (((arr_16 [i_9 - 1] [i_1] [21] [i_1 + 1] [21]) ? (arr_0 [10] [i_6 - 1]) : (((2780802934 ? 1 : 1514164391)))));
                        }
                        var_29 = (((((var_9 ? 5280 : 61499561865388577))) ? ((-489173029460027277 ? -47 : 3304)) : (arr_3 [i_1 - 2] [i_1 + 3] [i_6 - 1])));
                        var_30 = ((((((((arr_14 [i_0] [i_0] [i_0]) + 2147483647)) << (((arr_6 [i_0] [i_6]) - 604467922))))) ? (arr_24 [i_0] [i_1] [16]) : ((((arr_4 [i_1] [1]) >= (arr_20 [19] [i_1]))))));
                    }
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        var_31 = (arr_25 [i_0]);
                        var_32 = ((+(((arr_26 [i_10] [4] [i_10]) ? (arr_25 [i_0]) : (arr_19 [10] [10] [23] [23] [i_10 - 1] [i_0] [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_33 *= (arr_27 [i_0] [8] [i_5] [1] [16] [23]);
                                var_34 = (((arr_10 [i_1 + 1] [i_12 - 1] [i_12 - 1] [i_11] [i_11]) ? var_1 : (arr_14 [i_0] [i_12 - 1] [i_11])));
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    var_35 = (~var_9);
                    var_36 = (min(51, -61499561865388584));
                    var_37 = ((((min(27, var_0))) ? (arr_13 [i_13] [i_0] [i_0]) : (max((((arr_20 [i_0] [7]) ? (arr_15 [i_13] [i_1] [i_1 + 1] [17]) : (arr_29 [i_1] [i_1 - 1]))), (((!(arr_32 [5] [i_0] [4] [5] [i_1 + 3] [i_13]))))))));
                    arr_38 [i_13] = ((var_9 ? (max((arr_11 [i_1] [i_1] [23]), (arr_6 [i_1 - 1] [i_1 - 1]))) : -3294));
                }
                var_38 -= (arr_10 [i_0] [i_0] [i_1] [i_1 + 2] [i_1]);
            }
        }
    }
    #pragma endscop
}
