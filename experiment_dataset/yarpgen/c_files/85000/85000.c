/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_19 += (min((~var_3), -65535));
        arr_4 [i_0] = (((((((-2579 + 2147483647) >> (2315791075 - 2315791062)))) ? ((226 ? 2315791081 : 59405)) : 1979176235)));
        var_20 = (-20223 * -78);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1 + 3] &= ((4140594473 ? ((max((arr_6 [i_1 - 1] [i_1 + 1]), (arr_6 [i_1 + 2] [i_1 + 2])))) : ((min((arr_6 [i_1 - 1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 + 3]))))));
        var_21 += (min((min(-491096941, (arr_6 [i_1 - 1] [i_1 + 2]))), (arr_6 [i_1 + 1] [i_1 - 1])));
        arr_8 [i_1 + 2] = (((max(var_2, 31))));
        var_22 = (max(((+(((arr_6 [i_1] [i_1]) ? 158 : -20223)))), (!var_13)));
    }
    var_23 = (~2345048264);
    var_24 = 1193419679;
    var_25 = (~var_16);
    var_26 += -var_10;
    #pragma endscop
}
