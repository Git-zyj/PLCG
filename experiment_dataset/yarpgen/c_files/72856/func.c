/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72856
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */int) var_4)) - ((+(((/* implicit */int) var_5)))))))));
    var_13 *= (!(((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (var_1)))) >= (((/* implicit */int) ((((/* implicit */unsigned int) var_11)) > (var_3)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_0 [(unsigned char)13] [19U])))))))) || (((/* implicit */_Bool) var_4))));
        arr_2 [i_0] [11U] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (short)0)), (max((var_3), (((/* implicit */unsigned int) var_1)))))), (arr_0 [i_0] [i_0])));
        var_15 *= ((/* implicit */short) ((int) var_7));
        var_16 ^= ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) var_5)))));
    }
    var_17 = ((/* implicit */unsigned long long int) (+(-630233127)));
}
