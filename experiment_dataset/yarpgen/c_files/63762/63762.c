/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [1] = ((((((65535 != var_9) - (var_2 != var_3)))) ? 2456489447 : (((((arr_1 [i_0 - 1]) >= -728435193587439745))))));
        var_15 = (min(var_15, ((min(var_7, (-7516 && var_14))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_16 = (~1870657228);
        arr_6 [i_1] = var_11;

        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_1] [9] [9] = (((((955806893 - (arr_1 [i_1])))) & ((-7525 ? 1 : -728435193587439752))));
            var_17 = (var_9 != 59);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_18 &= (var_6 ? (var_3 << 1) : ((((!(arr_4 [i_1] [i_3]))))));
            var_19 = ((-16654 ? (arr_9 [i_1] [i_1 + 1] [i_3]) : (2580343399650594378 == 0)));
        }
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            arr_16 [i_1] [8] [i_4] = ((18446744073709551604 | ((-32744 ? var_8 : 2580343399650594378))));
            var_20 = 0;
        }
    }
    var_21 = max(((~((7516 ? 5741713457118967134 : 72)))), ((((max(var_11, 1))) ? var_4 : ((2456489451 ? 2456489429 : 3294867350441394325)))));
    var_22 = ((!((max(var_6, (var_2 ^ 65519))))));
    var_23 = (((((((max(-7502, 1838477845))) ? (2456489450 != var_10) : ((var_14 ? var_9 : 2456489447))))) ? ((((!((min(1, 4319))))))) : ((((var_14 ? var_8 : 56)) % 126))));
    var_24 = (min(var_24, var_11));
    #pragma endscop
}
