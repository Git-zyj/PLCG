/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (min(var_17, ((((arr_3 [i_0]) || (arr_3 [12]))))));
        arr_4 [i_0] = (((arr_0 [i_0]) || var_14));
        var_18 = ((((((arr_1 [i_0] [i_0]) / -3853242466736203039))) ? (((arr_0 [i_0]) ? (arr_3 [6]) : -1)) : (arr_3 [i_0])));
        var_19 = (((arr_1 [i_0] [i_0]) ? -var_1 : (arr_2 [i_0])));
        var_20 -= -3853242466736203039;
    }
    var_21 = var_6;
    #pragma endscop
}
