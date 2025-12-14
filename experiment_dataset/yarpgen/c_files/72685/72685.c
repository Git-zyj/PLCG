/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((var_8 >= 255), var_8));
    var_13 &= ((255 ? var_11 : var_2));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(var_14, (255 / 255)));
        var_15 = (max(var_15, var_2));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_16 &= (min(var_3, (255 * 127)));
        var_17 = (max((arr_2 [i_1] [17]), 255));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_9 [17] [3] |= (-1 ? (min(var_3, ((var_3 ? var_7 : 127)))) : var_9);
        var_18 = (min(var_18, (min(1, -127))));
    }
    var_19 = var_8;
    #pragma endscop
}
