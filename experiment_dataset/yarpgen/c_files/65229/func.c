/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65229
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
    var_18 = ((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (580072075688794655ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_19 *= ((/* implicit */signed char) arr_1 [i_0 - 1]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (72057044282114048ULL))), ((~(var_15)))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_3]) ? (((/* implicit */unsigned int) var_13)) : (var_6)))) ? ((~(arr_2 [i_0 - 1]))) : (((arr_2 [i_0 - 2]) / (((/* implicit */long long int) var_8))))));
                        var_22 = ((/* implicit */short) min((var_22), (var_11)));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (549755813887ULL)))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((((/* implicit */_Bool) 499434246)) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) (_Bool)1)))))));
    }
    var_24 = ((/* implicit */unsigned int) (-(17866671998020756960ULL)));
    var_25 = ((((/* implicit */_Bool) 580072075688794655ULL)) && (((/* implicit */_Bool) 12469512033845684394ULL)));
}
