/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66295
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
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-19173)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (signed char)14))))));
                var_12 -= ((/* implicit */unsigned char) arr_2 [i_0]);
                var_13 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                var_14 *= var_6;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_3)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_7))))));
    var_16 = var_4;
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (2125468321) : (((/* implicit */int) var_6)))) << (((var_2) - (6031423625003768921LL))))))));
}
