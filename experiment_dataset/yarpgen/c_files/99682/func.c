/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99682
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
    var_14 = ((/* implicit */signed char) min((var_14), (var_0)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 3769437792U)) || (((/* implicit */_Bool) 525529503U)))) ? ((-(var_13))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0] [(unsigned short)6]) ? (arr_4 [i_1 + 1] [9LL] [i_1 + 1]) : (arr_1 [i_1] [i_0])))))) > ((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1ULL) : (18446744073709551615ULL)))))));
                arr_5 [i_1] [i_0] = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 525529504U)) && (((/* implicit */_Bool) -486142313)))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-14378))))), (((((/* implicit */_Bool) var_2)) ? (525529503U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)-12922))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) >> (((((/* implicit */int) (short)-14378)) + (14385)))));
}
