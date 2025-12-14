/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61933
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
    var_15 = ((((/* implicit */int) var_9)) < (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), ((short)-2775)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) 18446744073709551615ULL);
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
        var_17 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) 7256421284313336335LL);
        var_18 = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)119)) ? (var_2) : (((/* implicit */long long int) -390361131))))));
    }
}
