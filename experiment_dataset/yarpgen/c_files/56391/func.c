/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56391
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & (-250040583755017033LL)))) ? (((/* implicit */int) ((short) 2135656368U))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26438))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_9))) ? (min((var_1), (((/* implicit */unsigned int) (unsigned short)48600)))) : (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (1784964143266264763ULL))));
                arr_7 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2135656368U)) ? (((unsigned int) -7657375740853745129LL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)19710))))))) - (2159310940U)));
                var_12 = ((/* implicit */unsigned char) arr_3 [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_6);
}
