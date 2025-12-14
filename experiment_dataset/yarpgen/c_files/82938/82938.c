/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (var_0 & var_3)));
    var_14 -= (min(((~((1724587732 ? 130 : var_0)))), (((!(((-424742196 ? var_7 : 25018))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (((max(32766, 701469494)) == (((~((min(var_2, (arr_2 [i_0])))))))));
        var_16 |= (min(1, (arr_2 [i_0])));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = ((((min(2838176481090202021, -0))) ? var_2 : (~-19863)));
        var_17 = (max(((-2394 ? 112 : (max(-734009141, var_5)))), 19871));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] = (!8);
        var_18 = (min(var_18, (((-2380 ? (arr_6 [i_2]) : var_4)))));
    }
    #pragma endscop
}
