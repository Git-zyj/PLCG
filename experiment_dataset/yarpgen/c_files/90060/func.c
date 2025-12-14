/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90060
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
    var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) (-(var_3)))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))))) ? (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) : (((unsigned int) var_4))))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min(((-((~(var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_10))) ? (arr_1 [i_0] [i_0 - 3]) : (((/* implicit */long long int) (~(772999003U)))))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) 15LL)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_15);
}
