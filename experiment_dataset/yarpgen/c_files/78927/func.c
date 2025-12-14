/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78927
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */int) var_17);
                    var_21 |= ((/* implicit */short) (((+(((((/* implicit */_Bool) (unsigned short)63)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) ^ (((/* implicit */long long int) var_18))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_6))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)71)) ? (((/* implicit */int) (short)13542)) : (((/* implicit */int) (signed char)41))));
}
