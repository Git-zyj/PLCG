/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(~var_6)));
    var_11 = (((~(var_7 || 0))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = var_0;
        var_13 = -3502177165;
        var_14 = 63;
        var_15 = 63;
    }
    var_16 |= (max(var_2, -22023));
    #pragma endscop
}
