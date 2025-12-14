/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95801
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (signed char)0))));
        var_16 = ((/* implicit */_Bool) var_0);
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_13))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_13) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_9))))));
        var_19 = ((/* implicit */signed char) ((unsigned int) var_4));
    }
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)-1))))))));
    var_21 -= ((/* implicit */unsigned long long int) var_14);
    var_22 -= ((/* implicit */int) var_4);
}
