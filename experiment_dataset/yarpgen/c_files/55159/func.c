/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55159
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_10 [i_2] [i_0] = ((/* implicit */unsigned char) arr_5 [i_2 - 1]);
                        var_13 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_3 - 2] [i_2 - 1]))) > (arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 2])))) >= (((((/* implicit */_Bool) -1979259946)) ? (-1493177991) : (((/* implicit */int) (unsigned char)162))))));
                        var_14 = 856093686;
                    }
                } 
            } 
        } 
        var_15 *= ((/* implicit */unsigned char) ((((arr_0 [i_0]) * (((/* implicit */unsigned long long int) 3076077376U)))) * ((-(arr_6 [i_0] [i_0])))));
        arr_11 [i_0] = (unsigned short)10262;
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((57637021) | (((/* implicit */int) (unsigned short)10262)))) : (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [10LL] [4] [(signed char)5] [8])) ? (((/* implicit */int) (unsigned short)10269)) : (((/* implicit */int) (_Bool)0))))))))));
    }
    var_16 = ((/* implicit */long long int) var_0);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)213)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 9150941059871607818LL)) ? (((/* implicit */int) (short)-28123)) : (((/* implicit */int) (unsigned char)92))))))) ? (2913971425U) : (((/* implicit */unsigned int) var_8))));
}
