/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76181
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
    var_16 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) (short)23554)))))) == (((((/* implicit */_Bool) (short)23566)) ? (981956669254060049ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172)))))));
        arr_2 [0] = ((/* implicit */int) max((11404794240794494789ULL), (((17057742404806113361ULL) | (min((8251526748538136417ULL), (((/* implicit */unsigned long long int) var_9))))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (short)12219);
    }
    var_18 = ((/* implicit */unsigned int) var_2);
}
