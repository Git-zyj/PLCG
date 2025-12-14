/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76780
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_1 [i_0])), (0U))), (((((/* implicit */_Bool) 1U)) ? (4294967295U) : (1U)))))) ? (((((/* implicit */_Bool) (signed char)-124)) ? (0U) : (((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_3 [i_1] [i_1 - 1] [i_1]) : (arr_3 [i_1] [i_1 - 1] [i_1])))) ? (((/* implicit */int) min((((/* implicit */short) var_11)), ((short)(-32767 - 1))))) : (((/* implicit */int) ((((/* implicit */int) (short)26091)) > (((/* implicit */int) (unsigned short)511)))))));
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) max((4U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 666520395862982083LL)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147)))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) - (18U)))));
}
