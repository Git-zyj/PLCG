/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55454
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)242)) - (((/* implicit */int) (unsigned char)13)))) - (((/* implicit */int) (unsigned char)13))));
                    var_18 &= ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (unsigned char)13)), (0U))));
                }
            } 
        } 
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)13))) || (((/* implicit */_Bool) (unsigned char)232))));
        var_20 |= ((/* implicit */_Bool) min((min((9064186753304788756LL), (((/* implicit */long long int) 1820377371U)))), (((/* implicit */long long int) min((((4080188172U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)19052))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) < (281474708275200LL)))))))));
        var_21 = ((/* implicit */unsigned int) ((signed char) ((214779124U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29360))) - (214779124U))))));
    }
    var_23 |= ((/* implicit */unsigned long long int) (signed char)-1);
    var_24 = ((/* implicit */_Bool) ((int) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (unsigned char)171)) + (((/* implicit */int) (_Bool)0)))))));
    var_25 ^= ((/* implicit */signed char) ((_Bool) ((unsigned short) var_8)));
}
