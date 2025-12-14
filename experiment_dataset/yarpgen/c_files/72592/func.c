/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72592
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_7))));
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((unsigned short)65535), (var_0)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_15)))))) + (min((((/* implicit */int) (short)0)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_22 = (!(((/* implicit */_Bool) min(((-(((/* implicit */int) arr_3 [i_0] [i_0 + 2])))), (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2]))))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_13))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) << (((arr_2 [i_0]) - (722283108U)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))) : (arr_0 [i_0 + 3]))))))));
    }
    var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
}
