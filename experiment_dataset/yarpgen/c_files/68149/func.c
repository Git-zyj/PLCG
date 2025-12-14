/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68149
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
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_8))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (min((var_11), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (var_5)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)-29353))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0 + 1]);
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) max((((arr_2 [i_0 + 2] [i_0 + 2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 3])))), (((/* implicit */int) arr_0 [i_0 + 2]))));
    }
}
