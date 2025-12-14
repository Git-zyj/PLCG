/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (min((min(((max(var_0, var_9))), 18446744073709551613)), ((min((max(0, 214)), (var_8 && var_3))))));
        var_12 = ((((min(34, 1))) || ((max(9331, (max(var_8, 44129110)))))));
        arr_3 [i_0] = (max((((max(var_2, var_4)) / var_2)), 1));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_13 += ((9725183931891614404 || (((1925957730 >> (65529 - 65519))))));
        arr_6 [i_1] [i_1] = ((var_6 ^ ((var_2 >> (var_10 - 6006551316192744280)))));
        var_14 = (16654588827684131011 || 255);
    }
    var_15 = var_2;
    #pragma endscop
}
