/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88096
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
    var_19 = ((/* implicit */unsigned char) var_6);
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) max((max((((/* implicit */unsigned short) var_16)), (var_15))), (((/* implicit */unsigned short) var_11)))))));
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_7))))));
    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_15))))))), ((~((~(var_14)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_23 += ((/* implicit */long long int) var_17);
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ^ (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_1)))))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_0]))));
    }
}
