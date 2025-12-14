/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86530
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)0)), (9223372036854775807LL)));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)141)), (0ULL)))) ? (min((max((((/* implicit */long long int) arr_0 [i_0])), (var_0))), (((((/* implicit */_Bool) (unsigned char)214)) ? (-6952774099744920685LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))))))) : (max((((arr_1 [i_0]) ? (var_9) : (((/* implicit */long long int) 2684270976U)))), (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (unsigned char)37))))))))))));
                var_20 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) min((var_15), (((/* implicit */unsigned short) (unsigned char)214))))), (max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (var_0))))) >> (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) arr_3 [i_0] [i_0]))))), (min((((/* implicit */long long int) arr_1 [i_1])), (arr_2 [21LL])))))));
            }
        } 
    } 
    var_21 += ((/* implicit */_Bool) min((max((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (var_13)))), (min((var_0), (var_17))))), (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)44)) - (16))))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)42)))))))));
}
