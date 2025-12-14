/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_7);

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0 - 2] = ((~(((~3075469472) ? (min(var_2, 3075469472)) : var_5))));
        var_11 = 3075469472;
        arr_4 [i_0] = ((!(((var_5 ? var_9 : var_6)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_12 *= (((((-((var_3 ? 18446744073709551615 : var_5))))) ? (var_2 > var_7) : (((-5446362174241617347 ? var_5 : var_2)))));

        for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] = ((!393216) ^ ((var_8 ? (arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1]) : var_4)));
            var_13 ^= (!var_8);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [19] = ((-var_8 ? (arr_8 [i_1]) : (var_5 >= var_3)));

            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                var_14 = var_7;
                var_15 += ((0 / (~var_2)));
            }
            arr_17 [i_1] = (!50);
        }
    }
    #pragma endscop
}
