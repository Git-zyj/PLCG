/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = var_10;
        arr_4 [i_0] [i_0] = (max(((18446744073709551615 ? (((arr_2 [i_0]) >> (((arr_2 [i_0]) - 6126055018322099361)))) : var_8)), 1508983636));
    }
    var_21 ^= ((1 ? -12575 : 1));
    var_22 -= (var_10 != 53250548);

    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((~var_5) < 134);
        arr_10 [i_1] = (arr_3 [i_1]);
        var_23 = var_7;
        arr_11 [i_1] [i_1] = ((1 ? (((var_9 || (((var_16 ? (arr_3 [i_1 - 1]) : 3214531104)))))) : var_4));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_24 = (28116 < 1898378090);
            arr_17 [i_2 + 2] [i_2 + 2] = (arr_8 [1] [i_3]);
            var_25 |= ((-603293197 ? var_17 : (((arr_6 [i_3]) - (arr_1 [i_3])))));
            var_26 = (min(var_26, -var_16));
        }
        arr_18 [i_2] = var_5;
        var_27 = (-var_11 ? 8191 : ((~(var_9 ^ 4294967295))));
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] = (1 + -32763);
        arr_23 [i_4 + 2] [i_4 + 2] = min(var_0, 1);
        var_28 = (max((((((arr_13 [i_4]) ? var_7 : var_13)) & var_9)), (((7 ? (min((arr_20 [i_4]), (arr_8 [i_4] [i_4]))) : var_17)))));
        var_29 = ((62573 - (((arr_2 [i_4 + 1]) ^ (arr_2 [i_4 - 3])))));

        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            arr_28 [i_5] [i_5] [i_5] = var_7;
            arr_29 [i_5] = (max(((!(arr_20 [i_5 - 3]))), ((!(arr_20 [i_5 + 1])))));
            var_30 = (min((((1 == (((var_16 < (arr_25 [i_5] [i_5]))))))), (min((arr_1 [i_5 - 1]), ((7168 ? 252 : 1))))));
            arr_30 [i_5 - 3] [i_5] [i_4] = 3038166053;
        }
    }

    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        arr_34 [i_6] = (min((((18015 * 10) << (1 != 8191))), (((((arr_3 [i_6 - 1]) ? var_13 : 0)) * (((!(arr_14 [i_6] [i_6] [i_6 - 2]))))))));
        var_31 = ((+(max((arr_16 [i_6 + 1] [i_6 - 2] [0]), (arr_16 [i_6 - 2] [i_6 - 2] [i_6])))));
    }
    #pragma endscop
}
