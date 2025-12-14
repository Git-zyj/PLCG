/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_6 & (min(45081, var_10)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = ((32767 ? (((((-9223372036854775807 - 1) ^ (arr_0 [i_0] [i_0]))) | ((var_10 ? (arr_0 [17] [i_0]) : (-9223372036854775807 - 1))))) : (((232 & (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = max((((((((min(4294967295, (-9223372036854775807 - 1))) + 9223372036854775807)) + 9223372036854775807)) >> (4294967289 <= 157))), (((min((-9223372036854775807 - 1), var_0)) / (-9223372036854775807 - 1))));
    }
    var_18 = (min((((max(888978233, 13)))), var_9));
    #pragma endscop
}
