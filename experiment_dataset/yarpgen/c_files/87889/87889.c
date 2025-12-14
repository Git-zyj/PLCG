/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 &= (max((((((max(60572, 45768)))) + var_14)), ((min(var_0, ((max(532453542, (arr_2 [i_0])))))))));
        var_21 = ((-14006 ? (min(((60572 * (arr_1 [1]))), (-2147483647 - 1))) : ((max((max((-127 - 1), var_4)), ((((arr_2 [i_0 - 1]) || (arr_1 [i_0])))))))));
        var_22 = (max(var_22, ((min((((arr_2 [i_0 - 1]) % (arr_1 [i_0 - 1]))), (((arr_1 [i_0 - 1]) ? (!60572) : ((var_18 ? 4963 : var_5)))))))));
        var_23 = (((min((2147483647 % 4978), ((4963 ? 60573 : var_11))))) && (((arr_1 [1]) == (((690440989959917181 ? var_13 : var_5))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_24 = (max((((((arr_3 [i_1]) ? var_6 : (arr_4 [i_1]))) - (arr_0 [i_1 - 1]))), (min(var_7, (max(16569533264310900739, 16569533264310900748))))));
        var_25 = (~var_8);
        var_26 = (((((var_15 ? ((-(arr_0 [i_1]))) : ((max(127, (arr_1 [i_1 + 1]))))))) ? (arr_3 [i_1]) : ((max((((arr_3 [i_1]) ? -113 : 2857417587)), (92 - var_15))))));
    }
    var_27 = (max(var_2, 1073741696));
    #pragma endscop
}
