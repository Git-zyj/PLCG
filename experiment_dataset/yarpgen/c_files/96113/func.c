/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96113
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
    var_10 += ((/* implicit */unsigned int) ((signed char) var_4));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) ((unsigned char) var_9));
        var_12 = ((/* implicit */unsigned int) ((unsigned short) (short)-30516));
        var_13 = ((/* implicit */int) (unsigned short)252);
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [11U] [i_0]))));
    }
    for (unsigned char i_1 = 4; i_1 < 12; i_1 += 2) 
    {
        arr_5 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) (-((-(((((/* implicit */int) (short)30516)) % (((/* implicit */int) (short)30516))))))));
        var_15 -= (~(((/* implicit */int) var_6)));
    }
}
