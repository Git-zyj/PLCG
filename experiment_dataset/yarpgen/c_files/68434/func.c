/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68434
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
    var_14 -= ((/* implicit */long long int) 1971901291U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0 + 3] [i_1]))))), (var_9)));
                var_16 = ((/* implicit */signed char) ((((min((((int) 3221225472U)), (((/* implicit */int) (signed char)(-127 - 1))))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((unsigned char) 6697810801178744241ULL))))))));
                var_17 -= ((/* implicit */unsigned short) (short)896);
                var_18 |= ((/* implicit */unsigned long long int) ((short) max((-4743688616157301435LL), (((/* implicit */long long int) 0U)))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_2);
}
