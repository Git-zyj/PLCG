/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((!var_5) > var_2)) ? var_8 : (((((1206451175 ? var_3 : var_4))) ? var_8 : (~var_10)))));
    var_16 = var_5;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0] = ((1 <= (~0)));
        arr_4 [i_0] = (((min((~var_3), var_10))) ? (((~(~16)))) : ((-var_7 ? ((((!(arr_0 [i_0]))))) : 0)));
    }
    var_17 = ((max(((var_3 ? var_1 : 0), (~1)))));
    var_18 = var_2;
    #pragma endscop
}
