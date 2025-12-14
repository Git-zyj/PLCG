/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97736
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
    var_14 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = arr_2 [i_0] [i_0];
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (6873623975295363175ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [3])))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0])))) : (((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)9416))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (short)-9421))))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) 3220399605919206994ULL);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            var_17 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_3))))), (268427264LL)));
            arr_10 [i_1] = ((/* implicit */unsigned long long int) var_4);
        }
        var_18 -= ((/* implicit */unsigned int) arr_1 [i_1]);
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((15396657384022603542ULL), (((/* implicit */unsigned long long int) -536870912)))), (((((/* implicit */_Bool) (short)9416)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3584)))))))) ? (min((((/* implicit */long long int) (unsigned char)99)), (var_6))) : (((long long int) (_Bool)1))));
        arr_11 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 694299646825466707ULL))) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) ((signed char) arr_6 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), ((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (arr_6 [(signed char)3] [i_1]))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) arr_14 [i_3]);
        arr_15 [i_3] [i_3] = (i_3 % 2 == 0) ? (((/* implicit */unsigned short) max((((((/* implicit */int) arr_13 [i_3])) >> (((((/* implicit */int) var_7)) - (34263))))), (max((((((/* implicit */int) (short)-23529)) * (((/* implicit */int) arr_12 [i_3])))), (((/* implicit */int) min((arr_13 [i_3]), (var_8))))))))) : (((/* implicit */unsigned short) max((((((((/* implicit */int) arr_13 [i_3])) + (2147483647))) >> (((((/* implicit */int) var_7)) - (34263))))), (max((((((/* implicit */int) (short)-23529)) * (((/* implicit */int) arr_12 [i_3])))), (((/* implicit */int) min((arr_13 [i_3]), (var_8)))))))));
        var_21 = ((/* implicit */unsigned char) 3050086689686948061ULL);
    }
}
