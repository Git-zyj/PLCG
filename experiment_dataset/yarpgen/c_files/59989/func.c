/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59989
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
    var_18 -= ((/* implicit */long long int) (-(((int) var_13))));
    var_19 = ((/* implicit */int) (_Bool)0);
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), (var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 += ((/* implicit */short) ((int) ((_Bool) 0ULL)));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (arr_1 [i_0])))) ? ((~(7867578968540179475ULL))) : (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))))));
        var_23 *= (unsigned char)250;
    }
    var_24 = ((/* implicit */short) max((max((var_11), (((/* implicit */long long int) (unsigned char)0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (408740036U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_8)) ? (var_2) : (var_5))) : (((/* implicit */long long int) (+(var_9))))))));
}
