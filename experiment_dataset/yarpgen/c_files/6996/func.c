/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6996
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
    var_16 += ((/* implicit */unsigned short) var_12);
    var_17 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -508314174))) ? (((((/* implicit */unsigned long long int) arr_2 [i_0])) / (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))) ? ((-(arr_0 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_4))))))))));
        var_18 = ((/* implicit */int) var_13);
        var_19 = ((/* implicit */_Bool) (-(508314171)));
        var_20 += ((/* implicit */int) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_0 [(unsigned short)2]) : (((/* implicit */int) var_8))))) ? ((~(var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48221)) ? (((/* implicit */int) (unsigned short)50937)) : (((/* implicit */int) (signed char)-91)))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)91)))))))), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 11187950510577809290ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))))));
    }
    var_21 = ((/* implicit */unsigned short) (+(var_2)));
}
