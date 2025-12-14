/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87681
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) <= (((/* implicit */int) arr_3 [i_0] [(_Bool)0])))))) : (18446744073709551615ULL));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_0] [(unsigned short)3]))) ? (((((/* implicit */int) (unsigned short)64389)) >> (((1691755291) - (1691755285))))) : (((((/* implicit */int) arr_3 [i_0] [i_0])) >> (((arr_1 [i_0]) - (6105619610979341820ULL)))))))) : ((+((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))));
    }
    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) (unsigned char)141))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)250)))))) : (((/* implicit */int) var_13))));
}
