/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(var_1 || var_10)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (max(var_13, ((min(var_11, ((((arr_2 [0] [14]) <= (var_11 % var_0)))))))));
        var_14 = (max(var_14, (arr_1 [i_0])));
    }
    var_15 = (max(0, var_5));
    var_16 = (min(var_16, (((-(18446744073709551615 + var_5))))));
    #pragma endscop
}
