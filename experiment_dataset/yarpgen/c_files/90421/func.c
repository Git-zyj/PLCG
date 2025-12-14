/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90421
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
    var_16 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1790666423626254546LL)), (15003294293503228716ULL)));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned long long int) var_6)), ((-(8679228973171626275ULL)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) >= (2059354711U))) ? ((+(((((/* implicit */_Bool) var_7)) ? (15003294293503228716ULL) : (((/* implicit */unsigned long long int) 3091947549471856373LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
                    var_18 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                    var_19 = ((/* implicit */short) max((((var_8) ? (472409972) : ((~(472409992))))), ((((~(((/* implicit */int) arr_0 [i_0] [i_0])))) & ((~(-472409973)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (+(((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_14)) - (119)))))));
}
