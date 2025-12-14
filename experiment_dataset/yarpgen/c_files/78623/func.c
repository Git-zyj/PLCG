/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78623
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (18446744073709551615ULL)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [0LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (short)26701)))) : ((-(((/* implicit */int) arr_0 [i_0] [4ULL]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) var_4);
                    arr_11 [i_0] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2 - 2] [i_2 + 2] [i_2 + 1]))))), (((((/* implicit */_Bool) (unsigned short)20764)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) : (min((0ULL), (0ULL))))));
                }
            } 
        } 
        arr_12 [(short)14] [(short)14] |= ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_9 [i_0] [8] [i_0]))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        arr_13 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [(signed char)6]);
    }
    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */signed char) (-((~(12ULL)))));
        arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_14 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_15 [i_3]), (var_9)))) || ((!(((/* implicit */_Bool) -591043593930259509LL))))))))));
        arr_18 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)9));
    }
}
