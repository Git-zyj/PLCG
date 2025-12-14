/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(var_4, var_9)), -73));
    var_15 -= 7870155887691012591;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 = ((1 + 72) ? ((var_6 ? 576456354256912384 : var_12)) : ((((arr_2 [6]) ? var_8 : 5))));
        arr_3 [i_0] = -1;
        var_17 *= (arr_2 [i_0]);
        var_18 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_19 *= (((((var_1 ? (arr_5 [7] [i_2]) : var_8))) ? ((1 ? (((64833 || (arr_9 [10])))) : ((max(0, 1))))) : var_9));
            arr_11 [i_2] [i_2] [i_1] = (((23689 ? 1 : (-127 - 1))));
        }
        var_20 |= ((var_6 ? ((((((arr_8 [i_1] [i_1]) ? 2839016074057756132 : var_9))))) : var_5));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_21 = (15 ? -10 : 576456354256912384);
        arr_15 [12] = ((9 ? 9223372036854775801 : 877752683142834060));
    }
    var_22 |= var_11;
    var_23 = var_11;
    #pragma endscop
}
