/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (min(var_19, (((var_11 > ((min((min(95, var_16)), (!1382839423)))))))));
        arr_2 [i_0] [6] = 90;
        var_20 = (max(var_2, ((max((128 > var_3), var_3)))));
        var_21 = (max((max(1, var_16)), 1));
    }
    var_22 = (min(var_22, var_15));
    #pragma endscop
}
