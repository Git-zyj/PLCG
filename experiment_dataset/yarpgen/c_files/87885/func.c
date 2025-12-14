/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87885
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) arr_0 [i_0] [4]);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1623240183)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) : (19ULL)));
        var_14 = ((unsigned char) var_2);
    }
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (min((var_8), (((/* implicit */unsigned long long int) (signed char)-119)))) : (((/* implicit */unsigned long long int) min((-51173020), (((/* implicit */int) var_5)))))))));
}
