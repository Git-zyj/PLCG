/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_11 = var_5;
        arr_4 [i_0] [i_0] = ((((((arr_0 [i_0 - 1] [i_0 - 2]) - (!0)))) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])));
    }
    var_12 = (min((((((min(var_8, 4294967295))) < 10819595748081659725))), var_3));
    var_13 = min(((var_2 ? -var_4 : (((var_9 ? 1264928175 : 27223))))), (((~((1341255049 ? 2147483648 : 4))))));
    #pragma endscop
}
