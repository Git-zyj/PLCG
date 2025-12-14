/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97162
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */unsigned int) -15756218)) : (2555064334U))) > (var_13))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3490080896U), (3490080893U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)184)))))) : (arr_4 [i_0])))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))) : (var_14)))), (max((var_5), (var_2)))))));
                var_17 = ((/* implicit */short) var_13);
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_0])))) && (((/* implicit */_Bool) var_6))))) >> ((((-(((/* implicit */int) arr_1 [i_0] [i_0])))) - (16889)))));
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : (var_5))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1] [i_0])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_13);
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_2))));
}
