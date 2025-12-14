/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [12] [i_0] = ((((min((~var_6), var_4))) ? ((((((-(arr_1 [i_0] [i_0]))) != (arr_0 [i_0] [12]))))) : (((((var_7 + (arr_1 [i_0] [3])))) ? ((~(arr_1 [i_0] [1]))) : 0))));
        var_10 = (((((~(var_5 - 222818116)))) ? ((max((0 & -12), 0))) : ((min(var_7, var_0)))));
    }
    var_11 = (((max(var_3, var_5))));
    #pragma endscop
}
