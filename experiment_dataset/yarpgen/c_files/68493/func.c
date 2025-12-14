/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68493
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
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))))));
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */unsigned char) var_14)), ((unsigned char)15)))) <= (1514672334))) ? (((((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)15)))) + (((/* implicit */int) ((signed char) var_12))))) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_23 = var_0;
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_1 [i_1]))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((int) var_16))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_1] [i_1])))));
                var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)228)) ^ (((/* implicit */int) min((arr_2 [i_1] [i_0]), (((/* implicit */short) (unsigned char)0))))))) & (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-124)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))))));
            }
        } 
    } 
}
