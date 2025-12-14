/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 63;
        var_14 = (max(var_14, ((((max((arr_2 [i_0]), var_5))) ? (~2763786732) : var_13))));
    }
    var_15 = (min((max((min(var_2, 1003261429)), ((var_2 ? 2524540564 : 32740)))), (((max(var_4, var_9))))));
    var_16 = 46660669;
    #pragma endscop
}
