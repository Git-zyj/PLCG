/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66597
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((min((arr_0 [i_0]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) min((((/* implicit */unsigned char) var_12)), ((unsigned char)160))))))), (min((min((((/* implicit */unsigned long long int) var_10)), (var_5))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-53)), (1988100623U))))))));
        var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((signed char)59), ((signed char)54)))), (min((((/* implicit */unsigned int) (_Bool)1)), (2585174924U)))))), (18019523520474476052ULL)));
        var_14 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)-10)), (2062856225U))), (min((max((((/* implicit */unsigned int) arr_0 [i_0])), (var_0))), (max((1136867573U), (((/* implicit */unsigned int) (unsigned char)11))))))));
    }
    var_15 *= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2062856206U)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (427220553235075577ULL))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */int) (_Bool)1)), (-3))), (((/* implicit */int) max(((_Bool)1), (var_6)))))))));
}
