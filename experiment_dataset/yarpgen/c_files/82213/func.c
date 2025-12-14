/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82213
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_7) / (((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-104))))))) : (((/* implicit */int) min((var_0), (((unsigned short) 629247005U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) arr_2 [i_0]);
                    arr_7 [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5770)) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), ((+(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) var_7))));
                    var_13 -= ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) - (((unsigned int) var_0)))), (((((((/* implicit */_Bool) 1152920405095219200LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (2539042857U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))));
                    var_14 = ((/* implicit */short) max(((-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) (unsigned char)255))))))), (((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)171)), (var_5)))))))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_9))))) ? (5658731758290212321LL) : ((~(var_4)))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 1127364642U))))), (((((/* implicit */_Bool) (unsigned short)4064)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) var_10)) ? (max((573416225U), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)45348)) == (((/* implicit */int) var_2))))), ((-(((/* implicit */int) (unsigned short)43726)))))))));
}
