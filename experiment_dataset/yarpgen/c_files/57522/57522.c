/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_3 * var_2);

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        var_12 = ((max((max((arr_0 [i_0]), (arr_1 [i_0 - 1] [i_0]))), (min((arr_1 [i_0 + 3] [i_0 + 1]), (arr_0 [i_0]))))));
        var_13 = (arr_1 [i_0] [1]);
    }
    var_14 = 62849;
    var_15 = var_3;
    var_16 = var_6;
    #pragma endscop
}
