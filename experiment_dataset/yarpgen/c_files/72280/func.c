/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72280
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_3);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) arr_2 [i_0 - 1]))))) ? (-744406522) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_0 [i_0 - 1]) & (arr_0 [i_0 + 1])))) <= (((((((/* implicit */long long int) 2099798367U)) % (var_12))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [11ULL])))))));
        var_21 = (~((-(((((/* implicit */_Bool) 2195168906U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (2195168934U))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_7 [(unsigned char)16]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)4]))) : (max((((/* implicit */unsigned long long int) var_19)), (var_14)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((arr_7 [i_1]) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))))));
        var_23 = ((((/* implicit */_Bool) ((arr_7 [i_1]) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))))) ? (((((((/* implicit */_Bool) 4294967277U)) && (((/* implicit */_Bool) -6064159864631085270LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))) : (arr_8 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_1])))));
    }
    var_24 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) 4294967294U)) : (var_1)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))));
    var_25 = ((/* implicit */unsigned short) var_14);
    var_26 = ((/* implicit */unsigned short) var_18);
}
