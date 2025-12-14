/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min(((min(104, 102))), var_8)), var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (~var_3);
        var_12 = 114;
        arr_2 [i_0] = 104;
    }
    #pragma endscop
}
