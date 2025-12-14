/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((max(58205, ((min(136, var_9)))))) ? (((min((!7330), (max(3070, var_0)))))) : ((((min(887471661702986053, 69))) ? 1012323759 : ((min(1207130886, 114)))))));
    var_14 += ((var_1 ? var_4 : 7141505891285748480));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min((((arr_1 [17] [16]) ? (((max(78, -103)))) : (min((arr_1 [i_0] [11]), 572282720)))), 65535));
        var_16 = (max(var_16, var_9));
        var_17 = (max(var_17, (min((min((arr_0 [5]), (arr_1 [i_0] [11]))), (!var_3)))));
    }
    var_18 = (min(var_18, var_12));
    #pragma endscop
}
