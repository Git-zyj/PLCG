/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (min(-26529, (((((var_6 ? 26549 : -15865))) ? (~var_7) : (max(var_2, var_6))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((((-853535733 ? (-4060585367340624686 > -2036818358) : (min(-350822671709174075, 73))))) ? ((((arr_0 [i_0]) || (arr_0 [i_0])))) : ((min((arr_1 [i_0]), (arr_0 [i_0]))))));
        var_15 = (min(var_15, (arr_1 [i_0])));
    }
    var_16 = ((var_3 || ((((var_2 || var_1) ? var_7 : (min(15859, 828327659)))))));
    var_17 = (min(-350822671709174075, -31258614));
    var_18 = (((max(var_4, (min(var_4, 760727402)))) / (((((max(var_0, var_10))) ? var_3 : -151)))));
    #pragma endscop
}
