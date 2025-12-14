/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73921
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
    var_13 = max((((((/* implicit */_Bool) (((_Bool)1) ? (-2156794284679057089LL) : (((/* implicit */long long int) 2478165026U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9))), (((/* implicit */unsigned int) var_8)));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
    var_15 = ((unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_0))), (((((-1LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (60655)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50014))) * (67108863U)));
        var_17 += (-(((/* implicit */int) arr_0 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_5 [i_1] [8LL] = ((/* implicit */unsigned char) (-(((arr_3 [i_1] [i_1]) ^ (arr_3 [i_1] [i_1])))));
        var_18 *= ((/* implicit */unsigned int) var_11);
    }
    var_19 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_11))))));
}
