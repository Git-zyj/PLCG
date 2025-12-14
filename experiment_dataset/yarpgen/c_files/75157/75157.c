/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((-16 ? 10083 : -32741)) & (((((var_18 ? var_16 : var_0))) ? 92 : ((max(var_19, -110))))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((134217728 ? (arr_2 [i_0]) : ((1122309006 ? 3040580758 : 20728))));
        var_21 = (arr_3 [i_0]);
        arr_5 [i_0] = ((-(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = (((((arr_7 [i_1]) || ((((arr_6 [i_1]) ? var_1 : (arr_7 [i_1])))))) ? 114 : (arr_7 [i_1])));
        var_23 = ((((((var_4 || var_2) ? var_12 : (arr_9 [i_1] [i_1])))) ? (max((arr_6 [i_1]), var_10)) : ((((32767 <= (((max(20114, -110))))))))));
        var_24 = ((-(((((var_5 ? -24246 : 1439582720)) == (min(29720, 864308327)))))));
    }
    var_25 = (((((var_1 ? var_9 : (((var_6 ? var_11 : var_18)))))) ? ((((min(var_7, 16252928))) ? 3735297433 : var_11)) : 60));
    var_26 += ((((((((3978931526124701468 ? 103 : var_4))) ? ((max(var_6, 1))) : 63))) == (((var_6 ? var_19 : 4278714367)))));
    #pragma endscop
}
