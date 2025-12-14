/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 ^= var_13;
        var_17 = -351248330;
        var_18 = (max((var_13 > var_3), ((min(var_8, (max(205, 228)))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [0] = (arr_0 [i_1]);
        var_19 *= (205 && var_10);
        var_20 = (max(var_20, ((max((-9223372036854775807 - 1), 205)))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] = (((9223372036854775803 / var_1) ? (max(((9223372036854775807 ? (arr_6 [i_2]) : -1815581324)), (arr_2 [i_2]))) : (arr_6 [i_2])));
        var_21 = (8626528960814463900 ? ((var_1 ? 808632513 : 81)) : var_0);
        arr_10 [i_2] = arr_4 [i_2];
        arr_11 [i_2] = ((-((3538260296003142660 * (arr_1 [i_2] [i_2])))));
    }
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        var_22 -= (!var_14);
        arr_15 [i_3] = ((~((var_10 ? -1 : 444495179952437249))));
    }
    var_23 |= (min((((!(!var_10)))), var_6));
    var_24 = ((~var_6) ^ var_8);
    var_25 = (max(var_0, var_9));
    #pragma endscop
}
