/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98233
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_5))))), (var_3)))));
    var_14 += ((/* implicit */unsigned short) var_0);
    var_15 = ((/* implicit */int) (+(var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned short)0] [(short)15] = min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) min(((unsigned char)195), ((unsigned char)204)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)25)) || (((/* implicit */_Bool) arr_3 [i_2]))))))) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) 16256U)), (7111951785713601875ULL)))))));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((5LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-8)))));
                }
            }
        } 
    } 
}
