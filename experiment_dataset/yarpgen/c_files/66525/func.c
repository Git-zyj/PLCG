/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66525
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
    var_15 = ((/* implicit */short) var_12);
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (var_4)))) : (min((((/* implicit */unsigned long long int) (unsigned char)159)), (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66)))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)194)) << (((((/* implicit */int) var_7)) - (26175)))));
    var_18 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_1] [i_0 - 1]))))));
                var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_4 [1U])) && (((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) 1863177823U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) var_3)) : (11532710464047268328ULL))), (((/* implicit */unsigned long long int) max((2024793854186264846LL), (((/* implicit */long long int) (unsigned short)28522)))))))));
            }
        } 
    } 
}
