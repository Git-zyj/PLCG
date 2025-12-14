/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9762
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50031))) != (((((/* implicit */_Bool) (+(arr_5 [i_0])))) ? (((((/* implicit */_Bool) var_9)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2752474899U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) && (((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_8)))))))) >> (((((/* implicit */int) arr_1 [3])) + (113)))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((((((/* implicit */_Bool) max((arr_3 [(unsigned short)6]), (((/* implicit */unsigned char) var_4))))) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) >= (0ULL))))))) % (max((arr_2 [i_0 - 3]), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * ((-2147483647 - 1)))))))))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */long long int) var_2);
    var_17 = ((/* implicit */unsigned int) var_10);
}
