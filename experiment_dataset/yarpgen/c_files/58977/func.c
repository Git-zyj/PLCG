/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58977
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
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21645))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */long long int) max((var_6), (((/* implicit */int) var_5))))) >= (var_11)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0])))));
        arr_3 [(unsigned short)3] [(unsigned short)3] = ((/* implicit */signed char) var_0);
        arr_4 [i_0] = ((/* implicit */short) min((min((var_7), (arr_0 [i_0]))), (((/* implicit */long long int) (+(((/* implicit */int) (short)21645)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) min((((/* implicit */int) (short)-21645)), (-1933057531)))) : ((-(var_7))))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_10 [(unsigned char)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) var_0)))) << (((((long long int) var_0)) - (85LL)))));
        arr_11 [i_1] = ((/* implicit */unsigned char) arr_9 [i_1] [i_1]);
        arr_12 [i_1] [(unsigned char)19] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) -1933057522)), (3367805638391904895ULL))))) >> (((68719476735ULL) - (68719476732ULL)))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_15 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_2] [i_2]))));
        arr_16 [i_2] = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_2])) != (((/* implicit */int) arr_13 [i_2]))));
    }
}
