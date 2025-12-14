/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_3);

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 = ((9064632239157014948 <= ((min(65535, (~857303026))))));
        var_19 *= ((-(min(1073741808, var_11))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = 34729;
        var_20 = (min(var_20, (!var_13)));
        arr_7 [i_1] = var_4;
    }
    #pragma endscop
}
