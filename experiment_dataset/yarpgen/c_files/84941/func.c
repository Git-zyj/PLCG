/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84941
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = var_4;
    var_18 = var_6;
    var_19 ^= var_11;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_20 = 2944106947U;
        var_21 = 4243893762U;
        var_22 = ((arr_1 [i_0] [i_0]) >> (((127U) - (113U))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_23 = (((!(((/* implicit */_Bool) ((arr_4 [i_1]) / (4294967168U)))))) ? (min((arr_2 [i_1] [i_1]), (((arr_3 [i_1]) >> (((133U) - (116U))))))) : (((((((/* implicit */_Bool) arr_0 [i_1])) ? (4294967168U) : (3600106083U))) + (3600106083U))));
        var_24 = 4294967179U;
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_25 = min((((unsigned int) ((0U) >> (((arr_7 [19U]) - (2043407U)))))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_9 [i_2]) : (arr_7 [i_2]))));
        var_26 = arr_6 [i_2];
        var_27 = var_15;
        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (min((2U), (1458605447U))) : (((((/* implicit */_Bool) 1517115424U)) ? (4067441903U) : (arr_6 [i_2])))))) ? (((((((/* implicit */_Bool) 4294967177U)) ? (arr_8 [i_2] [i_2]) : (3865638092U))) + (((((/* implicit */_Bool) arr_9 [i_2])) ? (2739806578U) : (2541491242U))))) : (min((((((/* implicit */_Bool) 4067441908U)) ? (arr_8 [i_2] [i_2]) : (1458605447U))), (arr_6 [i_2]))));
    }
    var_29 = ((((((((/* implicit */_Bool) 4236506798U)) ? (58460497U) : (1752096091U))) * (4294967168U))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_15) : (3515344557U)))) ? (((unsigned int) var_1)) : (var_2))));
}
