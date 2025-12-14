/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95355
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) (short)12288);
        var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [(unsigned char)9])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_6))))));
        arr_3 [(unsigned short)10] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_15 *= ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) (unsigned short)13099)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-12305))));
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
    }
    var_18 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)))) ? (max((3903676502945673047ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
}
