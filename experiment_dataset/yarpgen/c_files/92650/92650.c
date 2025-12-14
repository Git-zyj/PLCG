/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_18 = ((min(1099483238, 1958533076)));
        arr_2 [i_0] [i_0 + 1] = ((2410507891319740374 ? 122 : -31));
        var_19 = (arr_0 [i_0]);
        arr_3 [i_0] = ((var_6 >> (125 - 99)));
    }
    var_20 = (max(var_20, (((((((var_3 / 54915) ? (135 ^ var_17) : (!1958533076)))) ? -134 : ((((14420021268337917008 ? 126 : 9479)) % (max(1657960850, 240)))))))));
    var_21 = 125;
    var_22 = ((-(!4282483004)));
    #pragma endscop
}
