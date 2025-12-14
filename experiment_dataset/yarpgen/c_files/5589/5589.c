/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_5 ? var_19 : -var_9))) ? ((((((16828759323826662879 ? var_1 : 445288313))) ? ((min(-120, 4))) : var_8))) : var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (((arr_2 [i_0]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 3849679001)) : var_10));
        var_22 = ((!(18446744073709551600 != 1)));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (((((arr_5 [i_1]) ? (max(var_7, 4171128689259890321)) : (min((arr_3 [i_1]), (arr_5 [i_1]))))) - (((arr_4 [i_1 - 1]) ? (arr_3 [i_1]) : (((arr_3 [i_1 - 2]) | (arr_3 [i_1 + 1])))))))));
        var_24 = ((~((-(max(18, var_5))))));
        var_25 ^= ((-(arr_3 [i_1 + 1])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_26 = (((var_11 ? 14656176110195977821 : 1)) * (arr_8 [i_2 + 1]));
        arr_9 [i_2] = ((!(arr_8 [i_2 - 2])));
    }
    var_27 -= (1 / 2460844727);
    var_28 = (var_5 == (~2460844727));
    #pragma endscop
}
