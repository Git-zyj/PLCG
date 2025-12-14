/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((287948901175001088 ? (((224 ? 9127 : 9131397444334290203))) : (((arr_0 [i_0]) ? var_1 : 6))));
        arr_3 [i_0] = (((((((min((arr_1 [i_0] [i_0 - 1]), 65535))) ? (max(189, 16252928)) : 4294967291))) ? (9142 & 56394) : ((170 ? 19 : ((56416 ? 9130 : var_16))))));
        var_18 = ((var_10 ? (arr_0 [i_0]) : (max((arr_0 [i_0]), 243))));
        var_19 = (((((arr_0 [i_0]) / (arr_0 [i_0]))) / ((19 ? 12623511142248940163 : 0))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = ((((arr_5 [i_1]) ? (arr_4 [i_1]) : var_6)));
        arr_7 [i_1] = ((3955064987868000282 && (arr_1 [i_1] [i_1])));
        var_20 = ((var_2 / ((var_3 / (min((arr_0 [i_1]), (arr_1 [1] [1])))))));
        arr_8 [i_1] = (((((-(((arr_1 [i_1] [i_1]) ? 1659338259652373548 : var_2))))) ? (((((((arr_1 [i_1] [i_1]) ? 0 : 1182994535))) ? (arr_1 [i_1] [i_1]) : var_15))) : ((10768999697527743671 ? 0 : 144))));
    }
    var_21 = ((((((max(16787405814057178068, var_5)) ^ (~var_0)))) ? (min((var_8 & 6), (var_11 ^ 12))) : (var_14 ^ var_2)));
    var_22 = var_16;
    var_23 = ((1216464246 ? var_13 : (((((var_8 ? var_2 : 0))) ? 23084 : (((var_16 << (var_12 - 16464249296431374412))))))));
    #pragma endscop
}
