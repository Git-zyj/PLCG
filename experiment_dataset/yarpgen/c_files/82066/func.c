/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82066
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_11 -= arr_0 [i_0 + 1];
        var_12 *= ((unsigned int) ((((((/* implicit */_Bool) 2146435072U)) ? (arr_2 [i_0]) : (var_6))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 790320218U))))))));
    }
    var_13 = ((((/* implicit */_Bool) max(((+(var_9))), (((733103868U) - (3134933536U)))))) ? (((((/* implicit */_Bool) ((unsigned int) 11U))) ? ((~(var_7))) : (((var_0) >> (((var_8) - (3398311012U))))))) : ((+(min((1951021726U), (2451884537U))))));
}
