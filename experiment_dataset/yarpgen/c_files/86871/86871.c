/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((!((min(31496, var_16)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] = (-4364678668196662118 ? 1 : (-32767 - 1));
            arr_7 [i_1] = (max(((9223372036854775807 * (min(var_4, var_0)))), ((min((arr_5 [i_1 - 1] [i_1 + 2]), -973)))));
            arr_8 [i_0] [i_0] [i_0] &= (((((9007199254736896 ? (((arr_4 [i_0] [i_1]) - (arr_2 [i_0]))) : ((var_11 ? 973 : var_11))))) ? 118 : 1));
        }
        var_21 = max(((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : 50498))), var_0);
        arr_9 [i_0] [i_0] = (((arr_4 [i_0] [i_0]) ? ((var_15 ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0]))) : var_12));

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_22 = min((((((((arr_2 [i_2]) || (arr_1 [i_2])))) + ((min(1, var_17)))))), ((~(((arr_3 [i_0] [i_2] [i_2]) | (arr_4 [i_2] [i_0]))))));
            var_23 = (((((var_8 ? 31744 : var_9) % var_15))));
            arr_14 [i_0] [i_2 + 1] = (((((~var_1) && ((min(var_3, var_6))))) ? (((var_10 * 144) + (var_18 / -1145075089))) : ((((-1 && var_3) && (((31779 ? (arr_4 [i_0] [i_0]) : 57))))))));
        }
        var_24 = (min(var_24, (((((((((968474934772297174 < (arr_11 [i_0] [i_0])))) > (max((arr_11 [i_0] [i_0]), -540222558))))) == ((min((214 >= var_14), (17431 || var_5)))))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_19 [i_3] [i_3] = var_10;
        arr_20 [i_3] = (var_4 <= var_1);
        var_25 = (min(var_25, (((var_19 ? (arr_15 [i_3 - 1]) : var_5)))));
    }
    var_26 = ((((((((var_17 ? var_4 : 225))) ? ((min(var_14, var_2))) : (77 | var_13)))) >= (((127 == 22746) ? (min(-3659376036861937261, var_7)) : (min(7688485506536348003, 2147483647))))));
    #pragma endscop
}
