/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56563
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
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0 - 2])) == (((/* implicit */int) arr_0 [i_0 - 3])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_6 [3ULL] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0 + 1])))) >> (((/* implicit */int) arr_2 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0 + 1])) / (((/* implicit */int) arr_1 [i_0]))))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 5029601156643367870LL)) : (11889310979160156589ULL)))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_12 = max((((/* implicit */long long int) (((((_Bool)0) || (((/* implicit */_Bool) 901564229100444548ULL)))) || (((/* implicit */_Bool) ((4850244157590933149LL) << (((17545179844609107066ULL) - (17545179844609107066ULL))))))))), (((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2LL))) | (8768240503876853498LL))));
        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) arr_8 [i_1]))) > (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23696)))))));
        arr_10 [i_1] = ((/* implicit */long long int) (_Bool)1);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((_Bool) (unsigned char)135)))))));
        var_14 = ((/* implicit */short) var_4);
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)135)) & (((/* implicit */int) (signed char)68))))) && (((/* implicit */_Bool) (unsigned short)23699))));
        arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) && (var_1))) ? (((/* implicit */int) ((unsigned char) arr_14 [i_3]))) : (((/* implicit */int) ((arr_14 [i_3]) <= (arr_14 [i_3]))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3])) ^ (((/* implicit */int) arr_15 [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_3])) - (((/* implicit */int) var_7))))) : (((var_2) | (arr_14 [i_3])))))));
    }
    var_16 = ((/* implicit */unsigned char) var_2);
    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */short) var_9))))) ? (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) >> (((((/* implicit */int) var_9)) - (174)))));
}
