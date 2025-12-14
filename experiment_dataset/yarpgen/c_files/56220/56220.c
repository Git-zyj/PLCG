/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = (((((-var_2 / (max(var_0, var_6))))) ? (min(((1094007183 ? var_6 : 36)), var_4)) : -var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (9223372036854775807 - 24476);
        arr_3 [i_0] = ((-(var_5 ^ 28)));
        var_12 = var_2;
        arr_4 [i_0] [i_0] = (var_9 ? (!var_5) : (var_8 * var_7));

        for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] = ((var_7 ? (arr_0 [i_0] [i_1 + 2]) : (arr_0 [1] [i_1 + 2])));
            var_13 = ((!(arr_5 [i_1 + 1] [i_1])));
        }
        for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_14 = (i_0 % 2 == 0) ? ((((arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 2]) / (arr_9 [i_0] [i_0])))) : ((((arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 2]) * (arr_9 [i_0] [i_0]))));
            arr_10 [i_0] = (arr_5 [i_2] [i_2 - 3]);
        }
    }
    var_15 = var_4;
    var_16 = (((1475 | 220) ? var_9 : var_2));
    #pragma endscop
}
