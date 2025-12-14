/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= max(18014396361998336, var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (~var_12);
        arr_3 [i_0] |= -18014396361998346;
    }
    var_19 = (max(1, -26032));
    var_20 = ((18014396361998345 ? (((min(0, 24023)))) : var_8));
    #pragma endscop
}
