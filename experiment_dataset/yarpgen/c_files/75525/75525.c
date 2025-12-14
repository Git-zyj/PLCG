/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((!var_10) && -4261172067281652437))))));
    var_17 = (var_6 ? -var_10 : (((!((min(0, var_7)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((+((+(max((arr_0 [i_0]), -5756339375910929067))))));
        var_19 = (min((arr_0 [i_0]), (min((((!(arr_0 [i_0])))), -524989143))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 = (max(var_20, (((((min((arr_3 [i_1]), -596541850))) ? (--1) : (arr_2 [i_1]))))));
        var_21 = (min((~3812684884511390453), (((~122) ? (-2109627392587732411 ^ -1472908010) : (-1005925557 * 1)))));
    }
    #pragma endscop
}
