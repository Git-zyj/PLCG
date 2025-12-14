/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = 18446744073709551615;
        var_15 = 0;
    }
    var_16 = (min((max((min(var_14, var_6)), ((max(var_11, var_11))))), (max((min(var_14, 5369)), (max(var_10, var_12))))));
    var_17 = (max(((min((min(-5370, 26137)), (min(var_8, var_2))))), (max(((min(var_4, 26137))), (min(18446744073709551615, var_14))))));
    #pragma endscop
}
