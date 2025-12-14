/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 *= var_9;
    var_13 = (((-var_7 + 2147483647) << (((min(var_8, (var_7 * var_9))) - 6773849762154459360))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, var_9));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 = (arr_4 [i_1] [i_1] [i_0]);
            var_16 += 2147483632;
        }
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_17 -= ((((min(var_10, -2147483633))) ? (((arr_6 [i_2] [i_2]) - (arr_6 [1] [i_2]))) : (arr_6 [i_2] [i_2])));
        var_18 = (min(var_18, (((-((1098673513 ? var_4 : (((159 ? (arr_3 [i_2]) : -2147483632))))))))));
    }
    var_19 = (((var_8 != -2147483631) ? var_2 : var_5));
    #pragma endscop
}
