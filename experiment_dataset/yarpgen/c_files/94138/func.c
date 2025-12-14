/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94138
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
    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)1))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? ((+(4294967295U))) : (max(((+(4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 24U)) && (((/* implicit */_Bool) var_17)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) 4294967292U);
                var_22 &= min((((short) (+(arr_0 [i_0 - 1])))), (min((((/* implicit */short) ((25ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29217)))))), (max((var_3), (((/* implicit */short) (signed char)127)))))));
                var_23 = ((/* implicit */unsigned char) (~(arr_3 [i_0 - 2] [i_1 + 1])));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)102))));
    var_25 = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))), (var_12));
}
