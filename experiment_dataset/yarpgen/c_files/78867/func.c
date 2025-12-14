/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78867
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
    var_18 = ((/* implicit */unsigned char) var_12);
    var_19 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 18446743798831644672ULL)))) * (((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (4659188033097133151LL) : (((/* implicit */long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (signed char)-52);
                    var_21 ^= ((/* implicit */unsigned long long int) ((short) ((4659188033097133151LL) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12)))))));
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (max((((/* implicit */long long int) (unsigned short)34486)), (((long long int) arr_7 [i_2 + 1] [13LL] [i_2] [i_0 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_9 [i_1 + 1] [(short)11] [i_1 + 1] [i_1 + 2])))))));
                }
            } 
        } 
    } 
}
