/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94839
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
    var_12 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~((-(465122959U)))))) ? (min((min((((/* implicit */unsigned int) 2121102628)), (2382632029U))), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_3)))), (((((/* implicit */_Bool) (unsigned char)26)) || (((/* implicit */_Bool) (short)-13435))))))))));
    var_13 = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) (signed char)31))))), ((~(-3571921298516695788LL))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) -1193791877)), (0U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)126)) >= (((((/* implicit */int) var_6)) << (((/* implicit */int) (_Bool)1)))))))) : (((arr_1 [i_0 + 1] [i_0 + 1]) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32793)))))));
                var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 872583077U)) || (((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)5]))))), (arr_3 [i_0]))))) > ((+(min((((/* implicit */long long int) var_3)), (arr_1 [i_0 + 1] [i_0 + 1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_5);
}
