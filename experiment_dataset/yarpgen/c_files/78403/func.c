/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78403
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = (unsigned short)51173;
                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? ((-(arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)14380))));
                var_19 ^= ((/* implicit */unsigned long long int) var_12);
                var_20 = ((/* implicit */unsigned long long int) (unsigned short)0);
            }
        } 
    } 
    var_21 = ((((/* implicit */int) (signed char)-90)) ^ (((/* implicit */int) (short)(-32767 - 1))));
    var_22 = ((/* implicit */_Bool) (unsigned short)61897);
    var_23 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4095))) : (2658227879U)))) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2658227892U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (2658227864U) : (((unsigned int) var_2)))))));
}
