/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7081
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)11))))), (max((((/* implicit */unsigned long long int) 0LL)), (0ULL)))));
                arr_5 [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) var_6))) / ((-9223372036854775807LL - 1LL))))));
                var_14 = ((/* implicit */signed char) max((min((0ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)16616))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)49437), (((/* implicit */unsigned short) (unsigned char)0))))) ? (((/* implicit */int) (short)-9165)) : (((/* implicit */int) (unsigned short)48926)))))));
                var_15 = ((/* implicit */unsigned long long int) ((min((126100789566373888LL), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)16610)) : (((/* implicit */int) (unsigned char)20))))))) <= (((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (unsigned short)16609)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_2))));
}
