/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82616
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
    var_13 ^= ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((((((((/* implicit */_Bool) (unsigned short)65535)) ? (-7154705603864647098LL) : (((/* implicit */long long int) 67108863)))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 67108860)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) : (6225226005926267974ULL))) - (35ULL)))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((-67108887) >= (67108850))))));
                    var_16 += ((/* implicit */signed char) min((9220951932238605073LL), (((/* implicit */long long int) (short)48))));
                    arr_10 [i_2] [i_2] |= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2]);
                    var_17 += ((/* implicit */long long int) var_9);
                }
            } 
        } 
        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */_Bool) (short)-47)) || (((/* implicit */_Bool) 1346926722U))))))))));
    }
    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_1)) : (var_5)))))) ? (var_5) : (16738790852931154188ULL)));
}
