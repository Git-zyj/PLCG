/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73119
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (min((((/* implicit */unsigned long long int) var_10)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((var_12), (((/* implicit */long long int) var_14))))))) : (var_6));
    var_19 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3851838920U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((var_2) / (((/* implicit */int) (unsigned char)232))))) : (min((((/* implicit */long long int) var_0)), (var_5))))) ^ (((/* implicit */long long int) ((/* implicit */int) min(((signed char)127), ((signed char)-121))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */long long int) arr_4 [i_1 - 1] [11LL] [i_0 + 1])) == (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_0 + 3] [i_0 + 3])) ? (var_5) : (((/* implicit */long long int) arr_4 [i_1 + 1] [i_0 - 1] [i_0 - 1]))))));
                    var_22 *= ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))));
}
