/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = var_6;
    var_19 ^= var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = 2944106947;
        var_21 = 4243893762;
        var_22 = ((arr_1 [i_0] [i_0]) >> (127 - 113));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = (((!((((arr_4 [i_1]) / 4294967168))))) ? (min((arr_2 [i_1] [i_1]), (((arr_3 [i_1]) >> (133 - 116))))) : (((((arr_0 [i_1]) ? 4294967168 : 3600106083)) + 3600106083)));
        var_24 = 4294967179;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_25 = min((((0 >> (((arr_7 [19]) - 2043407))))), (((arr_7 [i_2]) ? (arr_9 [i_2]) : (arr_7 [i_2]))));
        var_26 = arr_6 [i_2];
        var_27 = var_15;
        var_28 = (((((arr_9 [i_2]) ? (min(2, 1458605447)) : ((1517115424 ? 4067441903 : (arr_6 [i_2])))))) ? ((((4294967177 ? (arr_8 [i_2] [i_2]) : 3865638092)) + (((arr_9 [i_2]) ? 2739806578 : 2541491242)))) : (min(((4067441908 ? (arr_8 [i_2] [i_2]) : 1458605447)), (arr_6 [i_2]))));
    }
    var_29 = (((((4236506798 ? 58460497 : 1752096091)) * 4294967168)) & (((((4294967295 ? var_15 : 3515344557))) ? var_1 : var_2)));
    #pragma endscop
}
