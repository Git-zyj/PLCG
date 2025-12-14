/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80113
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((short) (unsigned char)248));
        var_16 = ((/* implicit */int) (short)128);
    }
    var_17 *= ((/* implicit */unsigned short) max((((unsigned int) min((((/* implicit */unsigned int) (short)16878)), (4294967295U)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1953418612U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)25821))) : (((/* implicit */int) ((unsigned char) 2057922555U))))))));
    var_18 -= ((/* implicit */signed char) ((short) max((((((/* implicit */unsigned int) var_10)) & (0U))), (max((0U), (((/* implicit */unsigned int) (_Bool)1)))))));
    var_19 = ((/* implicit */long long int) max((var_19), (min((((/* implicit */long long int) min((min((4294967278U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)50)) % (((/* implicit */int) (signed char)-57)))))))), (0LL)))));
}
