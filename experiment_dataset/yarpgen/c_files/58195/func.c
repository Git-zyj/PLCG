/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58195
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_0 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) != (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_7 [(signed char)22] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) var_14))))));
                    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_2)) >> (((((((/* implicit */_Bool) (unsigned short)64028)) ? (((/* implicit */int) (unsigned short)64028)) : (((/* implicit */int) var_11)))) - (64026))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                }
            } 
        } 
    } 
    var_22 = max((((((/* implicit */int) var_17)) % (((((/* implicit */int) var_13)) & (((/* implicit */int) var_17)))))), (((((/* implicit */_Bool) (short)15306)) ? (((/* implicit */int) (unsigned short)1508)) : (((/* implicit */int) (unsigned short)1490)))));
}
