/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74090
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) 13961499179431117140ULL))));
    var_15 &= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)-28220)))) ? (((/* implicit */int) (short)-28220)) : (((/* implicit */int) ((((/* implicit */int) ((31U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188)))))) >= (((/* implicit */int) var_0))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))) : (((4485244894278434488ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28220)))))));
            }
        } 
    } 
}
