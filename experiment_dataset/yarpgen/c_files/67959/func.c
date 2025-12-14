/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67959
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
    var_10 += ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32740))) : (var_5))))) <= (var_3)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(max((max((785568344306297279ULL), (13381053850357363694ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_11 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0])))) & (var_1)))));
    }
    var_12 = ((/* implicit */int) (+(((max((((/* implicit */unsigned long long int) (_Bool)1)), (13381053850357363677ULL))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7)))))));
}
