/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 5;
        var_17 = max((((arr_0 [12]) << (var_0 - 1365))), ((((arr_1 [i_0 - 3]) == 251))));
        var_18 -= (-127 - 1);
    }
    var_19 = ((!((min(-var_10, 121)))));
    #pragma endscop
}
