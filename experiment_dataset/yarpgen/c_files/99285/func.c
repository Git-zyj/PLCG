/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99285
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
    var_12 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-(min((((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 + 2])), (min((arr_1 [i_0]), (arr_1 [i_0]))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (unsigned short)12058);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            var_14 = ((unsigned short) (unsigned short)12032);
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0U)))))));
        }
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 2] [2LL] [i_0 + 2]))) & (-212192548653092201LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) max((arr_0 [(signed char)8] [(signed char)8]), (((/* implicit */unsigned short) (unsigned char)239)))))) > (max((((/* implicit */long long int) (unsigned char)54)), (8376398153785746095LL))))) ? ((+(((((/* implicit */_Bool) (unsigned short)12057)) ? (707466351U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) (unsigned short)28736)) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2])))))))));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)187)), ((unsigned short)48696))))) : (((((/* implicit */long long int) var_1)) ^ (arr_6 [i_2])))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)14363)) && (((/* implicit */_Bool) 17791028657938059747ULL)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)0))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28736)))))))) : (arr_1 [4LL])));
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned short) arr_13 [i_3] [i_3]));
        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [1LL] [1LL]))) : (arr_12 [i_3]))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))) : (0)));
    }
}
