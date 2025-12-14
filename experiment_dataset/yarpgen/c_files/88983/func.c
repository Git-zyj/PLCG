/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88983
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48557)) - (var_3)))) / (min((arr_4 [i_0 + 1]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))));
                    var_20 *= ((/* implicit */signed char) ((int) min((((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)3])), (((((/* implicit */_Bool) -1540445567)) ? (3764179608446577291ULL) : (((/* implicit */unsigned long long int) -1366037226)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) (signed char)-1));
    var_22 = ((/* implicit */short) (+((+(((/* implicit */int) var_12))))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) ((short) -1366037226))))) : (((/* implicit */int) ((-1663235954) < (max((-1366037206), (((/* implicit */int) (unsigned short)33013)))))))));
}
