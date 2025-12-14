/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91455
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
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_14)))));
    var_16 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (3326413033740092607ULL)))) ? (((/* implicit */int) max(((unsigned short)56905), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) ((short) var_10)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [8LL] [i_1])), (max((((/* implicit */int) (signed char)-124)), (((arr_2 [(signed char)0] [i_1]) ^ (((/* implicit */int) arr_3 [i_1])))))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */int) ((unsigned char) var_7))), (min((((/* implicit */int) (unsigned short)45456)), (-1))))), (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_11))))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-201800309392696401LL))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) (unsigned short)35569))))) ? (((((/* implicit */_Bool) arr_0 [(short)10] [i_0])) ? (((/* implicit */int) (short)-28853)) : (((/* implicit */int) arr_3 [6])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)1792))))) : (arr_2 [i_0] [i_0])));
            }
        } 
    } 
}
