/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [22] [i_0] = ((~((-(~var_18)))));
        arr_3 [i_0] = var_18;
        var_19 = (var_17 <= 151908284);
        arr_4 [i_0] [i_0] = ((~(max(((~(arr_1 [i_0]))), (var_7 & -3835798603712179007)))));
        var_20 = (((var_18 != 26270) >= (115 ^ var_5)));
    }
    var_21 = ((~((~((var_7 ? 26270 : var_6))))));
    #pragma endscop
}
