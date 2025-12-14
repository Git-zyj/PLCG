/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58460
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) arr_1 [(unsigned short)5]);
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (short)1))))) % (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned char) arr_1 [6ULL]);
        var_20 ^= ((/* implicit */unsigned long long int) arr_1 [(unsigned char)19]);
    }
    var_21 -= ((/* implicit */short) ((((/* implicit */int) var_15)) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)18)) : (((/* implicit */int) max((var_8), (((/* implicit */short) var_15)))))))));
    var_22 &= min((var_8), (((/* implicit */short) var_15)));
}
