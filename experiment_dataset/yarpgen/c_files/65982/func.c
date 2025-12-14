/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65982
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_1), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (min((var_4), (((/* implicit */long long int) var_8)))))) - (((var_8) ? (((/* implicit */long long int) max((var_2), (((/* implicit */int) var_6))))) : (var_11))))))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) var_6)) & (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((min((var_0), (var_8))), (((3211280201913333907ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_7)))))) : (var_11))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((((/* implicit */int) var_0)), (var_2)));
    var_15 |= ((/* implicit */unsigned long long int) var_8);
}
