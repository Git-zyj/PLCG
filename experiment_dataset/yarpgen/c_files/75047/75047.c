/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_5 ? -20021 : ((751275595 ? 9079256848778919936 : (!28)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (arr_0 [i_0] [i_0]);
        var_12 = (min(var_12, (((-20021 && (((var_0 ? var_2 : 3543691700))))))));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_13 = var_4;
        arr_4 [i_1 + 1] = (((~-1462082938) ? ((var_3 % ((-5653367238100714773 & (arr_2 [i_1]))))) : 161));
        var_14 -= (((arr_2 [i_1]) ? 63071 : (min(-var_2, (3499494939 * var_3)))));
    }
    #pragma endscop
}
