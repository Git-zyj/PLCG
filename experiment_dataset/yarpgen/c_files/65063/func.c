/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65063
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_2)))));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (var_7))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)2)) >= (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_12)))) || (((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [14LL])))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned short) ((4271410220U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    var_21 = ((/* implicit */int) var_4);
    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))));
}
