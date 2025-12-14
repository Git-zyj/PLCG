/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61030
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
    var_12 = ((/* implicit */unsigned int) ((_Bool) var_6));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((((/* implicit */unsigned long long int) var_8)) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_8)) : (var_3)))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)201))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)30780))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-30782)) ? (((/* implicit */unsigned long long int) 2670090017U)) : (var_3))))) : (((/* implicit */int) var_7))));
    var_15 = var_8;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(short)6] [i_0])) ? (((/* implicit */unsigned int) var_8)) : (((arr_0 [(unsigned char)18] [(unsigned char)18]) % (arr_0 [i_0] [i_1])))));
                arr_7 [8ULL] [i_1] = ((/* implicit */unsigned short) (signed char)18);
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))))), (((unsigned int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))))))));
            }
        } 
    } 
}
