/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (max(var_3, ((16352 ? -1 : ((max(var_4, var_11)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = ((max((min(var_8, (arr_1 [i_0] [i_0]))), var_6)));
        var_20 *= (min((((arr_0 [i_0] [i_0]) & (arr_0 [17] [i_0]))), ((min((arr_1 [i_0] [i_0]), (arr_2 [4]))))));
        arr_3 [i_0] [i_0] &= var_14;
    }
    #pragma endscop
}
