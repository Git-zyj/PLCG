/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91229
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
    var_13 = ((/* implicit */unsigned int) var_11);
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((int) 3917729171U))))), (((unsigned int) var_3))));
    var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_5)) << (((var_7) - (6909060627903567309LL)))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 6U)) & (((-711453456277288813LL) | (((/* implicit */long long int) ((((/* implicit */int) var_11)) >> (6U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((_Bool) min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((4294967289U) | (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)65531))))))))) : (min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1]) ? (3879140324U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((arr_4 [i_0] [i_1]) != (((/* implicit */unsigned long long int) var_0))))) : ((-(var_4)))))));
            }
        } 
    } 
}
