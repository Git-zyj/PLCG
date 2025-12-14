/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = (~var_11);
        var_14 = (min(((1853971007 ? 1028229880 : 1028229880)), 3266737413));
        var_15 = (min((max(3266737415, var_7)), ((-3266737409 | ((var_10 ? var_3 : 3266737400))))));
    }
    var_16 -= (var_2 == var_7);
    #pragma endscop
}
