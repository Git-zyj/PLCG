/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59629
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = max((((/* implicit */long long int) arr_3 [i_0])), (70368744177663LL));
                var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 - 1] [i_1])) ? (arr_2 [i_0 + 1] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                var_18 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [(signed char)24])) : (((/* implicit */int) arr_3 [(unsigned char)8]))))), (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) * (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_2)) * (var_6)))) ? (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))));
}
