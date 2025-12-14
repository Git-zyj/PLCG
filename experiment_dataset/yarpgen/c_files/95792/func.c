/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95792
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
    var_13 = ((/* implicit */unsigned char) max((var_7), (max((((/* implicit */short) ((var_8) == (((/* implicit */unsigned int) var_4))))), ((short)(-32767 - 1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11714797688015483421ULL)) ? (-1357365474) : (arr_0 [i_0 + 1])))) > (6731946385694068195ULL));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 1]))));
        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((arr_4 [i_0] [i_0 - 1] [i_0 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13)))));
                    var_18 ^= ((/* implicit */long long int) 4294967276U);
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) <= (((arr_7 [i_3] [i_3] [i_3]) << (((/* implicit */int) (_Bool)0)))))))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((max((1310698084), (1949009161))) + (((/* implicit */int) (unsigned char)187))))));
    }
}
