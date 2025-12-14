/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91834
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
    var_18 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4248)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11))))) ? (min((((/* implicit */int) var_8)), (4194303))) : (((int) 1848447680)))) >= ((+(((/* implicit */int) var_15))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((arr_1 [i_0 - 2]) > (min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 2])))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4249))) : (3256290676U)));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_19 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)22431)) >> (((((/* implicit */int) arr_0 [i_1])) - (38069)))))), (7416527240843205467LL)));
        var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3556532460405335657LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15075))) : (min((((((/* implicit */_Bool) var_15)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))))), (((/* implicit */long long int) (short)960))))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) -98677717735036603LL)))))) : (var_17)))) ? (((((/* implicit */_Bool) ((var_3) + (2452122080U)))) ? (((((/* implicit */long long int) 1848447680)) + (33285996544LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) min((((((/* implicit */int) (short)4248)) + (((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_6)))))));
}
