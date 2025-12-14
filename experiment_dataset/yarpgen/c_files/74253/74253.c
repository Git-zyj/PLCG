/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_5, var_4));
    var_17 = ((!(-var_11 >= var_9)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_18 = ((1 ? ((252 ? 1 : -12980)) : (arr_0 [i_0] [i_0])));
        var_19 -= ((!(min(30155, (((arr_0 [i_0] [i_0]) || var_11))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 *= (!39);
            var_21 = (((((arr_1 [i_0] [i_1]) >= (arr_1 [i_1] [i_1]))) ? ((13509145499720213165 ? (((-(arr_3 [i_0] [i_0] [1])))) : ((1 ? var_10 : 0)))) : 12979));
            var_22 = var_12;
            var_23 = ((((!(arr_0 [i_0] [i_1]))) ? var_10 : ((((((arr_2 [i_1] [i_0]) ? 30151 : (arr_0 [i_0] [i_1]))) >= (((arr_3 [i_0] [i_1] [i_1]) ? 21407 : var_0)))))));
        }
        var_24 = ((!(arr_0 [i_0] [i_0])));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_25 += (max((max((max(var_5, 1)), (arr_4 [12]))), (arr_5 [12])));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_26 = (~var_13);
            var_27 = (((arr_5 [i_3]) ? var_4 : (124 != 0)));
            var_28 = (((arr_8 [i_3]) ? (arr_2 [i_2] [i_2]) : var_0));
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_29 = (min((max((arr_10 [i_4] [6]), (arr_0 [i_4] [i_4]))), (max(9223372036854775807, var_0))));
        var_30 = 0;
    }
    #pragma endscop
}
