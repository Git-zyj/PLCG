/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74390
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
        arr_2 [(short)2] = (signed char)-21;
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 0LL)) | (7809673340124571090ULL)));
}
