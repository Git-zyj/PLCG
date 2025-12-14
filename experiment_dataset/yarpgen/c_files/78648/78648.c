/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 -= ((-(((arr_1 [i_0]) ? 4834795594714384248 : (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_19 = -0;
        arr_6 [i_1] = (((max(((503316480 ? 23 : 889297140)), -31619))) ? 1 : (arr_4 [1] [i_1]));
    }
    var_20 = (max(var_20, var_9));
    #pragma endscop
}
