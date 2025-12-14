/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (min((arr_6 [i_0] [i_0] [15]), (arr_6 [i_0] [i_0] [i_0])));
                    arr_9 [i_1] = arr_6 [i_0] [i_1] [i_0];

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_3] [i_0] [i_3] [i_0] = ((-var_12 % (max((arr_1 [i_1]), (((arr_10 [i_3] [i_1]) ? var_0 : 12261520135529181667))))));
                        var_20 = (min((11666 + 255), ((max(-11670, -30122)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_21 = -1073447245919808836;
                        arr_15 [i_0] [9] [i_4] = var_17;
                        var_22 = var_17;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_20 [i_5] [i_2] [i_1] [i_0] = (min(((((min(795039988, 3512120656888600347))) ? ((var_15 ? (arr_16 [i_0] [i_1] [i_0] [i_5] [i_0]) : var_5)) : (arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))), (((~var_17) >> (((((arr_1 [i_0]) ^ var_16)) - 1545801537))))));
                        arr_21 [i_0] = ((~(((arr_4 [i_0] [i_0] [i_0] [i_0]) << (19831 - 19782)))));
                        var_23 = (max(var_23, (((var_7 << (1210851254 - 1210851238))))));
                        var_24 = (((~18446744073709551615) ? var_13 : 140737488355327));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_2] = ((((((arr_23 [i_0] [i_2] [i_2]) ? (var_6 & var_17) : (((min((arr_6 [0] [19] [i_6]), var_10))))))) ? var_15 : (((((((arr_17 [i_0] [i_0] [9] [7] [i_0]) ? var_3 : var_9))) ? (((min(-79, 236)))) : (arr_25 [i_0] [i_1]))))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_25 = (min(var_25, ((((((var_16 << (((arr_16 [i_1] [i_1] [i_2] [i_1] [i_1]) - 988392358417797099))))) - (max((arr_13 [i_0] [i_1] [i_0] [i_1]), 1152921504606846976)))))));
                            var_26 += (min(var_7, (min((min(var_14, 30121)), ((min(3, 19831)))))));
                            var_27 = (max(var_27, var_11));
                        }
                        var_28 = (min(var_28, (((~(max(((((arr_19 [i_6] [i_1] [1] [i_6] [i_0] [i_0]) ? var_4 : var_11))), (max((arr_4 [i_0] [i_1] [i_2] [i_6]), var_11)))))))));
                        var_29 = (max(var_29, ((min((min((31152 & 1), (4294967279 << var_10))), ((((min(var_13, (arr_17 [i_0] [i_1] [i_2] [i_6] [17])))) ? (((min(var_13, var_2)))) : (arr_7 [i_1] [i_2] [i_1]))))))));
                        var_30 = var_8;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_31 = ((((((var_3 + 2147483647) << (((var_9 + 1915) - 28))))) ? ((((!(arr_7 [i_9] [5] [i_9]))))) : (arr_7 [i_1] [i_2] [i_1])));
                                var_32 = (max(var_32, ((((((4294967279 ? var_11 : (arr_33 [i_2] [i_1])))) ? ((min(((min(var_11, 2410247119))), -7932660811679288227))) : ((min(var_19, var_0))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = var_7;
    var_34 = (max(var_34, ((((1 + 23825) ? 13 : var_4)))));
    var_35 &= var_18;
    #pragma endscop
}
