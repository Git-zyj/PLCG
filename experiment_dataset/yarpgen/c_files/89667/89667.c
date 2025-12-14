/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (max(var_13, (((((min((arr_1 [i_0]), (arr_1 [i_0])))) << ((((max(35692, 6568))) - 35679)))))));
        var_14 = (((((4134528705 <= (var_0 + 160438601)))) + var_7));
    }
    #pragma endscop
}
