/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65123
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 1770670970U))));
        var_20 = (-(((int) var_11)));
    }
    var_21 = ((/* implicit */unsigned short) -1067279799);
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_5))));
    var_23 = (+(-1067279799));
}
