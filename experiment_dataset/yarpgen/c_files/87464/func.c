/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87464
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
    var_12 |= ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_2))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (14931469295927169555ULL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((arr_1 [i_0]) << (((arr_0 [i_0] [i_0]) - (4778741939025502588ULL))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))))) : (min((((/* implicit */unsigned long long int) (signed char)44)), (3515274777782382061ULL)))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)44)) ^ (((-1092186201) / (((/* implicit */int) (unsigned short)49975))))))) ? ((-(arr_1 [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (14931469295927169555ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
        var_14 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)50)), (arr_1 [i_0])));
        var_15 = ((/* implicit */signed char) ((unsigned long long int) (~(127U))));
    }
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)58)))) ? (7155409774832581309ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 4294967169U))))))))))));
}
