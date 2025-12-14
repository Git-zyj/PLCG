/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99281
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
    var_12 = ((/* implicit */unsigned short) ((_Bool) ((unsigned int) ((((/* implicit */_Bool) -1792051961)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2)))));
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned char)51))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 6197969821581413313ULL)) ? (var_4) : (((/* implicit */unsigned int) 283933708)))) : (((/* implicit */unsigned int) arr_2 [i_0]))));
        var_15 |= ((/* implicit */_Bool) ((int) ((unsigned int) 12248774252128138302ULL)));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_16 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)57265))));
        var_17 = ((/* implicit */int) arr_5 [i_1]);
    }
}
