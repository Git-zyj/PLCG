/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80232
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
    var_17 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 *= min((((/* implicit */unsigned long long int) max((-774618602159637967LL), (((/* implicit */long long int) var_2))))), (max((arr_0 [i_1] [i_0 - 3]), (((/* implicit */unsigned long long int) 4038519152U)))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) var_16))))) ? ((~(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9510607410812792983ULL))))))));
                var_20 = ((/* implicit */long long int) ((unsigned long long int) max((arr_0 [i_0 - 2] [i_0 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(unsigned short)13] [(unsigned short)13] [(unsigned short)13])) / (var_16)))))));
                arr_5 [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((var_4) ? (var_6) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_15)))) : (((int) (-(15482946186151572856ULL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
}
