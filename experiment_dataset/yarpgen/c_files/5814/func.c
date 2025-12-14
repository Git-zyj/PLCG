/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5814
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (min((var_11), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_2))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) max((var_3), (var_17)))))) : ((-(((/* implicit */int) (signed char)69))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((signed char) arr_2 [i_0]));
        var_20 ^= ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_21 ^= ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    var_22 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_3)) - (20843)))))))) << (min((min((var_18), (((/* implicit */int) var_6)))), (((int) var_8))))));
}
