/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 41;
        var_10 = ((var_3 ? -63 : -63));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = min((min((arr_4 [i_1 - 1] [i_1 - 1]), var_4)), 53240);
        var_11 *= ((18446744073709551615 ? -37 : (arr_6 [i_1])));
        var_12 = arr_4 [i_1] [i_1];
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (arr_6 [i_2]);
        arr_13 [i_2] = ((-((-56 ? 37 : 46))));
        var_13 = (max((((9 >= (min(13615340939391647607, 3))))), (!var_8)));
    }
    var_14 = var_1;
    #pragma endscop
}
