/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82024
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
    var_14 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)74)), (var_10)))), (((var_7) ^ (((/* implicit */long long int) 4294967295U))))));
    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-113)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (434760405U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)2] [i_0]))) + (3497165744U))) + (((((/* implicit */_Bool) (unsigned short)18241)) ? (((/* implicit */unsigned int) var_11)) : (797801558U)))))) ? (var_3) : (((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */short) (unsigned char)94)), (arr_3 [i_0] [i_1 - 2])))), (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_6)))))))));
                var_16 += ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (min((((/* implicit */unsigned int) (short)-24675)), (734387524U))));
            }
        } 
    } 
}
