/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8156
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0])) && (((((/* implicit */int) (unsigned char)7)) <= (((/* implicit */int) (unsigned char)211)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (_Bool)1)))) : (var_14))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_0 [i_1]))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) var_14));
        }
    }
    var_17 = ((/* implicit */short) -1908635786);
}
