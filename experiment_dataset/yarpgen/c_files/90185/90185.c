/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_14 &= (((((arr_2 [i_0]) % var_7))) == ((((max(var_7, var_12))))));
        arr_3 [14] = var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_15 = (((arr_1 [i_1]) == var_2));
        arr_8 [i_1] [i_1] = (var_4 == (~var_0));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((((arr_0 [i_2]) == var_8)));
        var_16 &= ((-2000180443 && (~187)));
    }
    var_17 = ((((~(min(2147483647, -2)))) == (~var_0)));
    #pragma endscop
}
