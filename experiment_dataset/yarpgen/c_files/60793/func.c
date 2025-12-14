/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60793
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
    var_12 -= ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) (short)32765)) ? (var_6) : (2121260443U)))))));
    var_13 = ((/* implicit */unsigned int) (short)-32765);
    var_14 -= ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (((-(((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_4)) - (31358))))))) * (((/* implicit */int) var_4))));
                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) (short)-32752)) ? ((-(arr_4 [i_0]))) : (((/* implicit */unsigned int) arr_3 [(short)14] [i_1 - 1] [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (short)-32746)) ^ (-1937091609))) : (((((/* implicit */_Bool) 1506158721)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
                var_16 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((signed char) 1759488973))), (min((var_6), (2350732743U))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0] [(_Bool)1]))) << (((25U) - (13U))))))));
                arr_6 [i_1] = ((/* implicit */short) (+((~(((/* implicit */int) ((arr_3 [i_1] [i_1] [i_0]) != (((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
}
