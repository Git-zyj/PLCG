/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((3221225472 ? var_10 : 3035145225))) ? var_14 : 63855));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 |= ((3035145225 ? var_15 : (!var_2)));
        var_22 &= ((min(3221225472, 3644718938)));
        var_23 = (max(var_23, (arr_1 [1])));
    }
    #pragma endscop
}
