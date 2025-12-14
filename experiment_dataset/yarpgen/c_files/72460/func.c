/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72460
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
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) var_19)))), ((!(((/* implicit */_Bool) var_13))))));
        arr_3 [i_0] = ((/* implicit */short) (~(1430125189)));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((arr_5 [i_1]) ? (1165811174U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))) ? (max((((/* implicit */long long int) (_Bool)1)), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) var_12);
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        var_22 ^= ((/* implicit */unsigned int) var_16);
    }
    var_23 = var_3;
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */int) ((_Bool) var_11));
        var_25 ^= ((/* implicit */unsigned char) var_9);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((arr_5 [i_3]) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_5 [i_3]))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) ((_Bool) var_17))) : (var_3)));
    }
}
