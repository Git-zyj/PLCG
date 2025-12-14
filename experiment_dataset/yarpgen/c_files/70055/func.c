/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70055
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
    var_19 = ((/* implicit */long long int) var_13);
    var_20 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (min((var_7), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_1 [i_0]))));
        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) arr_1 [(signed char)11])) ? (((/* implicit */int) (signed char)3)) : (-985316955))) : (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_18))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [(_Bool)1])), (18446744073709551615ULL)))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) arr_1 [i_0]))))))));
    }
}
