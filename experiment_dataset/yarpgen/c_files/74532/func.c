/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74532
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((long long int) var_7)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_3 [i_0])))))))));
                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (short)7140)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))) : (max((((/* implicit */long long int) var_15)), (var_0)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) | (arr_0 [i_0])))));
                arr_4 [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_1 [i_0])))) | (((arr_2 [i_0] [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_13))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((max((((/* implicit */long long int) var_11)), (var_0))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))))))));
        arr_9 [i_2] [i_2] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_7 [(unsigned char)19] [i_2])))));
    }
}
