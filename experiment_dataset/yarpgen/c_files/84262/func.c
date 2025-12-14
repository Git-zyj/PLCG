/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84262
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
    var_10 = ((/* implicit */unsigned long long int) (signed char)-16);
    var_11 -= ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((((((/* implicit */_Bool) 7696604564985515222LL)) ? (((/* implicit */int) arr_4 [13] [i_1])) : (((/* implicit */int) (unsigned short)127)))) & ((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))));
                var_13 = ((/* implicit */unsigned char) 217837738U);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 4832875051439695434LL)) ? (-4832875051439695434LL) : (-4832875051439695441LL)))));
}
