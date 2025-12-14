/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79717
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
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (var_4)))) ? (var_3) : ((~(var_6))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_2))))) ? ((+(var_4))) : (min((((/* implicit */int) (unsigned short)65533)), (var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_12);
        var_17 = ((/* implicit */unsigned int) (~(((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)1])))))));
    }
}
