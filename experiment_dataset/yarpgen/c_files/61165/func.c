/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61165
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))) / (((arr_2 [(unsigned short)7]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))) >> (max((((/* implicit */int) arr_2 [i_1 + 1])), ((-(((/* implicit */int) var_0))))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_4))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((((/* implicit */long long int) var_18)), (var_9)));
    var_22 = ((/* implicit */_Bool) max((max((max((var_5), (var_4))), (((/* implicit */unsigned char) (_Bool)0)))), (((/* implicit */unsigned char) var_6))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_0))));
}
