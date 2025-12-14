/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63435
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
    var_17 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((/* implicit */long long int) min((((unsigned short) var_12)), ((unsigned short)19892))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) var_15);
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_9))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((int) max((var_2), (((/* implicit */unsigned short) (unsigned char)0)))))) | (arr_3 [i_0])));
                var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1] [i_0]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))))))));
    var_22 &= max((min((((((/* implicit */unsigned long long int) -6339856117983412156LL)) / (65535ULL))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)233)), (65530ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
}
