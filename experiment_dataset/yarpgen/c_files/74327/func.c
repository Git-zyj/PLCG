/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74327
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
    var_14 = (-(((((/* implicit */int) (signed char)61)) * ((((_Bool)1) ? (((/* implicit */int) (unsigned short)26180)) : (((/* implicit */int) var_0)))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((((/* implicit */int) (signed char)-77)) - (773703288))) > (((-773703275) ^ (((var_2) | (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((short) arr_3 [i_0] [i_0]));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((min((var_1), (((/* implicit */int) (signed char)-1)))) / ((-(arr_6 [(signed char)0])))))));
        var_17 = ((/* implicit */_Bool) min((max((var_2), (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) (unsigned short)38422)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((short) (+(((arr_6 [i_2]) + (var_13))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-1882478370) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_9 [i_2] [i_2]) : (((/* implicit */int) arr_5 [i_2] [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_0)))))))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */int) var_8)), ((((-(((/* implicit */int) arr_8 [i_2])))) - ((-(((/* implicit */int) var_8)))))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        arr_13 [i_3] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_3]) - (((/* implicit */int) var_8))))) ? (var_2) : ((+(var_13)))));
        arr_14 [i_3] [i_3] = ((int) arr_9 [i_3] [i_3 - 2]);
    }
}
