/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((-(arr_2 [i_0] [i_0]))));
        var_18 = (max(var_18, ((-(((((var_16 / (arr_2 [i_0] [i_0])))) | (var_16 % var_17)))))));
        arr_4 [i_0] = (!-92);
    }
    var_19 = 7123587532171547035;
    #pragma endscop
}
