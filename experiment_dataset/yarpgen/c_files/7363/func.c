/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7363
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
    var_13 = ((/* implicit */signed char) -1LL);
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)11))) : (max((524287LL), (((/* implicit */long long int) 716197000U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63885))) : (1202521871U));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) arr_2 [13LL] [i_1]);
                arr_6 [i_1] = ((/* implicit */unsigned short) (signed char)-12);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_6);
}
