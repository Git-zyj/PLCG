/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78000
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
    var_19 *= ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = max((max((((((/* implicit */long long int) ((/* implicit */int) (short)511))) + (var_2))), (var_0))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 15433336211922688553ULL)))) ? (((((/* implicit */int) arr_0 [11ULL] [11ULL])) - (((/* implicit */int) var_12)))) : ((~(((/* implicit */int) var_14))))))));
        var_21 += ((/* implicit */short) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) 8103040459986368330LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)3968)))))));
        var_22 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
}
