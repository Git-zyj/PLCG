/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((-((var_3 ? var_9 : var_10))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(var_14, (((((158 ? (arr_0 [i_0]) : 85)) > (!11848))))));
        var_15 = 97;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = (min(var_16, 3003607854));
            var_17 = 17377;
        }
        arr_6 [i_0] = (~11848);
    }
    #pragma endscop
}
