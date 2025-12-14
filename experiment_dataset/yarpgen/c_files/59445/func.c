/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59445
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))), (var_14)))) ? ((-(max((((/* implicit */unsigned int) var_4)), (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
    var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((unsigned int) 3399439273U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 ^= min((max((var_11), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_1)))) ? (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) ((unsigned char) var_7)))))));
                arr_4 [10ULL] |= ((/* implicit */signed char) ((unsigned char) var_10));
                var_18 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 255U)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (signed char)7)))))));
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_8)))));
            }
        } 
    } 
}
