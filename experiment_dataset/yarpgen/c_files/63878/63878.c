/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((((var_6 >> (var_3 - 16717820285102646502))) ? 2296 : ((var_5 ? var_3 : var_6)))));
    var_13 = -var_8;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_14 = ((max((~var_4), (((arr_1 [i_0]) & var_10)))) * (min(var_0, var_7)));
        var_15 = (min(var_15, ((-(((var_10 ? var_11 : (arr_1 [12]))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_16 = var_7;
        var_17 = var_1;
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_6 [i_2 + 1] [i_2] = (~var_3);
        var_18 = (((((var_10 ? var_6 : ((min(65519, 1650)))))) < ((-1650 ? -1650 : var_0))));
        var_19 = (min(var_19, -var_11));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_20 = var_11;
        var_21 ^= 1;
    }
    var_22 *= (((~(239 ^ var_8))));
    #pragma endscop
}
