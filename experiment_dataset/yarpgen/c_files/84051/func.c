/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84051
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)12), ((signed char)49))))))) <= (((/* implicit */int) ((((((/* implicit */_Bool) 8729799855066386341ULL)) ? (((/* implicit */long long int) 1882542308)) : (var_0))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))))))));
        var_16 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (signed char)95)))));
        var_17 = ((/* implicit */long long int) min((max((((((/* implicit */int) (short)20111)) + (((/* implicit */int) arr_0 [7ULL])))), (((/* implicit */int) arr_0 [i_0])))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    }
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_2))));
}
