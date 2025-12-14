/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (18 >= -107);
    var_15 = (max(var_9, ((((max(var_1, 29202))) * -13347))));
    var_16 = ((var_6 ? 36333 : 4249780832));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (min(var_17, ((min((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), ((((arr_0 [i_0] [i_0]) >= (arr_0 [i_0] [i_0])))))))));
        arr_4 [i_0] = (min((min((arr_3 [i_0]), (arr_1 [i_0] [i_0]))), (arr_0 [i_0] [i_0])));
        var_18 = (max((max((arr_2 [21] [i_0]), 127)), (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
