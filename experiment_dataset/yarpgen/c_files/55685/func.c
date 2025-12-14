/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55685
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
    var_16 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((unsigned char) var_1));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_2)) ^ (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [9U] [i_0])) ? (arr_1 [(unsigned char)8] [i_0]) : (var_15))) : (((((/* implicit */int) var_7)) >> (((arr_0 [i_0] [i_0]) - (1093107614U))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) & (var_8)));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */short) (unsigned char)255);
        var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
    }
    var_21 = ((/* implicit */short) var_15);
}
