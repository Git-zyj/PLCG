/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95209
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max((((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1))))), (var_9))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */short) (signed char)18)), ((short)29196))))));
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)55)) ? (((((/* implicit */_Bool) (short)-1917)) ? ((~(((/* implicit */int) (signed char)-32)))) : (((/* implicit */int) arr_0 [i_0] [i_1])))) : (((/* implicit */int) arr_3 [i_0])));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) arr_0 [i_1] [i_1])))) : (((/* implicit */int) min((arr_0 [i_1] [i_1]), (var_8)))))))));
                var_16 -= ((/* implicit */int) (signed char)55);
            }
        } 
    } 
}
