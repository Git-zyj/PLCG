/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74067
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
    var_10 ^= ((/* implicit */_Bool) -7290207080384024933LL);
    var_11 = ((/* implicit */long long int) var_7);
    var_12 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) max((var_5), (var_0)))) && (((((/* implicit */_Bool) (signed char)35)) || (((/* implicit */_Bool) 25165824))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) ((130816U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-24322)))))), (9223372036854775807LL))) : (max(((-(var_6))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_9)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [1ULL] [i_1] = (_Bool)1;
                var_14 = ((((/* implicit */int) max(((unsigned short)37372), (((/* implicit */unsigned short) (_Bool)1))))) / (((/* implicit */int) ((unsigned short) (signed char)102))));
                var_15 = ((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_0 + 1])), (((arr_3 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28164))))))));
            }
        } 
    } 
}
