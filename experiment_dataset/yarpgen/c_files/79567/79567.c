/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((!11331343532061378390), (min(var_4, var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 -= 16383;
        var_17 = 8;
    }
    var_18 = (7115400541648173249 || var_4);
    #pragma endscop
}
