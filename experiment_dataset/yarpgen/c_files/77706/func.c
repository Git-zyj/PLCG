/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77706
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
    var_18 = ((/* implicit */unsigned int) (-(6264854022669906747LL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */long long int) var_16);
                    arr_7 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) 1077467509U)), (((long long int) -7LL))));
                    var_20 -= ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)1807)))));
                    arr_8 [11LL] [i_1 - 1] [11LL] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((1853171311), (((/* implicit */int) var_3))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_12);
    var_22 = ((/* implicit */unsigned long long int) ((var_0) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((2097151U) | (1406064039U)))) * (max((0LL), (((/* implicit */long long int) (_Bool)0)))))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) - (1077467521U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1853171294)) + (7U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_7)))))) ? (7466595618215300209LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
