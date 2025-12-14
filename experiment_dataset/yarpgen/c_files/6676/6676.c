/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_3;
    var_13 = (((max((min(var_3, 2614111338831290665)), var_5))) ? 2466566455 : ((min(-1101439308, var_3))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 |= (max(8, (((arr_1 [10]) ? (arr_1 [i_0]) : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0 - 1])))))));
        var_15 = (min(var_15, (arr_0 [13] [13])));
    }
    var_16 = var_3;
    #pragma endscop
}
