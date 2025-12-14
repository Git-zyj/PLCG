/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78444
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
    var_19 = ((/* implicit */short) min((var_0), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) (signed char)48))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)41)), (var_9))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 809494192967882743LL)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) (unsigned char)252))))) - (min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])), (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) var_4)) : (min((((/* implicit */unsigned long long int) -2308301948386564336LL)), (arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_2)))) ? (min((var_7), (((/* implicit */int) (short)0)))) : (((/* implicit */int) var_15))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)25))))), (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) var_0))))))));
}
