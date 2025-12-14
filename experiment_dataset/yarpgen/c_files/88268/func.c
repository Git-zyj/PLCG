/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88268
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
    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned char)206))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) != (((/* implicit */int) arr_0 [i_0 + 2] [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 2]))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_20 += (short)32767;
            var_21 = ((/* implicit */short) (~(arr_1 [i_0 + 2] [i_1 + 1])));
        }
    }
    var_22 = ((/* implicit */unsigned int) min(((((~(((/* implicit */int) (unsigned short)29307)))) % (((var_12) ? (((/* implicit */int) (signed char)30)) : (var_15))))), (((((/* implicit */_Bool) (~(759606048)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)30)))) : (max((-759606048), (((/* implicit */int) var_1))))))));
}
