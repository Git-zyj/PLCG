/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99406
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)31643))))))) && (((/* implicit */_Bool) ((unsigned short) max((arr_1 [i_1]), (((/* implicit */unsigned short) (short)-31643))))))));
                var_11 |= ((/* implicit */signed char) 4569876823149285381ULL);
                var_12 = ((/* implicit */long long int) arr_1 [i_0 - 2]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) (+(min((((/* implicit */int) (signed char)-40)), ((+(((/* implicit */int) (unsigned char)253))))))));
    var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (max((((/* implicit */unsigned long long int) (unsigned char)16)), (var_9)))))));
    var_15 = ((/* implicit */long long int) (+((((~(((/* implicit */int) var_4)))) - (((/* implicit */int) var_6))))));
}
