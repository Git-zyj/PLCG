/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88817
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) << (((var_0) + (127094432))))) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_10)))))) || (((((((/* implicit */_Bool) var_5)) ? (var_12) : (var_4))) >= (((var_1) - (((/* implicit */long long int) var_0)))))));
        arr_4 [(short)4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_14)) & (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_6)) % (((/* implicit */int) var_14))))))) != (((unsigned int) ((long long int) var_5)))));
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) var_9)) ? (var_12) : (var_9))) : (((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) var_2)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_14)))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) * (max((((/* implicit */unsigned int) var_5)), (var_13)))))));
}
