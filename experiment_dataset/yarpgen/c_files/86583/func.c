/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86583
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
    var_15 *= ((/* implicit */unsigned short) min((max((11772645001433057577ULL), (((/* implicit */unsigned long long int) 785040542)))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (var_6))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0 + 1])))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned short)40769)) - (40755)))))))))) != (arr_0 [i_0 + 1])));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -6042090153561551318LL))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)47))))), (9ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_19 = ((/* implicit */signed char) ((var_8) > (0ULL)));
                }
            } 
        } 
    }
}
