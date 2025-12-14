/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71480
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
    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 5386810124879879538ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64151))) : (var_0))) : (((/* implicit */unsigned long long int) ((unsigned int) (short)24576))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2487899486U)) ? (((/* implicit */int) (unsigned short)62287)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62053)) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3497)) || (((/* implicit */_Bool) var_5)))))));
                var_22 ^= ((/* implicit */signed char) arr_2 [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_12))));
}
