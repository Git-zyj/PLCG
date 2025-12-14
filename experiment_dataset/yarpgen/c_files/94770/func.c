/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94770
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
    var_13 = ((/* implicit */short) ((int) min((var_7), (var_1))));
    var_14 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 *= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_16 = arr_0 [(unsigned char)3] [(unsigned char)3];
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)251))));
        var_19 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)251));
    }
}
