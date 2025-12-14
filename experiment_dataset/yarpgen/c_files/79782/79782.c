/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (!((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        var_11 = ((-((min(var_3, 46)))));
        arr_4 [i_0] = (((((8588351113726808700 << (2902866278 - 2902866237)))) ? (((!(arr_0 [i_0])))) : 1281217010));
        var_12 = (((((arr_2 [i_0]) <= (arr_0 [i_0]))) ? (max((arr_2 [i_0]), var_3)) : (arr_2 [i_0])));
    }
    var_13 = (min(var_2, ((((max(1392101017, 4294967295))) ? ((214 ? 8444982266851842866 : 29)) : (511 >= 37)))));
    #pragma endscop
}
