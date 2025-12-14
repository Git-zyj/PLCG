/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((min(var_10, (((-29714 + 2147483647) >> (33452 - 33440)))))), var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((arr_2 [i_0]) ? var_6 : (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
    }
    var_20 = ((var_0 ? ((((!(!var_5))))) : (min(9162092849659254746, 8819648887304242618))));
    #pragma endscop
}
