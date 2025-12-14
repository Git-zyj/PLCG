/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71781
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_3)) : ((+(var_1)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_0 [6LL])) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_9))))) ? (((/* implicit */long long int) ((unsigned int) ((unsigned char) var_11)))) : (arr_1 [i_0])));
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) (+(arr_0 [i_0]))))));
    }
}
