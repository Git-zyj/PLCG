/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81123
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)23))))))) ? (((((/* implicit */_Bool) min((var_6), (((/* implicit */short) (unsigned char)28))))) ? (((/* implicit */unsigned int) var_11)) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) ^ (1073621598U))))) : (((/* implicit */unsigned int) (+(max((((/* implicit */int) (unsigned char)8)), ((-2147483647 - 1)))))))));
    var_21 = ((max((2147483647), (((/* implicit */int) var_7)))) & (((/* implicit */int) var_8)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (var_19))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) (unsigned char)8))))) ? (max((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_1 [i_0])))))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    var_23 ^= ((/* implicit */unsigned char) max((((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (4867467087939909387LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_19)) - (14520))))), (((((((/* implicit */_Bool) var_0)) ? (4867467087939909408LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))))) / (var_2)))));
}
