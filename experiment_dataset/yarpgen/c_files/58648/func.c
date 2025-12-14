/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58648
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2))), (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)37852)) : (((/* implicit */int) (unsigned short)39319))))) ? (((/* implicit */unsigned int) ((int) var_1))) : (1048575U)))) : (var_18))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)26061)) ? (((/* implicit */long long int) var_16)) : ((-(3117923313569900552LL)))))));
                var_22 = max((-2057321484), (((/* implicit */int) arr_0 [i_0])));
            }
        } 
    } 
}
