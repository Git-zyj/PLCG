/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= ((!((max(var_13, (arr_1 [i_0]))))));
        var_17 = (min(var_17, 58));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = var_4;
        arr_6 [i_1] [i_1] = ((((~(min((arr_4 [i_1]), var_13)))) == (((-(((arr_1 [i_1]) ? var_12 : var_5)))))));
        var_18 = (arr_1 [i_1]);
        var_19 = var_12;
        var_20 = (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_21 = ((8133295163782987419 / (((max((min(28184, var_0)), -31646))))));
        var_22 *= (((arr_7 [i_2]) ? -31647 : (arr_8 [i_2] [i_2])));
    }
    #pragma endscop
}
