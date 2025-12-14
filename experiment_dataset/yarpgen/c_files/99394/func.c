/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99394
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((-(var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_0)))))))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_9)) + (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) 38241050U)) : (0LL)))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_14 = ((/* implicit */long long int) min((((((/* implicit */int) arr_4 [i_1])) >> (((((/* implicit */int) (signed char)-118)) + (149))))), (((((/* implicit */_Bool) (unsigned short)26782)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_2))))));
        var_15 ^= ((/* implicit */unsigned int) arr_4 [i_1]);
    }
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_3)), (var_7)));
    var_17 -= ((/* implicit */unsigned short) min((min((((0LL) & (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((var_7) / (((/* implicit */long long int) -906808129)))))), (((/* implicit */long long int) var_10))));
    var_18 = ((/* implicit */long long int) (+(var_8)));
}
