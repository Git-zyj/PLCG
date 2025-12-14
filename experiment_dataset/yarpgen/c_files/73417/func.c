/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73417
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (short)-8872);
        var_13 = ((/* implicit */signed char) 2444983060U);
        arr_5 [i_0] = ((/* implicit */short) (+((~(-2088671987)))));
    }
    for (short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
        var_14 += ((/* implicit */unsigned int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)124)))))))));
        arr_10 [(_Bool)1] |= ((/* implicit */unsigned short) (signed char)127);
    }
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) 1490783135)))))));
    var_16 = ((/* implicit */unsigned long long int) (short)32767);
}
