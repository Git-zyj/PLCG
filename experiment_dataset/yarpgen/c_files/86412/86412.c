/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((-(arr_0 [i_0])))) - 2342940453);
        var_20 = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (min(((-((min((arr_1 [i_0]), (arr_1 [i_0])))))), var_15));
    }
    var_21 = (((min((((286934126 ? -2730 : 1297722500))), (min(var_1, var_14))))) ? ((~(-1292528047 && var_17))) : 17374);
    #pragma endscop
}
