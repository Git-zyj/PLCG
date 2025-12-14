/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, -var_1));

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] &= ((var_18 >> ((((-(arr_0 [i_0 - 1] [i_0 - 1]))) + 1121018980))));
        var_20 = (min((arr_1 [7] [i_0 - 1]), ((((max(67104768, var_12)) > (!-1597482424))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((+(max((!65535), ((var_6 ? 4435502981527519559 : var_10))))));
        arr_9 [1] [3] = max(210354031, (max(-210354050, (max(var_6, var_4)))));
    }
    var_21 = (max((12 + var_11), var_10));
    #pragma endscop
}
