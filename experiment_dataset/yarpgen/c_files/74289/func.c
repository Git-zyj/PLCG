/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74289
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_18)))))) & (var_15)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [4U] &= ((/* implicit */_Bool) 1842736098);
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_8)), (max((min((((/* implicit */long long int) (unsigned short)37073)), (-3485739682790588968LL))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14))), (((/* implicit */long long int) max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) 1379610176)))))))) ? ((~(max((var_4), (((/* implicit */unsigned long long int) var_18)))))) : (min((6760698014503049311ULL), (((/* implicit */unsigned long long int) var_0))))));
        var_23 = ((/* implicit */short) arr_3 [i_1]);
    }
    var_24 = max((((((/* implicit */_Bool) min((341016472U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)255)), (var_0)))) : (((((/* implicit */_Bool) (short)19525)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))), ((((!(((/* implicit */_Bool) var_18)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)1)) ? (3953950828U) : (((/* implicit */unsigned int) -1842736070))));
    var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32256)) ? (16085194102284204572ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20401))))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)120))))), (((((/* implicit */_Bool) 0LL)) ? (4762322798509568887LL) : (8265307170542209547LL))))))));
}
