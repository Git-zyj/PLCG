/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56971
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [(signed char)2])) ? (arr_3 [2ULL]) : (arr_3 [12]))), (((/* implicit */unsigned int) ((arr_3 [(_Bool)1]) != (arr_3 [12])))))))));
                arr_5 [i_0] = ((/* implicit */int) (-((+(((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (arr_4 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_16)) ? (((int) ((int) (signed char)125))) : (((((/* implicit */_Bool) min((var_13), (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((((/* implicit */short) var_16)), ((short)32737)))) : (((/* implicit */int) var_9)))));
    var_22 = ((/* implicit */_Bool) var_12);
}
