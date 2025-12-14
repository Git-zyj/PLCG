/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((((7169983226862197427 && var_6) ^ ((var_6 >> (var_0 - 1281921845))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (~(var_1 - var_9));
        arr_2 [i_0] = (!(-7169983226862197428 == 255));
        var_12 *= ((-var_6 && (((var_7 / (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = (((1 + 4575901179827538451) + 814968434971414815));
        var_13 = (((((var_5 ? 6788755575935018047 : var_5))) ? ((var_3 ? (arr_0 [i_0]) : var_2)) : 221));
    }
    var_14 &= ((-((var_1 ^ ((var_9 ? var_1 : var_9))))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (max(var_15, (((7664048227022560024 >> (-1 + 39))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_2] [i_2] [i_2] = (((((var_7 ? 0 : 15168987386834126261))) ? ((0 ? var_0 : var_8)) : ((((arr_10 [6] [i_2]) ? var_0 : var_0)))));
            var_16 += ((~(-1805927049235824717 / var_4)));
            arr_12 [i_1] [8] &= -0;
            var_17 *= (((((var_0 ? 12 : var_2))) ? (3 || 4294967294) : (var_0 | var_4)));
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 = ((((((-var_9 >= (0 + 2922829920))))) + (((((var_5 >> (var_1 + 5102968674555257081)))) ? (~6) : (((((arr_1 [i_3]) == (arr_14 [i_3])))))))));
        arr_17 [i_3] [i_3] = (((((var_4 ^ ((-4586462675901621173 ? (arr_13 [i_3] [21]) : var_8))))) ? (((~2812226584133424998) ? ((13870842893882013164 - (arr_14 [i_3]))) : (((~(arr_0 [16])))))) : (((~((1 ? var_8 : 4208862842680009180)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_19 = (~((-(arr_1 [i_4]))));
        arr_20 [i_4] = ((~(((arr_8 [i_4]) ? var_7 : var_9))));
    }
    #pragma endscop
}
