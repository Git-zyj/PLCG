/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5530
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_16), ((_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)224)) : (-1258510399)))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) max((2308097621U), (((/* implicit */unsigned int) var_5))))) ? (-1) : ((-(var_17)))))));
    var_21 = ((/* implicit */int) ((((unsigned int) var_3)) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) && (((/* implicit */_Bool) var_14))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_6) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0])))))), ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (4214480662U) : (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) max((var_18), (var_15))))))));
        arr_2 [i_0] [i_0] = min((((arr_0 [i_0]) * (min((((/* implicit */int) (_Bool)1)), (4821572))))), ((-(var_2))));
    }
}
