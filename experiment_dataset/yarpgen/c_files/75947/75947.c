/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((32001 ? 15 : (((((var_7 ? 175 : 193))) ? 1023 : (arr_0 [i_0 + 1]))))))));
                var_15 = (min(var_15, ((max((min((-32014 < 19064), -64512)), var_3)))));
                var_16 = (((var_6 | (((arr_3 [i_0] [i_1]) ? var_10 : var_9)))));
                var_17 = ((max((-8491941303753107735 != -32017), ((var_5 ? 106 : var_11)))));
            }
        }
    }
    var_18 = (max(var_18, (((((var_10 * 1024) ? 64520 : ((var_10 ? var_13 : var_7))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 ^= ((((-32767 - 1) ? (arr_4 [i_2] [i_3] [i_4]) : (arr_4 [i_2] [i_5] [i_4]))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_20 = (min((min(1016, (arr_2 [i_2] [i_3] [i_4]))), (((min(50091, 0))))));
                            arr_17 [i_3] [i_4] [i_5] = 1012;
                            var_21 = (max(var_21, ((((((((min((arr_5 [i_2]), 49139))) ? (((max(0, var_11)))) : (max((arr_14 [i_2] [16] [13] [i_6]), (arr_16 [i_2] [i_3] [i_4] [12] [6])))))) ? (arr_13 [i_2] [i_4] [0] [i_6]) : ((((((var_5 ? var_9 : var_0))) ? ((min(var_11, var_8))) : (var_11 & var_8)))))))));
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_22 = (min(var_22, (((32013 ? var_2 : ((16163566448497883429 ? 778469584703633339 : (arr_4 [i_2] [i_7] [i_7]))))))));
                        var_23 = (!var_1);
                        var_24 ^= 96;
                        var_25 = (((((var_7 ? var_8 : 4796))) ? ((var_13 ? var_0 : var_3)) : (var_9 && 4053)));
                    }
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    var_26 += ((16395 ? 79 : -1));
                    var_27 = (min(var_27, (((5853254249716459111 ? 5853254249716459110 : 996)))));

                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        var_28 = var_13;
                        arr_26 [i_2] [i_3] [i_8] [13] = (min(((min(var_9, (arr_10 [i_2] [i_3] [i_8] [9])))), (((arr_24 [i_8 - 1] [1] [i_9] [i_9 - 1]) ? 7923321724477002507 : 12593489823993092506))));
                        arr_27 [0] = (max(12593489823993092505, 12593489823993092505));
                        var_29 ^= (((-(max(var_4, var_8)))));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_30 = (min((((((var_13 ? var_12 : var_8))) ? (arr_6 [i_2] [0]) : var_0)), (arr_10 [i_2] [i_3] [i_8] [i_10])));
                        arr_30 [i_2] [i_2] [i_10] [i_8] [7] = (((arr_7 [i_8 - 1]) & ((1023 ? 49139 : 65528))));
                        var_31 = var_1;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_32 = ((159 == (arr_10 [i_3] [4] [i_11] [i_12])));
                                var_33 *= (((((!((max(var_9, var_2)))))) + 996));
                                var_34 *= ((min((((96 ? 0 : var_11))), var_0)));
                                var_35 = var_1;
                                arr_37 [i_2] [10] = ((((((!(arr_6 [i_2] [i_11]))) ? var_11 : 16399)) == var_11));
                            }
                        }
                    }
                }
                var_36 = (((((996 ? 172 : 65535))) ? 52 : 138));
            }
        }
    }
    #pragma endscop
}
