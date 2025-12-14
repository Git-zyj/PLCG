/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68047
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (max((((/* implicit */unsigned int) var_0)), (var_3))) : (((/* implicit */unsigned int) ((var_13) & (((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned long long int) -5261969598118916473LL)) : (((((/* implicit */_Bool) var_9)) ? (15704201723295981092ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (max((min((var_11), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6381490104731753069LL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((max((var_5), (min((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (var_1))))), (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))));
                var_17 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_12);
}
