/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54958
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
    var_10 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) var_7))), ((+((-(((/* implicit */int) arr_2 [i_0] [(unsigned short)4]))))))));
    }
}
