/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81177
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) min((((/* implicit */long long int) ((int) max((arr_1 [(signed char)2]), (arr_1 [(short)2]))))), ((~(var_5)))));
        arr_2 [i_0] = ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) (+((~(arr_0 [i_0])))))));
        arr_3 [i_0] = 3414971443U;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4290309822871484799LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (288195191779622912LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (max((max((33546240U), (((/* implicit */unsigned int) (unsigned char)226)))), (((/* implicit */unsigned int) ((short) var_0)))))));
        var_12 = ((/* implicit */unsigned int) arr_5 [i_1]);
        arr_7 [12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((33546243U) << (((((/* implicit */int) (signed char)104)) - (93)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3466))) : (4290309822871484780LL)))) ? (max((461551211), (1977781526))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-119))));
        var_13 = (((-(arr_10 [i_2] [i_2]))) > (arr_10 [i_2] [i_2]));
    }
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_1))));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned char)226)))), ((~(((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)72)), ((unsigned char)226)))) ? (((/* implicit */long long int) (~(var_9)))) : (min((((/* implicit */long long int) var_2)), (var_5)))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)-74))))) <= ((-(((/* implicit */int) (unsigned short)10628)))))))) : (var_7))))));
}
