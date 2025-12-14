/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99612
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23196))) : (4805010583587944083ULL));
        var_16 = ((/* implicit */int) ((((arr_0 [i_0 + 1]) ? (var_9) : (((/* implicit */unsigned long long int) (-(0)))))) & (((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [4ULL]))))) : (arr_2 [i_0 - 1] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (-(min((((((/* implicit */unsigned long long int) arr_3 [(_Bool)1] [i_1])) * (18446744073709551615ULL))), (((((/* implicit */_Bool) 2288345756U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23196)))))))));
        var_18 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) var_14)) ^ (((((/* implicit */_Bool) arr_4 [i_1])) ? (1ULL) : (4095ULL))))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))));
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
        var_20 |= ((/* implicit */_Bool) (~(arr_2 [i_1] [i_1])));
    }
    for (short i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_2]) + (((/* implicit */unsigned long long int) var_14))))) ? (min(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_6 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)23195)) & (((/* implicit */int) (_Bool)1))))))) : (13641733490121607533ULL)));
        var_22 = arr_7 [i_2 + 2];
    }
    var_23 = ((((((/* implicit */_Bool) var_0)) ? (min((18446744073709551601ULL), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17)))))))) | (((/* implicit */unsigned long long int) var_14)));
}
