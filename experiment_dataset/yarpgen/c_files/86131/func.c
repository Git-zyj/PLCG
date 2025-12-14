/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86131
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
    var_10 = ((/* implicit */unsigned short) ((var_9) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 13U))) ? (((unsigned int) -758301079)) : (((13U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((unsigned long long int) var_5)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((int) ((unsigned int) var_5)));
                arr_5 [i_0] [8U] &= ((/* implicit */unsigned short) ((long long int) (unsigned short)3324));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) ((unsigned int) 3366031781498406204LL)))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31706))) - (4294967275U)))));
                    var_14 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 18446744073709551593ULL)) ? (var_4) : (((/* implicit */int) var_0)))) + (2147483647))) >> (((/* implicit */int) ((13U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))))))));
                    var_15 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 8870164570744920586LL)))) - (((unsigned long long int) (_Bool)1)))));
                    var_16 = (!(((/* implicit */_Bool) (-(3792024652627160818LL)))));
                }
                for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    var_17 = ((_Bool) ((((/* implicit */_Bool) 100663296U)) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_3] [i_0])))));
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((int) arr_7 [i_1])));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (short)(-32767 - 1)))) == (((/* implicit */int) var_8)))))) : (var_9)));
}
