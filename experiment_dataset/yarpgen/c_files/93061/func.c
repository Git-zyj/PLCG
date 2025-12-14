/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93061
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
    var_14 = max((var_11), (((/* implicit */int) ((unsigned short) ((0ULL) ^ (17ULL))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || ((_Bool)1)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) var_12)), (18446744073709551592ULL))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_9)) : (12582912U))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */short) var_4);
                    var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) var_7)), (var_6)))));
                }
            } 
        } 
    } 
}
