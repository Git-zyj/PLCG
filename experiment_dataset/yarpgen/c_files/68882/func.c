/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68882
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                arr_5 [(signed char)0] [i_0] = ((/* implicit */int) var_10);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (var_4))) : (((/* implicit */unsigned long long int) ((long long int) arr_2 [(_Bool)1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_0))))) : (((unsigned int) var_13))))));
}
