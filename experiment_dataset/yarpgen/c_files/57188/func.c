/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57188
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
    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-1)), (-7408504959391162501LL)))) ? (((/* implicit */long long int) var_1)) : ((~((-(var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((max((arr_6 [i_2]), (arr_6 [i_0]))), (min((arr_6 [i_0]), (arr_6 [i_0])))));
                    var_17 ^= min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (arr_0 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (1193323256) : (((/* implicit */int) (unsigned char)120))))) : (arr_1 [i_2]))), (((/* implicit */long long int) ((short) min((((/* implicit */int) arr_4 [i_0] [i_1] [11ULL])), (var_14))))));
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) 7408504959391162501LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (var_0))), (((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_8))))) ? (var_12) : (((((/* implicit */_Bool) var_6)) ? (-7408504959391162485LL) : (var_0)))))));
}
