/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93659
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) (-(var_4)))) + (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) (signed char)-1);
        arr_3 [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2]))))), (arr_1 [i_0]))) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (0ULL)))));
        var_14 = ((/* implicit */signed char) max((arr_2 [i_0 + 3] [i_0 + 2]), (((((/* implicit */int) arr_2 [i_0] [i_0 + 1])) != (((/* implicit */int) ((short) 1078034369U)))))));
        var_15 = ((/* implicit */_Bool) ((((3216932907U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-6)))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [15U] [i_1] = max((((/* implicit */unsigned long long int) arr_4 [i_1])), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1]))))) & (7921836614747707565ULL))));
        var_16 = ((/* implicit */unsigned short) arr_5 [(unsigned char)11] [i_1]);
    }
    var_17 = ((((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)197)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (1078034371U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)59)))))));
}
