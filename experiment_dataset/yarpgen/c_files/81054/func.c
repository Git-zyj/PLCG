/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81054
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] = (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) min((2248817314U), (((/* implicit */unsigned int) var_5))))) && (((/* implicit */_Bool) ((unsigned char) (signed char)-11))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_2 [(signed char)6] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) || (((/* implicit */_Bool) var_10)))))))));
    }
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9))))))));
}
