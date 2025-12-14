/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 = 3879300257;
                        var_17 = (min(var_17, (arr_6 [i_1] [i_1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] = var_15;
                        var_18 = (((arr_10 [i_1] [i_1]) != (arr_12 [i_0] [i_0])));
                        var_19 = (min(var_19, (arr_2 [i_0] [i_0])));
                    }
                    var_20 = (arr_12 [i_0] [i_2]);
                    var_21 = var_1;
                    var_22 = (max(((~((var_9 ? 2147483648 : -67)))), (-127 - 1)));
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_21 [i_0] [8] [14] [i_5] [4] [i_0] = (max((arr_10 [i_0] [i_6]), (max((arr_4 [0] [i_6] [i_0] [i_6]), (arr_20 [i_6 + 3] [i_6 + 2] [i_6] [i_0] [i_6 + 2] [4])))));
                                var_23 = (min(var_23, ((max((-127 - 1), -66)))));
                                arr_22 [i_1] [i_1] [i_5] [i_6] [i_6] |= (((arr_5 [i_0] [i_6 - 1] [6]) ? (arr_10 [i_0] [i_7]) : ((((max(4294967295, -61))) ? var_7 : 52))));
                                var_24 = ((1 ? (((var_5 && 4294967273) ? (((((arr_4 [i_1] [i_1] [i_0] [i_7]) || (arr_16 [8] [i_1] [i_6] [i_7]))))) : ((var_13 ? 1 : (arr_5 [i_0] [i_0] [i_0]))))) : var_0));
                            }
                        }
                    }
                    arr_23 [4] [i_1] [i_0] = ((((((arr_9 [i_0]) * ((-(arr_6 [i_0] [i_0] [i_5])))))) ? ((min(((-(arr_4 [i_0] [14] [i_0] [i_0]))), (min(var_10, 6))))) : 11929037953694282086));
                    arr_24 [i_0] [i_1] [i_5] [i_0] = (((min((((var_14 ? var_0 : (arr_10 [i_1] [1])))), (((arr_8 [i_0] [i_0] [i_0]) ? -8182793962502945097 : 89)))) == var_3));
                    var_25 = (min(var_25, -18446744073709551615));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_27 [i_0] = ((!(((var_8 ? var_2 : 2843715936)))));
                    arr_28 [i_0] [i_1] = ((-(~65535)));
                }
                arr_29 [i_0] [i_0] = 252;
                arr_30 [i_0] = 255;
                arr_31 [i_1] |= (max((min((((6 ? 480 : 127))), (max(336008122, (arr_17 [i_0] [i_0] [i_1] [i_1]))))), (((~((var_1 ? (arr_12 [i_0] [i_1]) : 89)))))));
            }
        }
    }
    var_26 = var_3;
    var_27 = (min(var_27, (((~2) >> (((((68717379584 || var_12) ? ((207980671 ? -120 : 1)) : var_13)) + 134))))));
    var_28 = ((var_0 ? 4294967278 : 38));
    var_29 = (var_11 >> (var_3 + 111));
    #pragma endscop
}
