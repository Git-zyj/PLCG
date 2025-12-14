/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62707
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
    var_12 = ((/* implicit */unsigned char) var_0);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60)) ? (63U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((var_3) ? (var_6) : (var_10)))) : (((-7558619851876014302LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = 1610612736;
        arr_3 [i_0] [17LL] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((-(var_4))) >= (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) 3943007490U)), (8316041243828166011ULL)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((max((((arr_1 [i_0 + 1] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_1 [6] [i_0])) ? (arr_1 [i_0] [7LL]) : (arr_1 [i_0 - 2] [i_0 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)32)))))))));
    }
}
