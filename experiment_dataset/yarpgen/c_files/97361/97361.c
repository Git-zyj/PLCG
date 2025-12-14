/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = -57;
        var_16 = var_13;
        var_17 = (31 & -8);
    }
    var_18 = (max(var_18, ((((var_8 < var_3) & ((min(59, 255))))))));

    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_19 |= (((arr_2 [i_1 - 1]) || (arr_2 [i_1 - 1])));

        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            var_20 = (min(var_20, (arr_2 [i_2 + 1])));
            var_21 = (arr_2 [i_1 - 1]);
            var_22 = 66;
        }
        var_23 |= (((arr_4 [i_1 - 2] [i_1 - 1]) ? ((1 ? 207 : (arr_6 [i_1 + 2] [i_1] [i_1]))) : 9));
    }
    var_24 = (max(var_24, ((((((-(2 <= var_0)))) ? var_6 : var_6)))));
    #pragma endscop
}
