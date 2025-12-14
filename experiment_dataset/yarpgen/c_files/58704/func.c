/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58704
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
    var_13 = ((/* implicit */unsigned int) max((var_5), (((((/* implicit */_Bool) -50973023)) ? ((~(4611686018427387902ULL))) : (((/* implicit */unsigned long long int) 4U))))));
    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-113))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 8897644725294982587LL)) ? (5041270817927008170ULL) : (4611686018427387902ULL))) : (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */long long int) var_6))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((5512413405829343321LL) == (arr_2 [i_0])))))));
        var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (-363750235) : (((/* implicit */int) (signed char)77))))));
        var_17 = ((((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (13405473255782543446ULL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) 8897644725294982587LL)) ? (2585643274U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))));
    }
}
