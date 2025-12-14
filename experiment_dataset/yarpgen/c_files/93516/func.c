/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93516
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_18 = min((((/* implicit */unsigned short) (short)8191)), ((unsigned short)63212));
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) var_12);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) -2801390447128661895LL)) ? (1178132479552922394LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16486))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-29636)) : (((/* implicit */int) (unsigned short)58771))))))), (var_6)));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_9 [i_3] = ((/* implicit */short) (!(((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) (unsigned short)32777))))));
        var_20 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)32)) << (((((/* implicit */int) var_14)) - (33)))));
        arr_10 [i_3] [i_3] = ((/* implicit */long long int) (unsigned short)32764);
    }
}
