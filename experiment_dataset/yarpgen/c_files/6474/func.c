/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6474
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) 2000265815U)))) & (((/* implicit */long long int) ((2000265815U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] [(signed char)12] |= ((/* implicit */long long int) ((2000265815U) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_16))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]));
    }
    var_20 &= ((/* implicit */unsigned char) ((var_18) + (((((_Bool) var_18)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_15))) : (var_15)))));
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3435428508U)), (5181179884105375264ULL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) - (((/* implicit */int) var_8))));
    var_22 = max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_3)) - (((((/* implicit */_Bool) (short)-15299)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))));
}
