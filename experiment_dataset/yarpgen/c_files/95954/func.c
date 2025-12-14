/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95954
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
    var_14 = ((/* implicit */_Bool) max(((~(((((/* implicit */int) var_13)) << (((((/* implicit */int) var_7)) + (9))))))), (var_9)));
    var_15 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (var_7)));
                var_16 += ((/* implicit */unsigned int) max((((((/* implicit */int) ((((/* implicit */int) var_10)) <= (var_11)))) - (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)158)) % (((/* implicit */int) (unsigned char)252))))) ? (max((arr_1 [i_1] [i_0]), (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) (short)-9726)) >= (1685706891))))))));
            }
        } 
    } 
}
