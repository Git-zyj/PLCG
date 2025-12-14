/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = (var_2 + var_1);

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [6] = (((max(-129, ((max(129, 64010))))) - var_5));
        arr_4 [i_0] [i_0] = (((((((arr_0 [13]) ? 149 : 255)))) * (arr_2 [i_0] [i_0])));
        var_15 = var_4;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((224 ? (((arr_0 [i_1]) ? 47 : 62)) : (arr_0 [i_1])));
        var_16 = (min(var_16, 1521));
        arr_8 [i_1] [i_1] = (((199 - ((37714 ? 27822 : (arr_5 [i_1]))))));
    }
    var_17 = ((39782 ? 54774 : 96));
    var_18 = ((var_1 ? var_0 : (~var_7)));
    #pragma endscop
}
