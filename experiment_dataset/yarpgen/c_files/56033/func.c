/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56033
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) - (((/* implicit */int) arr_3 [i_0]))))) / (min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_8))))), (arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */_Bool) (-(var_9)));
        var_10 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_5))))))) : (((/* implicit */int) ((short) ((var_1) + (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : ((~(((/* implicit */int) ((signed char) arr_3 [i_0])))))));
    }
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
}
