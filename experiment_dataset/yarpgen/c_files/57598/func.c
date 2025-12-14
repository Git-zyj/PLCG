/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57598
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
    var_20 |= min(((~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (954810275717139550ULL))))), (((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -420962726)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) & (min((14023246030414635496ULL), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 2]))))) : (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (14023246030414635490ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45057))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2])))))));
                var_22 -= ((/* implicit */unsigned int) ((unsigned short) arr_3 [i_1]));
            }
        } 
    } 
}
