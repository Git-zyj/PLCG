/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86275
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) max((var_6), (var_4)))), (max((18065797787058694625ULL), (((/* implicit */unsigned long long int) 2)))))) - (min((((/* implicit */unsigned long long int) 2)), (18065797787058694605ULL))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))), ((+(((/* implicit */int) var_8))))));
                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [(short)14]), (((/* implicit */short) var_9))))) ? (((/* implicit */unsigned long long int) min((-3), (((/* implicit */int) arr_2 [i_1]))))) : ((+(var_13)))))) ? (((var_9) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) < (var_15)))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((18065797787058694634ULL) % (((/* implicit */unsigned long long int) 10))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_16))));
}
