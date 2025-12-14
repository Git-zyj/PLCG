/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99897
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (0ULL)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_9))))), (((((((/* implicit */_Bool) var_2)) ? (17514056782082271940ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) / (max((((/* implicit */unsigned long long int) (signed char)-92)), (18446744073709551615ULL)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16881251802221210446ULL)) ? (1565492271488341170ULL) : (0ULL)));
                    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_11)) >> (((arr_7 [i_1] [i_2]) - (3420897931U)))))))) >= (arr_7 [i_0] [i_0])));
                    var_16 = ((/* implicit */short) (+(((unsigned long long int) 18446744073709551594ULL))));
                    arr_10 [i_0] [i_1] [7] = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) var_7)) / (18446744073709551606ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (8556874703431494342LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111)))))))) <= (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)58))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_1] [i_1])), (0LL)))) : (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (19ULL)))))));
                    var_17 = ((/* implicit */int) ((((min((var_10), (var_8))) >= (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (max((((/* implicit */unsigned int) var_13)), (arr_7 [i_1] [i_0])))));
                }
            } 
        } 
    } 
}
