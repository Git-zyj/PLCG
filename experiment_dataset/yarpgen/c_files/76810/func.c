/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76810
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
    var_20 = max((((/* implicit */int) var_15)), (min((((/* implicit */int) ((unsigned char) var_4))), (-2147483627))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((arr_7 [i_0] [i_1]) ? (max((var_19), (((/* implicit */int) (signed char)23)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-23)) && (((/* implicit */_Bool) var_6))))))) << (((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) arr_7 [i_1 + 1] [i_1 + 1])))))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((-1657230756390651972LL) - (((/* implicit */long long int) 3894057714U)))));
            }
        } 
    } 
}
