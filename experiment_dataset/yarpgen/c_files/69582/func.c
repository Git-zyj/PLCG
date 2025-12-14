/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69582
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
    var_17 *= ((/* implicit */unsigned char) ((long long int) var_16));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-118)) : ((+(((/* implicit */int) (signed char)7))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) max(((unsigned char)114), (((/* implicit */unsigned char) arr_0 [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (!(var_13)));
}
