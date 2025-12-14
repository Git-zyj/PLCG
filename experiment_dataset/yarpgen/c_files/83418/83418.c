/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min((((~(var_4 | var_10)))), var_3);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(79, 18036415098288043789));
        var_16 = (max((arr_1 [i_0]), (((arr_1 [i_0]) + (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = (min(-131071, ((((arr_0 [i_0] [i_0]) || 6)))));
    }
    #pragma endscop
}
