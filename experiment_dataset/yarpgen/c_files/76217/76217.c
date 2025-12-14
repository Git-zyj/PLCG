/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_13, var_10));
    var_17 = (max((max(var_10, 56430)), -2398856401870105178));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = -15;
        arr_2 [i_0] = 0;
        arr_3 [i_0] [i_0] = 0;
        var_19 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 = 13450;
        arr_7 [i_1] = -5329358592106021734;

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_1] = ((~(((((1 ? 9223372036854775799 : 56430))) - (arr_11 [i_1] [i_1])))));
                arr_13 [i_1] [i_3] [i_3] [i_1] = ((141 >> (52096 - 52065)));
            }
            var_21 = -9223372036854775791;
            var_22 = (max(1763461352, (!8796093022207)));
        }
        arr_14 [i_1] [i_1] = ((((max((((9223372036854775807 ? 1 : 1881894117201875993))), ((6793894684415077096 | (arr_11 [i_1] [i_1])))))) && ((((arr_10 [i_1] [i_1] [i_1] [i_1]) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (arr_10 [i_1] [i_1] [i_1] [i_1]))))));
        var_23 += (--1399944624);
    }
    #pragma endscop
}
