/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 32754;
    var_17 += min(((max(var_14, (!-6718241724683178881)))), var_1);
    var_18 = (((((var_14 ? ((var_5 ? 2147483647 : var_10)) : ((max(var_5, var_15)))))) ? (((15275043613111884493 ? ((52 ? 2 : 1)) : 83))) : ((((-126 ? 254 : 7659751458129234916)) % var_4))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (min((min((arr_0 [i_0]), ((((arr_1 [i_0]) ? 0 : var_1))))), ((max(0, (2763554789662833344 >> 1))))));
        var_19 = (min(var_19, (((-((min((arr_0 [i_0]), var_5))))))));
        var_20 = (max((max((arr_1 [i_0]), (arr_0 [i_0]))), (((!(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = (arr_4 [i_1]);
        var_21 ^= (arr_0 [i_1]);
    }
    var_22 = (max(var_4, (max(134, 10673))));
    #pragma endscop
}
