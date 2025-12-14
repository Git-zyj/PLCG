/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83814
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [(short)2]);
                arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), ((-(min((((/* implicit */unsigned int) var_5)), (arr_2 [10LL] [i_0] [(short)1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((720162619U) << ((((-(((/* implicit */int) ((short) var_10))))) - (25557)))));
    var_20 = var_2;
    var_21 = ((/* implicit */long long int) var_1);
    var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_17)), (-5502825204088979550LL)))))) + (min((((/* implicit */unsigned int) var_1)), (max((((/* implicit */unsigned int) var_9)), (var_17))))));
}
