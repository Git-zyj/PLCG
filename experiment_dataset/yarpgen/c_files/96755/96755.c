/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = 17;
        arr_3 [2] = (min((max(1, 40797)), 40797));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = 24738;
        var_17 += 5496231127417714366;
    }
    var_18 = (max((max(0, 243)), -1));
    var_19 *= 80;
    var_20 *= 83;
    #pragma endscop
}
