/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70237
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
    var_18 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3761449131U)) ? (14732325337670976927ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_10)))) ? (((/* implicit */unsigned int) ((var_1) | (((/* implicit */int) (unsigned short)45242))))) : (((var_16) % (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_0] [i_0]) >= (17556674650121760835ULL))))))))));
                    var_20 = ((/* implicit */unsigned int) ((int) (~(arr_2 [i_1]))));
                    arr_8 [i_0] [i_0 - 1] [i_0 - 1] [(signed char)10] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_6 [i_0 - 1])))), (((/* implicit */int) arr_6 [i_0 - 1]))));
                    var_21 = ((/* implicit */short) ((11824384247429267920ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16248207307804744930ULL)) && (((/* implicit */_Bool) -1))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(var_10)))) ^ (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_12)) : (var_17))) & (((((/* implicit */unsigned long long int) var_16)) ^ (var_17)))))));
}
