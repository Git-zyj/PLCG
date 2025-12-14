/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75168
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
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_2 [i_0]))) << (((((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_12) : (((/* implicit */long long int) arr_3 [i_0])))) + (7110081977011499460LL))) - (15LL)))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)67))))) ? (var_12) : (max((((/* implicit */long long int) var_10)), (-5709315367196198063LL))))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_12)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_8 [i_1])))) ? (((/* implicit */int) (((-(8038944333441103512ULL))) > (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (9223372036854775796LL))))))) : (((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)-28))))) << ((((~(var_1))) - (1512955272U)))))));
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 1684975706)) ? (16074925025313399192ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230)))));
    }
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)143)))))), (((((/* implicit */_Bool) max((var_9), (7170493701443440797LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))));
    var_16 += ((/* implicit */signed char) var_2);
}
