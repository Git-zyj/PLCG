/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78914
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
    var_11 = ((/* implicit */long long int) var_6);
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41757))) - (var_2)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_0 [i_0])), ((+(((/* implicit */int) arr_2 [i_0]))))))));
        var_14 = ((/* implicit */_Bool) (unsigned short)23778);
        var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (var_9)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((var_0) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-9360)))) : (((/* implicit */int) min(((short)-21), (((/* implicit */short) arr_0 [i_0])))))))));
    }
}
