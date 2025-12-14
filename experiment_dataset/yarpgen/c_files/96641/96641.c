/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 += 256;
        var_21 = ((((arr_2 [15]) ? (arr_1 [i_0] [i_0]) : var_7)));
        var_22 = ((-132 >= (((((var_19 ? (arr_1 [5] [i_0]) : -76))) ? 1 : (max(var_17, var_9))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = ((((((((12103606739043495125 >> (var_1 - 16951)))) ? ((7391 ? -26679 : (arr_4 [i_1]))) : (((~(arr_5 [i_1]))))))) ? -4577763690383669809 : -2877777283018510440));
        var_23 = (min((((6343137334666056490 ? (((arr_5 [i_1]) ? (arr_6 [i_1]) : 127)) : (arr_5 [i_1])))), ((65535 ? ((372868694 ? 9006998207142641971 : -2877777283018510440)) : 134))));
    }
    var_24 = ((((max(-636992792, var_13))) ? (~6343137334666056514) : 360906194));
    var_25 = ((var_1 ? var_4 : var_15));
    #pragma endscop
}
