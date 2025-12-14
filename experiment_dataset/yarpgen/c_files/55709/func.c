/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55709
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = (!((_Bool)0));
        arr_3 [i_0] &= ((/* implicit */unsigned short) (!(((((((/* implicit */unsigned int) var_4)) * (723653489U))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_9)) ? (2864443088U) : (0U)))));
        arr_5 [i_0] |= ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (_Bool)0)))))));
        var_11 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) / (16459436749717156426ULL)));
    }
    var_12 = ((/* implicit */unsigned long long int) 1238596645);
    var_13 = ((/* implicit */unsigned int) ((var_7) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)27327)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) var_0))));
}
