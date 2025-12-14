/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77704
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = 131071U;
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (min((((arr_3 [i_0] [i_1] [i_1]) ^ (((/* implicit */long long int) 131079U)))), (((/* implicit */long long int) arr_2 [i_0] [i_1])))))))));
                var_18 = ((/* implicit */int) max((var_18), (arr_1 [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -461482349)) ? (131068U) : (var_16))), (((4294836225U) >> (((4294836225U) - (4294836197U)))))))) ? (min(((~(var_16))), (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */unsigned int) var_12))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2214496086U)) ? (max((var_4), (((/* implicit */long long int) var_5)))) : (((2251799813685247LL) & (((/* implicit */long long int) 1639181291)))))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 6310044039534586415ULL))))), (((((/* implicit */_Bool) (+(4294836224U)))) ? (((/* implicit */long long int) (~(var_15)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_3)) : (-2251799813685268LL))))))))));
}
