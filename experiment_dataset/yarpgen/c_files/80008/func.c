/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80008
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
    var_18 = ((/* implicit */_Bool) (signed char)16);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7699687738757228801LL)))))));
        var_20 |= ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) ((10LL) ^ (-7699687738757228801LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((-((-(((/* implicit */int) (unsigned char)249)))))) - (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) ((unsigned short) (unsigned char)127)))))));
    }
}
