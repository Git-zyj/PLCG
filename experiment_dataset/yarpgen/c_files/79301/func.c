/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79301
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
    var_11 = ((((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) var_5))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23508))) : (5979203617673347672ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) < (((/* implicit */unsigned long long int) var_2)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_1 [i_0 + 1] [i_0]);
                    var_12 = ((/* implicit */int) min((((/* implicit */unsigned int) min(((+(273296934))), (((/* implicit */int) ((unsigned short) (-2147483647 - 1))))))), (max(((~(411397271U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -273296945)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) max(((unsigned char)175), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -273296934)))))));
}
