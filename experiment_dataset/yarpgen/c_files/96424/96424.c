/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 8372473118142330239;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((min(6199133519628388003, 6199133519628388010)) & (3333311091 - -1));
        var_18 = ((((var_16 ? ((-2609459464708522096 ? 5381800899417884339 : 6199133519628387998)) : ((4021958314 ? var_15 : 6199133519628387984)))) + ((7616069407763250933 ? 18446744073709551615 : 5381800899417884339))));
        var_19 = ((27825 ? ((((min(var_11, -7))) ? (min(12247610554081163606, 18446744073709551615)) : (arr_2 [8] [8]))) : ((((((arr_1 [i_0] [i_0]) ? 11564487311130423719 : -773479699))) ? (max((arr_0 [i_0]), -7901482596511871642)) : var_9))));
        arr_4 [i_0] [i_0] = (((!179) ? ((-1 ? 0 : ((-2402173643603219323 ? 18446744073709551599 : -7)))) : 13064943174291667278));
    }
    var_20 = -2402173643603219328;
    #pragma endscop
}
