/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96528
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_4))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((var_0) ? (-1251785198237710016LL) : (((/* implicit */long long int) 3042654082U))))))) ? (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))) : (var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? ((+(arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [12LL]), (((/* implicit */signed char) arr_2 [i_0] [2ULL]))))))))) ? (-8634371651946948719LL) : (((/* implicit */long long int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                arr_4 [i_0] [i_1] &= ((/* implicit */signed char) min((((/* implicit */long long int) var_8)), (((arr_0 [2LL] [i_1]) / (arr_0 [i_0] [i_1])))));
            }
        } 
    } 
}
