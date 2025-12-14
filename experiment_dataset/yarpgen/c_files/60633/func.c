/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60633
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((((/* implicit */int) var_14)) + (((/* implicit */int) (signed char)16))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (var_13))))) : (var_2))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), ((-((-(arr_1 [i_0] [i_0 + 1])))))));
        var_16 = ((/* implicit */signed char) min(((((+(arr_1 [i_0] [i_0]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) var_11))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)18), (((/* implicit */unsigned char) var_6))))) ? (((/* implicit */int) (signed char)-125)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_9))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)151))))) ? ((-(5U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46)))));
        var_18 = ((/* implicit */unsigned short) (-(((arr_1 [(signed char)3] [i_0]) / (arr_1 [i_0] [i_0])))));
    }
    var_19 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))) ? ((~(1U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-124)) : (827782661))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2298)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
    var_20 &= ((/* implicit */int) (+(534165166U)));
}
