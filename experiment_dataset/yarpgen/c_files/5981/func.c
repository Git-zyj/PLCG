/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5981
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
    var_11 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-34)) - (((/* implicit */int) var_0)))) - (((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_8))))) - (((/* implicit */int) ((short) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) ((min((var_10), (((/* implicit */unsigned long long int) arr_1 [i_0])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_0 [i_0]))) : (((/* implicit */long long int) max((-1009895401), (((/* implicit */int) (short)25874))))))), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) > (arr_0 [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-34)) != (((/* implicit */int) (signed char)34))))) : (min((arr_2 [i_0]), (((/* implicit */int) (signed char)34)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_2 [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (arr_0 [15LL])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)95))))), (((short) (unsigned char)192)))));
    }
}
