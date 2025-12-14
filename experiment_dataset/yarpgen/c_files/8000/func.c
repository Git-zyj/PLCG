/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8000
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((((unsigned long long int) (short)2885)), (((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (2438370036U) : (4294967285U)))))));
                var_18 += ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_0 - 1] [(unsigned char)18] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2] [i_0 - 1]))) : (4294967285U))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_0 [(unsigned short)6])), (((short) arr_4 [i_0])))))));
                var_19 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_15);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 11U))))))) != (((/* implicit */int) var_15)))))));
}
