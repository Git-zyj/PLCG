/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60194
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
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_7)))))) * (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 3657838966U)) ? (((/* implicit */long long int) 1377656024)) : (1593261219054153947LL))) : (((/* implicit */long long int) 637128329U))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_4))))))), (var_12))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0 + 1] = (-9223372036854775807LL - 1LL);
                    var_21 = ((/* implicit */signed char) min((5674244098898826933LL), (((/* implicit */long long int) ((int) arr_8 [i_0 - 1] [14U] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
}
