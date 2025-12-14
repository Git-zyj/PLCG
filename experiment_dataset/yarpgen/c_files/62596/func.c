/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62596
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
    var_15 = ((/* implicit */unsigned char) var_8);
    var_16 = var_6;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((arr_4 [i_0] [i_1] [i_1]) <= (((/* implicit */long long int) 268434944U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))) : (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))) : (18446744073709551614ULL)))));
                var_17 = ((/* implicit */signed char) ((short) arr_0 [i_0] [i_1]));
            }
        } 
    } 
}
