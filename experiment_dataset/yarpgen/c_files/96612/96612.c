/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_16 |= (~(arr_0 [i_0]));
        var_17 = ((~(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = (((var_10 + (~var_1))));
        arr_7 [i_1] [i_1] |= 67108863;
    }
    var_19 = (((((18446744073709551615 ? var_8 : 259473669))) || (((((max(255, 255))) ? (((var_5 ? var_7 : var_14))) : var_11)))));
    var_20 = (~var_1);
    var_21 = (((min(var_6, (var_8 & -3124844423857932409))) - var_6));
    #pragma endscop
}
