/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86500
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
    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) var_8)), (min((var_1), (2838514454U))))) : (max((var_9), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))) : (var_9)))))));
    var_17 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_0))))), (var_15)))));
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)198)) ? (781610026U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226)))))))) ? (min((-5554373823706743190LL), (((/* implicit */long long int) (unsigned char)236)))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)193)))))));
            }
        } 
    } 
}
