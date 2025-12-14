/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((min((max(1133, 786887182)), (max(var_7, var_10)))) / var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 ^= (((arr_7 [15] [3]) ? ((((((~(arr_13 [i_0] [5] [i_0] [i_2] [i_3 + 2])))) ? (!var_11) : (max((arr_4 [i_0]), (arr_9 [0])))))) : (min(-29652, ((var_15 ? (arr_12 [i_0] [19] [i_0] [i_0] [i_0]) : (arr_2 [15])))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                            {
                                arr_17 [3] &= ((~(((arr_7 [17] [i_3]) | var_6))));
                                var_19 = (max(var_19, var_12));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                var_20 = (min(var_0, (min(var_3, (var_16 & var_1)))));
                                var_21 = ((~((((min(var_2, var_8))) ? (arr_9 [i_5]) : (((arr_12 [i_0] [i_5] [i_5] [6] [6]) ? var_16 : var_0))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                            {
                                arr_24 [17] [3] [i_2] [19] [i_6] = ((((((arr_0 [i_0]) ? (arr_3 [i_1]) : var_4))) ? (arr_2 [i_0]) : (((((arr_18 [2] [14] [i_1] [14] [i_1] [i_3] [14]) > (arr_4 [i_6])))))));
                                var_22 = (max(var_22, (((arr_2 [i_2]) ? (((arr_21 [19] [i_0] [i_1] [i_2] [i_2] [i_3] [3]) ? (arr_7 [i_0] [3]) : var_5)) : (55 == 786887170)))));
                            }
                            arr_25 [i_0] = var_8;
                        }
                    }
                }
                var_23 ^= ((((((((var_9 ? (arr_4 [i_0]) : (arr_23 [7] [i_1] [i_1] [12] [0] [20])))) ? (((arr_11 [5] [5] [16] [i_1] [5] [3]) / (arr_13 [i_0] [14] [i_1] [17] [i_0]))) : (arr_21 [i_0] [i_1] [1] [1] [i_0] [0] [2])))) ? var_5 : (min(62142, -8334893467392094252))));
                arr_26 [i_1] [17] [i_0] = (max(((((((var_4 ? -8334893467392094252 : -786887182))) ? 65514 : -1462173760))), (((max(var_9, var_14)) & var_2))));
            }
        }
    }
    var_24 = var_7;
    var_25 = ((((((var_0 > var_1) ? (((var_0 ? var_2 : var_5))) : ((var_0 ? var_1 : var_9))))) || ((max((var_1 % var_1), -var_4)))));

    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_26 = var_10;
        arr_31 [i_7] [i_7] = (max((arr_29 [0]), (((((var_3 ? var_9 : var_12)) + (((arr_28 [i_7]) ? (arr_28 [i_7]) : (arr_30 [i_7 - 2] [i_7 + 1]))))))));
        arr_32 [2] |= (((max((arr_29 [i_7]), (arr_29 [i_7]))) - ((((((((arr_30 [i_7 + 1] [i_7]) > var_2))) >= (((!(arr_30 [i_7] [22]))))))))));
        var_27 |= (min(786887177, -9223372036854775797));
    }
    #pragma endscop
}
