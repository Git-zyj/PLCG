/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79590
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((long long int) max((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13029)) / (((/* implicit */int) (_Bool)1))))))));
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((arr_1 [(short)11]), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) var_10)))))));
    }
    var_18 = ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */_Bool) var_12)) ? (var_10) : (var_1))))));
    var_19 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_1)))), (4360267328333573424ULL))), (((/* implicit */unsigned long long int) max((-1087299198), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)13795)) : (((/* implicit */int) (_Bool)0)))))))));
}
