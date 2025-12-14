/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72318
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
    var_14 = ((/* implicit */unsigned int) ((var_8) == (((/* implicit */long long int) ((var_13) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_2)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((signed char) var_7));
        arr_3 [i_0] = ((int) ((unsigned int) ((var_8) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) ((_Bool) var_2));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967291U)) ? (-2115844650715373694LL) : (((/* implicit */long long int) ((var_9) ? (421863653) : (1778247195))))));
        var_17 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15337)) >> (((arr_4 [i_1] [i_1]) + (6750090785331428829LL)))));
        arr_7 [i_1] = ((((/* implicit */_Bool) -667313681)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_3)));
        arr_8 [i_1] = ((/* implicit */unsigned short) (~(arr_4 [(unsigned short)19] [(unsigned short)19])));
    }
}
