/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77088
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
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_19 = arr_1 [i_0] [i_0];
        var_20 ^= ((/* implicit */_Bool) (+((-((-(arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 - 1]);
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (short)5965))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((48513447U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)5950))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) - ((~(var_1)))))))))));
}
