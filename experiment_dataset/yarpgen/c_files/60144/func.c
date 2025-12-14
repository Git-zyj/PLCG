/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60144
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
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (var_7)));
        arr_2 [i_0] [i_0] = max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))))), ((((!(((/* implicit */_Bool) var_5)))) ? (((arr_0 [i_0]) & (arr_1 [i_0]))) : (((/* implicit */int) ((unsigned short) var_7))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned short) ((short) min((arr_0 [i_0]), (((/* implicit */int) var_1))))))));
    }
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((int) var_1)) : (min((((/* implicit */int) var_2)), (var_3))))) >= (((/* implicit */int) ((((/* implicit */int) var_2)) < (((var_3) ^ (var_3))))))));
    var_15 = ((/* implicit */signed char) var_2);
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_7))));
}
