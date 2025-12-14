/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58474
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_10 = (!(((/* implicit */_Bool) arr_0 [(signed char)9] [i_0 - 1])));
        arr_2 [i_0 + 1] [(unsigned char)8] = ((/* implicit */signed char) ((unsigned char) (unsigned char)114));
        var_11 = arr_1 [6ULL];
        var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    }
    var_13 = ((/* implicit */unsigned int) ((((long long int) 1989440988U)) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 284494041U)) ? (((284494041U) % (284494041U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
}
