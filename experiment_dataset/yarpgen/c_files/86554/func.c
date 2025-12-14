/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86554
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */signed char) min(((_Bool)1), (var_0)))), (min((var_7), (((/* implicit */signed char) var_1))))))), (max((arr_0 [i_0] [i_0]), (((/* implicit */int) var_14))))));
                arr_7 [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2731))))), (min((max((((/* implicit */int) var_11)), (arr_0 [i_0] [i_1 + 1]))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */int) (unsigned short)2731)) % (((/* implicit */int) var_10)))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_11))))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_17))))))));
    var_20 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) var_12)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_17)))) - (min((((((/* implicit */int) var_12)) + (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_7))))))));
}
