/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78056
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
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-9185))))) ? (((-1950969627521520395LL) & (((/* implicit */long long int) ((/* implicit */int) (short)9170))))) : (((-3606059006246898570LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))) : (var_14))) : ((~(var_15))))))));
    var_18 = var_4;
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_12))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) var_5);
                    var_21 = ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned char)169)) << (((3524238976U) - (3524238975U))))))) || (((/* implicit */_Bool) ((unsigned int) 281474976710655LL))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (((-(-1094800320))) & (((/* implicit */int) ((var_14) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))))))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) var_9)) : (555802985)))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_15);
}
