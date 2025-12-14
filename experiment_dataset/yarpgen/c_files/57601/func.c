/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57601
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
    var_18 = ((/* implicit */short) min((min((min((((/* implicit */long long int) (_Bool)1)), (var_4))), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((unsigned int) var_17)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) ((short) ((unsigned char) 20ULL)));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_3 [i_1 - 3] [i_1 - 1] [i_1]))) * (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1] [i_1]))));
            arr_6 [i_1] = ((/* implicit */int) var_8);
        }
        var_21 ^= max((((min((20ULL), (((/* implicit */unsigned long long int) var_8)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1792))))), (((/* implicit */unsigned long long int) (_Bool)1)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min(((short)-1800), (arr_7 [i_2])))), (min((((/* implicit */unsigned long long int) (short)-20832)), (4ULL))))), (((/* implicit */unsigned long long int) ((int) arr_8 [i_2])))));
        arr_9 [i_2] = min((((/* implicit */unsigned long long int) var_12)), (18446744073709551587ULL));
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_23 = ((/* implicit */short) var_4);
        var_24 ^= ((/* implicit */int) arr_11 [i_3]);
        var_25 -= var_17;
        arr_14 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (872127481U)));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_26 -= ((/* implicit */short) ((157384350U) - (((/* implicit */unsigned int) ((int) 1980391205)))));
        arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (arr_15 [i_4])));
        var_27 -= ((/* implicit */long long int) ((unsigned char) 15611518338742525640ULL));
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) arr_10 [i_4])));
    }
    var_28 = ((/* implicit */unsigned long long int) var_14);
    var_29 = ((/* implicit */unsigned short) max((((/* implicit */short) var_16)), (((short) ((int) var_15)))));
}
