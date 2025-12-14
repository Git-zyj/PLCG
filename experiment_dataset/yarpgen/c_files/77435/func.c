/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77435
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_1))))) ? (max((var_5), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))))));
                    var_12 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (max((((/* implicit */unsigned long long int) var_8)), (var_5)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_2);
    var_14 &= ((/* implicit */int) max((var_5), (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)))))));
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_6))))), (((/* implicit */unsigned long long int) ((var_0) ? (max((8589934591LL), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))))));
    var_16 = ((/* implicit */int) ((_Bool) var_2));
}
