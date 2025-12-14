/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72919
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0])), (((min((arr_1 [i_0]), (239478325U))) * ((+(4055488970U)))))));
        arr_3 [i_0] = ((/* implicit */short) -1240260319);
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 239478325U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (var_10))))))), (max((max((1260021456U), (arr_1 [i_0]))), (max((4055488974U), (((/* implicit */unsigned int) (signed char)-84))))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (4055488983U) : (arr_8 [i_1] [i_1])))) < (min((-9223372036854775806LL), (((/* implicit */long long int) arr_8 [i_1] [i_1])))))) || (((/* implicit */_Bool) 1925463714U))));
        var_12 = ((/* implicit */_Bool) min((((arr_6 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1]))), ((-(var_11)))));
    }
    var_13 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-82)), (var_3)))), (min((((/* implicit */unsigned long long int) var_1)), (var_9)))))));
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (signed char)84)))))) % ((((-(12U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
}
