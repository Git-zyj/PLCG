/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86537
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
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned short) 248206403)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) (unsigned short)59362)))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((_Bool) var_15)) ? (max((0ULL), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_1] [(signed char)0]) > (((/* implicit */int) (unsigned char)219)))))))))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_4 [i_1]))));
            }
        } 
    } 
}
