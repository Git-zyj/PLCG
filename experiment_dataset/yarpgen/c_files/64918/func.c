/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64918
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_1]))))));
                var_21 = ((/* implicit */short) arr_2 [(unsigned char)11] [i_1] [i_1]);
                var_22 += ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) var_15)))), (((/* implicit */int) arr_1 [i_1])))) >= ((~(((/* implicit */int) (signed char)48))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [2U] [i_0])) <= (((/* implicit */int) var_12)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_4)))) ? (((var_4) - (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2))))))))));
    var_25 = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-65), (((/* implicit */signed char) ((9164534763603562972ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))) >= ((+(9164534763603562972ULL)))));
}
