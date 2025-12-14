/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9434
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) 1081172299)) == (arr_1 [4U])));
        arr_2 [i_0] = ((/* implicit */signed char) (~(arr_1 [i_0 + 1])));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) -1081172300)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_0 [i_0 - 1]))))));
        var_18 = ((/* implicit */unsigned long long int) -8290409950056207588LL);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) 192251084U);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_19 = ((/* implicit */int) (~(var_8)));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1081172299)) ? (var_14) : (((/* implicit */int) arr_4 [i_1 + 3])))))));
    }
    var_21 ^= ((/* implicit */unsigned long long int) (+((+(1081172296)))));
    var_22 = ((/* implicit */unsigned int) var_9);
    var_23 = ((/* implicit */short) (_Bool)1);
    var_24 -= ((/* implicit */_Bool) (+(-8290409950056207588LL)));
}
