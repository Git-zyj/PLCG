/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76860
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (-7296742396971435723LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53089)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_5 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((short) (signed char)(-127 - 1))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_13))));
    }
    var_19 = ((signed char) ((((/* implicit */int) (unsigned char)249)) * (((/* implicit */int) (unsigned short)39257))));
}
