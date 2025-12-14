/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76294
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) (short)32754)) ? (max((max((((/* implicit */unsigned long long int) (short)32758)), (17593191620743563547ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)50)))))) : (17593191620743563554ULL)))));
                    arr_6 [i_0 - 2] [i_1] = max((min((min((arr_0 [i_1]), (((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_2 + 1])))), (-351360413))), (((((/* implicit */int) (unsigned short)35662)) * (((/* implicit */int) (unsigned short)59346)))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_1 [i_2 + 1]))));
                    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((min((853552452965988068ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) * (((/* implicit */unsigned long long int) arr_0 [i_0 - 3]))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) 853552452965988069ULL)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_8))));
    var_20 = ((/* implicit */int) var_2);
}
