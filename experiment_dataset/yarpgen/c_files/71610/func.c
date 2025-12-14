/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71610
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) 510644735);
                var_14 ^= ((((/* implicit */int) (short)32767)) <= (((/* implicit */int) (unsigned short)32767)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) || (((((/* implicit */int) var_2)) <= (-1)))))) >> (((((((/* implicit */_Bool) var_5)) ? (3103520015U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (3103520004U)))));
}
