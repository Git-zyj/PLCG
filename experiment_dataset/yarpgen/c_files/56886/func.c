/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56886
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
    var_11 = ((/* implicit */unsigned char) min(((unsigned short)49509), (((/* implicit */unsigned short) (short)(-32767 - 1)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (short)-27761);
        arr_3 [i_0] [i_0] = ((/* implicit */short) (unsigned char)127);
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (unsigned char)127))));
    }
    var_13 = ((/* implicit */unsigned short) (short)(-32767 - 1));
}
