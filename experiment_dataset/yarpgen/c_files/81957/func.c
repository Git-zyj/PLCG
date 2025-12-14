/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81957
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 10547658416232194059ULL)) ? (10547658416232194087ULL) : (7015379412685963799ULL))) : (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */_Bool) (unsigned char)0)) ? (var_13) : (((/* implicit */unsigned long long int) var_7)))), (max((10547658416232194059ULL), (11431364661023587804ULL))))) : (var_8))))));
                var_16 = ((/* implicit */unsigned int) min((max((7015379412685963799ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((var_7) % (((/* implicit */int) (unsigned short)18027)))))));
                var_17 = ((/* implicit */unsigned long long int) ((unsigned int) 11431364661023587815ULL));
                var_18 -= ((/* implicit */unsigned long long int) var_0);
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */unsigned long long int) (~(var_7)))), (((((/* implicit */_Bool) (unsigned short)65118)) ? (var_13) : (((/* implicit */unsigned long long int) -1LL)))))))));
            }
        } 
    } 
}
