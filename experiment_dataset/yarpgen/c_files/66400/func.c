/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66400
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [(short)15] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 155978709U))))) : (((/* implicit */int) ((unsigned short) 4138988593U)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3127751789U)) ? (1167215507U) : (4138988588U)));
    }
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (~(var_3)))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)62508)) : (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) max((((unsigned int) (signed char)-23)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))))))));
}
