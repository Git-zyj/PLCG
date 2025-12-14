/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 -= (~var_8);
        var_21 = 28;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_22 += (~1152921504606846975);
        var_23 = (((((58018 < (arr_3 [i_1] [i_1]))))));
        var_24 ^= (var_15 ? ((max((arr_0 [i_1 + 1] [i_1 + 1]), (-4 ^ var_19)))) : (~var_11));
    }
    var_25 = ((var_19 ? var_5 : (((!58018) ? (var_1 >= 3675964481) : var_9))));
    #pragma endscop
}
