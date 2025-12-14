/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((!(((~(max(101, -7022170689568629005)))))));
    var_20 = (min((max(53970, 22481)), var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (~-7022170689568629005);
        var_22 = (min(var_22, (((~(arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (~-1692210767);
        var_23 = (~22481);
    }
    #pragma endscop
}
