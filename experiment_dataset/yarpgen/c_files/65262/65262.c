/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_10));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [1] = (((2610776870 & 1) | 2610776870));
        arr_3 [i_0] [i_0] = ((((min(((max(var_7, 6228))), (arr_1 [i_0])))) ? var_2 : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (max(((((var_3 << (1565179176182757607 - 1565179176182757595))) & -97)), 0));
        var_16 = var_5;
    }
    #pragma endscop
}
