/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-var_17 & var_5) ? ((-(var_0 / var_1))) : var_15));
    var_20 = ((var_10 ? var_12 : 7168));
    var_21 = (((var_16 >= var_1) > (((var_15 | var_0) % var_12))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0 + 2] = ((arr_1 [i_0]) / -1944802341355289217);
        arr_4 [i_0] = var_0;
        arr_5 [i_0] = ((~(~var_13)));
        arr_6 [i_0 - 1] [i_0 - 1] = (((var_3 ^ 9223372036854775807) + (var_7 <= var_1)));
    }
    #pragma endscop
}
