/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56816
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
    var_13 = ((/* implicit */signed char) 4194303U);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))))));
        var_15 = ((/* implicit */signed char) ((unsigned int) var_4));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) ((unsigned char) 3U)))))));
    }
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        var_17 *= ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned int) (short)30868)), (4294967289U))));
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) 4294967281U)))));
        arr_5 [i_1 + 1] = ((/* implicit */short) ((unsigned long long int) (+(max((9223372036854775807LL), (((/* implicit */long long int) 4294967277U)))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (signed char i_3 = 4; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_12 [i_3] [i_3] [i_3 - 4] = ((/* implicit */long long int) ((_Bool) 1955487918U));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_10 [i_3 + 3] [i_1] [i_1]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) arr_16 [i_4]);
        var_21 = ((/* implicit */signed char) arr_13 [i_4] [i_4]);
    }
}
