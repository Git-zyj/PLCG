/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(-8755450345299497149, var_8));
    var_13 = var_3;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 = -7880995862249260549;
        arr_2 [i_0] [i_0] |= 4286578688;
        arr_3 [i_0] [i_0] = ((-1857135634004439096 ? 3224592659 : 3139273260231132404));
    }
    #pragma endscop
}
