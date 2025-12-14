/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60150
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
    var_15 = ((/* implicit */long long int) var_4);
    var_16 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (-4024344589892840571LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5354754490584054589LL))))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)14))))) : (((((/* implicit */_Bool) 940254391U)) ? ((-(3970909822604693317ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-14))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [6U] [i_0] = ((/* implicit */unsigned char) 32767U);
        arr_3 [i_0] [i_0] = (signed char)14;
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(1124860058995335194LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_8)), (var_1)))))))));
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((long long int) -115702661)), (-4024344589892840558LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121)))));
        arr_7 [i_1] = ((/* implicit */long long int) (((((!((_Bool)1))) ? (((((/* implicit */int) arr_4 [i_1 + 1])) << (((1444306187) - (1444306173))))) : (((/* implicit */int) arr_6 [i_1 - 1])))) != (((((/* implicit */_Bool) -1444306188)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1]))))));
    }
}
