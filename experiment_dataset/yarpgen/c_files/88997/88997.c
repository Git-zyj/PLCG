/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = (max(var_16, ((min(((37700 ? (((var_8 ? var_2 : 2163337869))) : (min(53927, var_6)))), (((~((min(var_2, 53928)))))))))));
    var_17 = ((min(((min(31221, var_3))), (min(63, var_10)))));
    var_18 = (min((4355 + -6), 53928));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((247 / (arr_0 [i_0]))));
        var_19 = 1;
        var_20 -= -1404045566;
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_21 &= ((~(~53952)));
        var_22 = ((((arr_1 [i_1 - 2]) && var_1)));
        var_23 = (min(var_23, (((-(arr_6 [i_1 + 1] [i_1 - 1]))))));
    }
    #pragma endscop
}
