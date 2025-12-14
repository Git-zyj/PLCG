/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min(-var_9, var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [5] = (((((1 ? 3751351766 : -829300858))) ? var_3 : 6022452041622510999));
        var_19 -= (arr_1 [i_0] [i_0]);
        var_20 = (max(var_20, -117));
    }
    var_21 = ((-(((((~var_9) + 2147483647)) << ((((min(1, 1))) - 1))))));
    #pragma endscop
}
