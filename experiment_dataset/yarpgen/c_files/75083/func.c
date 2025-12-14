/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75083
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((var_10) < (((/* implicit */int) var_7)))))))) ? (144229749) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_1 + 2] [i_1 + 1] [i_0 + 1]) + (arr_3 [i_1 + 1] [i_1 + 2] [i_0 - 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) var_2)))))));
                arr_6 [(short)0] [i_0 - 3] [(short)0] |= ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) ((_Bool) (short)-29127))))));
                var_13 *= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_4 [i_0] [8U]))))), (arr_1 [i_0] [i_0]))) & (((/* implicit */unsigned int) max(((-(999148361))), (((/* implicit */int) (signed char)-65)))))));
            }
        } 
    } 
}
