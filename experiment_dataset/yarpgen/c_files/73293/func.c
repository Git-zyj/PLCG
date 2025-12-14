/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73293
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)20)) + (((/* implicit */int) (_Bool)0)))) + ((+(((/* implicit */int) (unsigned short)23095))))));
                    var_21 = ((/* implicit */_Bool) (+(((unsigned long long int) (_Bool)0))));
                    var_22 = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (-2023903676) : (((/* implicit */int) var_13)))) | (((/* implicit */int) ((unsigned char) var_17))));
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */int) ((unsigned long long int) var_19));
    var_24 -= ((/* implicit */_Bool) var_15);
    var_25 = ((/* implicit */int) var_1);
}
