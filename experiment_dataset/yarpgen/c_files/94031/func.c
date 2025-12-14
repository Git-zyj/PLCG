/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94031
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_1] [i_1 + 3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) var_9))))) ? (min((var_0), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-74)))))));
                var_17 = ((/* implicit */signed char) ((arr_1 [i_0]) | ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)15] [i_1])))))) : (arr_1 [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (var_5)))), ((~(var_15)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))));
    var_19 = ((/* implicit */signed char) var_3);
}
