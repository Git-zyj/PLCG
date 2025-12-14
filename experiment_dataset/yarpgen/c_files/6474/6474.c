/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = ((((var_0 ? var_5 : 2000265815)) & (2000265815 ^ var_8)));
        arr_3 [i_0] = (((arr_2 [i_0]) ^ (arr_2 [i_0])));
        arr_4 [i_0] [12] |= (2000265815 < var_16);
        arr_5 [i_0] = (arr_1 [i_0] [i_0]);
    }
    var_20 &= ((var_18 + ((var_18 ? (1 + var_15) : var_15))));
    var_21 = ((((((min(3435428508, 5181179884105375264))) ? var_6 : (!var_6))) - var_8));
    var_22 = max(1, ((var_3 - ((-15299 ? 1 : var_3)))));
    #pragma endscop
}
