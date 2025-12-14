/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80211
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) arr_4 [i_0] [i_0])));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46352)) - (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [(short)17])) >= (((/* implicit */int) arr_6 [i_2] [i_1] [13U])))))) : (min((var_12), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2]))))));
                }
                arr_11 [i_1] [i_1] |= ((/* implicit */_Bool) max(((~((+(18182469542748651814ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)154))))) / (((((/* implicit */_Bool) var_4)) ? (3152172718U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4609))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)158))));
}
