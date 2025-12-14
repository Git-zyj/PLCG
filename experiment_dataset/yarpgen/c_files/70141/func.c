/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70141
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)117)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_1) : (9223372036854775807LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))) >= (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
                    arr_8 [i_1] [i_1] [i_0 - 2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)117)))), (((/* implicit */unsigned long long int) ((long long int) var_9))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_4))));
    var_21 = ((/* implicit */int) var_5);
}
