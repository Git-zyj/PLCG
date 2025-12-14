/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 -= (max(var_3, (((~var_11) ? (((5 ? -100810828 : 4))) : var_10))));
    var_14 = (!-var_7);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_2;
        var_15 |= var_2;
        arr_3 [i_0] = (arr_1 [i_0]);
        var_16 += (((arr_1 [i_0 - 2]) - (arr_1 [i_0 - 2])));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [4] &= (0 ? 197 : 7);
        arr_7 [i_1] = var_3;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_10 [10] &= ((((1 ? 58 : 134))) + 614731467);
        var_17 = -1;
        var_18 = -3115968234799133625;
        var_19 = ((!(((14480122543857724218 ? 2305843009213693952 : 7658742397273898577)))));
    }
    #pragma endscop
}
