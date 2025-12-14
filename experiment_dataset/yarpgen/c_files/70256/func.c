/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70256
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
    var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))) : (((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_3)))))));
    var_13 = ((/* implicit */int) (~(var_1)));
    var_14 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) var_9);
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_1 [(_Bool)1] [(_Bool)1]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)204)), (var_2))))) : (((long long int) var_1)))) + (4088LL))) - (53LL)))));
        var_17 |= ((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    var_18 |= ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) var_10)), (((short) 196608U)))))));
}
