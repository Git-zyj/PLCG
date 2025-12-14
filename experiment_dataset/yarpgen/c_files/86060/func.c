/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86060
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) var_5);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) var_2))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_5 [i_1]))));
                    arr_8 [i_0 - 1] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_0 + 1] [i_2])) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]) : (arr_7 [i_0] [i_0] [i_0 - 1] [i_0])));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (unsigned char)59))));
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16083))) : (0ULL)));
    }
    var_18 *= ((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_2)) : (min((((/* implicit */int) min((var_10), (var_7)))), (min((var_0), (((/* implicit */int) (unsigned short)65532))))))));
}
