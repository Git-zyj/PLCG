/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 ^= ((((max((var_1 >= 2147483647), var_9))) ? (~-32) : -1927898874));
    var_17 = ((!(((~(min(0, var_13)))))));
    var_18 = (~-1);

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_19 = (min((max((arr_1 [i_0 - 3] [i_0 - 3]), (max(1, -1)))), (max(1, (arr_1 [i_0 - 3] [i_0 - 3])))));
        var_20 = (min((!var_0), ((((max((arr_0 [i_0] [i_0]), 42435))) ? -1 : 0))));
        arr_2 [i_0] [i_0] = 14;
        arr_3 [i_0] = (min((((-29196 ? 1 : -29196))), (arr_0 [i_0] [i_0 - 3])));
        arr_4 [i_0] = ((max((arr_0 [i_0 - 2] [i_0 - 3]), ((0 ^ (arr_1 [0] [i_0]))))));
    }
    #pragma endscop
}
