/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90692
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (signed char)104))))));
        arr_4 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    }
    var_11 = ((/* implicit */short) var_9);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((0U) / (174489880U)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((_Bool) var_0)))))));
}
