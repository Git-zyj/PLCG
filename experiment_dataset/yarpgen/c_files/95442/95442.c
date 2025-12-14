/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((77 == var_10) % 80));
    var_20 = (min(var_20, var_6));
    var_21 = (((~var_6) == (((((76 ? var_3 : var_7))) ? (-66 || 12) : var_13))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (((arr_1 [i_0]) >> (((arr_1 [i_0]) - 3776596133))));
        var_23 = (min(var_23, ((((arr_1 [i_0]) >> ((((~(arr_0 [i_0]))) + 4217419865310653312)))))));
    }
    #pragma endscop
}
