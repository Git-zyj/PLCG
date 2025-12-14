/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72027
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
    var_19 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) var_18)) & (((/* implicit */int) ((signed char) var_1)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_2)))))));
        var_21 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_2))), (((((/* implicit */int) arr_0 [6LL])) << (((/* implicit */int) arr_0 [10ULL]))))));
        var_22 -= (-(((((/* implicit */_Bool) arr_0 [14ULL])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [10LL])))));
        var_23 = ((/* implicit */unsigned short) (-(22ULL)));
    }
}
