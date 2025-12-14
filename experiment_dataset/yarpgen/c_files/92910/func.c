/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92910
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_12 *= ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) -4413045857706130589LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((+(2616449377U))))));
        var_13 &= ((_Bool) ((((/* implicit */_Bool) ((short) (short)6373))) || ((!(((/* implicit */_Bool) 1678517912U))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((max((((/* implicit */int) arr_4 [i_1])), (min((((/* implicit */int) (unsigned char)119)), (-309025821))))), (((((/* implicit */_Bool) min(((unsigned char)202), (((/* implicit */unsigned char) arr_0 [i_1] [i_1]))))) ? (((/* implicit */int) (unsigned short)23632)) : (((/* implicit */int) max(((unsigned short)24340), (arr_5 [i_1] [i_1]))))))));
        var_15 = ((/* implicit */int) var_4);
    }
    var_16 = (_Bool)1;
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (var_11))))))), (2147483647)));
}
