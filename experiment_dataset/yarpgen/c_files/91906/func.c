/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91906
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
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_18))));
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) 4268385619830946354LL)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 11433277028834054695ULL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_1 [i_0 - 4])))))) : ((+(((((/* implicit */_Bool) (short)-5909)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_8))));
}
