/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88042
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (signed char)51))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+(arr_0 [i_0 + 3])));
        var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_9), (((/* implicit */short) (unsigned char)69))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 4])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_1 - 4])))));
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1]);
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)98)))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
