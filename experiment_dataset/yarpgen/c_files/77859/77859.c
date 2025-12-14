/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_4;
        var_16 = (max(var_16, (arr_1 [7])));
        var_17 = (max(var_17, (((~(var_1 == 69))))));
        arr_4 [i_0] = (((max(((min(var_5, 175))), ((69 ? 139 : 9787527542772156412)))) / (((-6 ? 117 : (min(139, var_3)))))));
    }
    var_18 = (min(var_0, var_8));
    #pragma endscop
}
