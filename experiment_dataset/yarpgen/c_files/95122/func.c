/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95122
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)203)) ? (2158920321U) : (2136046975U)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_1 [i_0]))));
        var_20 = ((/* implicit */unsigned short) arr_1 [i_0 - 2]);
        var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) ((2136046992U) != (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) / (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) var_14))))))) | (((arr_1 [i_0 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)71)))))));
        var_22 = ((/* implicit */unsigned short) (_Bool)0);
    }
    var_23 = (~(((var_5) ^ (((((/* implicit */_Bool) (short)-24793)) ? (-780858873) : (-2123375425))))));
}
