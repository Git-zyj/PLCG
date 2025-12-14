/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(((var_1 ? var_6 : 8117399432600873147)), (((var_11 ? 87 : 1720227929))))) & (((((((58 ? var_12 : var_15))) || ((min(var_8, var_15)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((+((((max((arr_1 [i_0]), var_0))) ? (arr_1 [i_0]) : ((var_2 ? 4294967290 : 4294967272))))));
        arr_3 [i_0] [i_0] = ((var_0 - 127) == (max((min(16162224, (arr_0 [i_0]))), (!-2933))));
        var_17 ^= (arr_0 [i_0]);
        var_18 = ((((min((arr_0 [i_0]), ((var_8 ? 4294967272 : (arr_1 [i_0])))))) ? (((arr_1 [i_0]) ? -3 : ((63 ? var_7 : (arr_0 [i_0]))))) : (((arr_1 [i_0]) + ((min((arr_1 [i_0]), 94)))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = var_10;
        var_20 -= (((((!(-73 < 16)))) & ((((max((arr_1 [18]), var_8))) ? (max(57344, var_4)) : 1))));
        arr_6 [i_1] = ((((((((arr_5 [10] [i_1]) * (arr_5 [i_1] [i_1])))))) >= (((max(4204733259243101872, 95)) & ((((-8747722560967609856 >= (arr_4 [i_1])))))))));
        arr_7 [14] = ((((var_0 - var_10) >= (arr_5 [i_1] [i_1]))));
    }
    #pragma endscop
}
