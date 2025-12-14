/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98257
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) ((max((((4294967285U) % (4294967269U))), (((/* implicit */unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)56)) >> (((arr_1 [18U]) + (4702929888534054788LL)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */_Bool) 9965461097046176836ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_1 + 1] [i_0] [10LL])))) : ((~(min((((/* implicit */long long int) -954765822)), (-4103691391232624160LL)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_7);
    var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)-19), (((/* implicit */signed char) (_Bool)1))))) << (((var_14) - (18056983387361938521ULL)))))) ? (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_11))))) : (((((/* implicit */_Bool) -9223372036854775803LL)) ? (36028797018963967ULL) : (14736617425787531015ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) * (var_18))))));
}
