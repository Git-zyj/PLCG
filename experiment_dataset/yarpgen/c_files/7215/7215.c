/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_19 = (min(var_7, (((arr_1 [i_0 - 2] [i_0 - 1]) ? (((arr_2 [i_0]) / (arr_2 [13]))) : 206))));
        arr_3 [i_0] = 3805064061;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_20 = ((((max((arr_2 [18]), (var_14 & var_15)))) ? ((((((var_1 ? 1442118493 : 17549))) && ((max((arr_0 [i_0] [21]), 122)))))) : var_0));
            var_21 ^= (((arr_1 [i_0 - 1] [i_0 + 1]) - (((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_5 [i_0 + 1] [i_0] [i_0]) : (6810230009245803550 < var_11)))));
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_22 = (min((min(((((arr_0 [i_0] [i_2]) & var_4))), (min((arr_4 [16]), 357393499566461504)))), ((min(-1207180115, -32764)))));
            var_23 += ((((((627389370 / (-2147483647 - 1))))) ? 1926274124 : (!14813)));
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_24 = (min(var_15, ((90 - ((var_4 ? (arr_7 [i_3]) : var_0))))));
        var_25 = ((5010215804398578747 <= (((min(-20, var_7))))));
    }
    var_26 = (((-1207180115 + 2147483647) >> (var_5 - 13458108275718118225)));

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_27 = (min(((((var_3 >= var_8) ? var_8 : ((min(-26, var_8)))))), (min((max((arr_4 [i_4]), var_17)), var_8))));
        arr_14 [i_4] [i_4] = ((var_3 & ((1 ? (arr_5 [i_4] [i_4] [i_4]) : (!0)))));
        var_28 = (((((arr_13 [i_4] [i_4]) & 9223372036854775807)) & ((((arr_13 [i_4] [7]) ^ var_2)))));
        var_29 = (((-17550 && var_0) ? ((((7 || (arr_0 [1] [i_4]))))) : var_11));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_30 = (arr_17 [i_5]);
        var_31 = (arr_4 [i_5]);
        var_32 &= (((arr_2 [i_5]) ^ var_2));
        var_33 += (((((arr_7 [i_5]) || (arr_7 [i_5]))) ? ((min((arr_7 [i_5]), 9223372036854775807))) : (1 - var_6)));
        var_34 &= (arr_0 [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_35 = var_9;
        var_36 = (min(var_36, (((((-(((arr_20 [i_6] [i_6]) - 1)))) + ((((((arr_2 [i_6]) ? (arr_20 [i_6] [i_6]) : 16531373651799931019))))))))));
    }
    #pragma endscop
}
