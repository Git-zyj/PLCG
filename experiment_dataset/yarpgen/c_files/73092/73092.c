/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(4294967295, (((((1 ? 4294967295 : 1))) ? (4294967295 | var_13) : (max(var_4, 1))))));
        arr_3 [i_0] [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_20 = (max(var_20, (((4294967279 / (min((arr_1 [i_1 + 1]), 30)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 6;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] [i_1] = 4294967279;
                        var_21 = 4294967266;

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_22 = (((((4294967248 ? 0 : (arr_12 [i_3 - 1] [i_3 + 4] [i_3 - 2])))) ? (((((min(4294967233, 62)) == var_8)))) : (min(((11 ? (arr_17 [i_1 - 1] [i_2] [i_3 + 4] [i_4] [i_5]) : var_14)), 17))));
                            var_23 -= (arr_15 [i_1] [5] [6] [6] [i_3 - 2] [5] [5]);
                            var_24 = ((4294967279 ? ((((((max((arr_7 [i_1] [i_4] [i_5]), var_7))) || (arr_5 [i_1]))))) : (max(17, 4294967279))));
                        }
                    }
                }
            }
        }
        arr_18 [i_1] [i_1] = (((((arr_7 [i_1] [i_1 + 1] [i_1 + 1]) ? (arr_7 [i_1] [i_1] [i_1 - 1]) : 11)) & (max((arr_7 [i_1] [i_1 - 1] [i_1 - 1]), 62))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (((var_11 ? 4294967279 : (arr_19 [i_6]))) ^ ((36 ? 0 : 0)));
        var_25 = (((((arr_19 [i_6]) ? ((var_0 ? 4294967295 : 4294967234)) : (arr_20 [i_6]))) ^ var_4));
        arr_22 [i_6] = (((((0 ? 62 : 4294967232))) ? (max(((var_16 & (arr_20 [i_6]))), (arr_20 [i_6]))) : (((arr_20 [i_6]) ? (arr_19 [i_6]) : (arr_20 [i_6])))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_26 = ((!(var_13 ^ 1)));
        var_27 = ((((((arr_20 [i_7]) ? (arr_19 [i_7]) : (arr_23 [i_7] [i_7])))) ? var_17 : var_4));
        var_28 = (min(var_28, ((((((((((arr_24 [0]) + var_7))) ? ((var_16 ? (arr_19 [i_7]) : 4294967295)) : (30 | var_8)))) ? ((max(4294967267, (arr_24 [1])))) : (((((((arr_19 [i_7]) ? 63 : var_12)) > var_18)))))))));

        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_29 = (min(var_29, (arr_20 [6])));
            arr_27 [i_7] [i_7] [i_8] = ((((((4294967267 + 63) - 58))) + -var_9));
            var_30 = (min(var_30, (((((((((arr_25 [i_8 - 1] [i_8 - 1]) + 2147483647)) >> (var_2 - 7669663316870833988)))) ? (arr_23 [i_7] [i_7]) : (((((((arr_24 [0]) ? 4294967233 : 63))) <= (max((arr_24 [22]), 4294967227))))))))));
        }
    }
    var_31 = (max(var_31, 0));
    #pragma endscop
}
