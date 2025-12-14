/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_8, 35192));
    var_12 |= 35187;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((var_4 ? var_6 : 232410178)) <= (!var_2)));
        var_13 *= var_5;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 &= (min(((-(arr_3 [i_1 - 1]))), (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (arr_3 [i_1 - 1])))));
        var_15 = (max(var_15, ((((arr_3 [i_1]) ? ((((((var_10 ? var_0 : var_1))) ? (((847485864536768871 ? 4193792 : (arr_3 [i_1])))) : 4128768))) : (11102995115339595406 + 37569))))));
        var_16 ^= ((var_2 ? var_3 : (((min((arr_3 [i_1 - 1]), 35159))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_17 = ((208 >> (((arr_6 [i_2 - 1]) - 1621838042))));
        var_18 |= (((3229893340 * 20119777879682933) == (arr_3 [i_2 - 1])));
    }
    #pragma endscop
}
