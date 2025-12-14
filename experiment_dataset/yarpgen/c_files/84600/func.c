/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84600
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1246159717U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22019))) : (3205778890468305642LL)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [(signed char)7] = ((/* implicit */signed char) ((unsigned char) max((var_2), (((/* implicit */unsigned int) ((var_15) && (((/* implicit */_Bool) var_2))))))));
        arr_4 [i_0] [i_0] |= ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (1152921504606846975ULL)));
    }
}
