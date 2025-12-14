/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85291
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
    for (signed char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) var_4);
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3334)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 3]))))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 3])))) : (((((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-18)), (898090635U)))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (var_3)))))));
    }
    var_13 |= ((/* implicit */signed char) ((var_5) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)46583)))) : (((/* implicit */int) var_8))))));
    var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) 7113877164955181548LL)) : (var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))), (var_4)));
}
