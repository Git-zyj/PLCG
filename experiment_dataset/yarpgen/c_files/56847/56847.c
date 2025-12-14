/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -1906453108;
    var_21 = var_0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_22 = ((max((arr_0 [i_0] [1]), (arr_0 [11] [i_0]))));
        var_23 += ((!(!-1764342490)));
        var_24 ^= (((~((var_8 ? 75 : 75)))) == (arr_2 [i_0]));
        var_25 = 0;
        var_26 = ((min((arr_0 [5] [i_0]), (arr_0 [i_0] [i_0]))));
    }
    var_27 -= 75;
    #pragma endscop
}
