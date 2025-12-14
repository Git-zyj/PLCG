/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89612
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_17))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))))) : (((/* implicit */int) ((signed char) (short)7225))))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (short)-7211))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_6)) : (var_1))), (((/* implicit */unsigned long long int) var_13))))) ? (((((/* implicit */_Bool) (short)-30150)) ? (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7210)))))) : ((~(((/* implicit */int) var_10)))))) : ((((-(((/* implicit */int) var_3)))) - (((((/* implicit */int) var_10)) | (((/* implicit */int) var_11))))))));
}
