/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95187
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 *= (~(max((((/* implicit */long long int) ((arr_4 [i_0] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (-7551252475981752006LL))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (max((var_1), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) > (321147009)))))) : (arr_1 [i_1])));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (321147009)))) ? (((/* implicit */int) var_6)) : (var_0)))), (min((max((var_8), (((/* implicit */long long int) var_9)))), (var_5))))))));
}
