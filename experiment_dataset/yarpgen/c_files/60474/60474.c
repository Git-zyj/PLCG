/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((~((var_0 ? var_8 : -588399268))))) ? (((-588399255 && var_1) ? (var_0 / 28899) : (~18014398509465600))) : var_0)))));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_11 = (max(var_11, ((((((arr_0 [i_0 - 4] [i_0 - 4]) - (arr_0 [i_0 - 3] [i_0]))) <= 63)))));
        var_12 = var_2;
        arr_2 [i_0] = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_13 = -18014398509465600;
        var_14 = (min(var_14, (((((-((min(-13, var_7))))) & (min(var_0, 32)))))));
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_15 = (((((arr_3 [14] [i_2 - 1]) ? (arr_6 [18]) : 18014398509465607)) + (((((((var_0 + 2147483647) << 1))) ? (arr_5 [i_2 - 3] [i_2]) : (((-1315089372 + 2147483647) >> (var_4 - 59211))))))));
        var_16 = (max(var_16, ((((((arr_5 [i_2 + 2] [i_2 + 1]) >= (max((arr_3 [6] [6]), var_4))))) << (17552890375464788628 - 17552890375464788626)))));
    }
    var_17 = (min(var_17, 36331));
    var_18 = ((var_2 ^ (var_9 / 8)));
    #pragma endscop
}
