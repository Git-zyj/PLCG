/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75074
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
    var_19 = ((/* implicit */unsigned char) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_2))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_20 = ((/* implicit */_Bool) ((short) max((min((var_8), (((/* implicit */int) var_4)))), ((+(var_11))))));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3ULL)))) ? (max((18446744073709551608ULL), (((/* implicit */unsigned long long int) (short)2)))) : (((((/* implicit */_Bool) (unsigned char)21)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13022))))))))));
    var_22 -= ((/* implicit */unsigned long long int) (+(var_17)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-16)))) : (2858873794482121389ULL)))));
                arr_4 [(signed char)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) 0ULL)) ? (((((/* implicit */_Bool) (short)9887)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])))) < (min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0]))))))) : (max((max((((/* implicit */unsigned int) arr_1 [i_1])), (arr_2 [i_0]))), (((/* implicit */unsigned int) max((arr_3 [i_1] [i_1] [i_0]), (arr_3 [0ULL] [i_1] [i_1]))))))));
            }
        } 
    } 
}
