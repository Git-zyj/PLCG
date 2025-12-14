/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = ((-117 - ((((!1786719748) || ((min(18446744073709551597, -116))))))));
    var_15 = (min(var_15, var_2));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 ^= ((11526 == (4294967280 || var_4)));
        arr_3 [i_0] = ((+(((-127 - 1) ? (arr_0 [i_0]) : ((min((arr_2 [i_0] [i_0]), -116)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_17 = ((~((var_11 ? (var_4 > -116) : 128))));
        var_18 = (min((min(-1021798992, var_2)), ((((arr_5 [i_1]) ? var_8 : (arr_2 [i_1] [i_1]))))));
        var_19 |= ((((((arr_4 [i_1] [i_1]) >> (var_11 + 8135596365300527630)))) ? ((607297049 >> (((arr_4 [i_1] [i_1]) - 1741891758)))) : ((1021798992 ^ (arr_5 [i_1])))));
        var_20 = ((((max(var_9, (arr_0 [i_1])))) ? (~-15986) : ((122 ? (arr_1 [i_1]) : (arr_1 [i_1])))));
    }
    var_21 *= var_1;
    #pragma endscop
}
