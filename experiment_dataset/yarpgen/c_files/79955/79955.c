/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((min(31744, (arr_0 [i_0]))) - -31744))));
        arr_3 [i_0] [i_0] = 3709992849523227290;
        arr_4 [i_0] = max((min((arr_1 [i_0]), (arr_0 [i_0]))), (((arr_0 [i_0]) / ((~(arr_1 [i_0]))))));
        arr_5 [i_0] = (arr_0 [i_0]);
        arr_6 [i_0] = (arr_1 [i_0]);
    }
    var_16 = (min(var_4, -3608245409804862992));
    #pragma endscop
}
