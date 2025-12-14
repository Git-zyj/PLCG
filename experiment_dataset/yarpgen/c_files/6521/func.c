/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6521
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
    var_10 = ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
    var_11 ^= (((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_8)) : (var_6))))) << (((var_6) - (7156531522988788839ULL))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_8))))));
                    var_13 = ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
}
