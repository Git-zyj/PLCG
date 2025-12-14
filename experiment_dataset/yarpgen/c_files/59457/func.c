/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59457
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
    var_20 = var_0;
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_13))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */_Bool) max((var_22), (arr_5 [i_0])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_2 [(short)12]))));
                    arr_9 [i_2] [i_1] [(signed char)16] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) var_14)))) < (((/* implicit */int) arr_4 [i_0] [i_0]))));
                }
                var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-89))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (unsigned char)16)))) : ((+(((/* implicit */int) (signed char)-1))))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_19);
            }
        } 
    } 
    var_25 -= ((/* implicit */signed char) (+((+(((/* implicit */int) var_18))))));
}
