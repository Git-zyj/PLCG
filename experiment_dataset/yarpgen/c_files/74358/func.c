/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74358
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (((long long int) -1709783171))))) ? ((~(((((/* implicit */_Bool) (unsigned short)254)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))) : (var_13))))) : (max((var_0), (((/* implicit */long long int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (arr_1 [i_0]))))) || (((/* implicit */_Bool) ((short) var_12)))));
    }
    var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) * (var_7)))))) ? (var_0) : (min((((((/* implicit */_Bool) var_1)) ? (var_13) : (var_9))), (max((var_11), (((/* implicit */long long int) var_1))))))));
}
