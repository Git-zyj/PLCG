/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = ((((((709403043 << (var_3 - 28)))) + ((4872348921117040355 ? var_9 : -5460570281774256183)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [9] [8] = (arr_1 [8] [i_0]);
        var_15 *= 7475127396449544955;
        arr_3 [i_0] = ((-(arr_1 [i_0] [i_0])));
    }
    var_16 = var_10;
    #pragma endscop
}
