/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64625
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((-((-(var_16))))) : (((/* implicit */unsigned long long int) var_18))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((arr_1 [i_0] [i_0]) != (min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1])))));
        var_21 = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) 266389219U)) || (((/* implicit */_Bool) (unsigned short)2868)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1462878494))))) : (((arr_1 [i_0 - 1] [15]) / (var_9)))))));
        var_22 = ((min((((var_16) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) -671714509063056732LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned short) -1462878481))))));
    }
}
