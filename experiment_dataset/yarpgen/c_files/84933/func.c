/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84933
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) var_15)) ? (var_16) : (arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))), (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0]))) : (5783478775106391615ULL))), (max((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) -903833491)))))));
        var_18 = (~(max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [6ULL] [i_0]))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))));
        arr_3 [4U] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2216017249U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_7)))) ? (max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_1 [7LL])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (12663265298603159979ULL))))), ((-(((((/* implicit */_Bool) var_5)) ? (12663265298603159985ULL) : (var_16)))))));
        arr_4 [i_0] = min((((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (unsigned short)0)), (8U)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [14U] [(_Bool)1])), (var_1)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(min((((/* implicit */long long int) 1031557848U)), (2270787799883975909LL))))))));
        var_19 *= ((/* implicit */unsigned int) min(((((!((_Bool)0))) ? ((~(((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65524)) : ((~(((/* implicit */int) (unsigned short)63))))))));
    }
    var_20 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (7004697882250347690ULL)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
}
