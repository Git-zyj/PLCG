/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55616
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
    var_20 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (((((var_10) + (9223372036854775807LL))) >> ((((~(var_8))) - (239317245515548308ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_0 [i_0 + 2])))))));
        arr_2 [(unsigned char)6] = ((/* implicit */long long int) ((unsigned int) var_4));
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_4 [i_1] [i_1])));
        var_23 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((unsigned long long int) var_7))))));
    }
    var_24 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))));
}
