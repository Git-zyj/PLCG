/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72737
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
    var_17 = ((/* implicit */short) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [(unsigned short)0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned short) arr_1 [2LL] [i_0]);
        arr_3 [i_0] = (((+(arr_1 [i_0] [i_0]))) < (((((/* implicit */_Bool) arr_1 [13LL] [i_0])) ? (arr_1 [(unsigned short)14] [i_0]) : (arr_1 [i_0] [i_0]))));
        arr_4 [(unsigned short)3] [(unsigned short)5] = ((/* implicit */_Bool) ((arr_1 [i_0] [(short)0]) / (arr_1 [i_0] [0LL])));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_1]))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5257259996118531062LL)) ? (arr_5 [11ULL]) : (arr_5 [i_1])))) ? (((((/* implicit */_Bool) 5257259996118531085LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))) : (1524603008U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_1]) <= (arr_5 [i_1])))))));
            var_19 = ((/* implicit */unsigned int) arr_6 [i_2]);
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [i_1] [(signed char)0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [7LL] [5U] [7LL])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) * (0LL)))));
            arr_16 [i_1] [3LL] [i_3] = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1]);
            var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_1]))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5257259996118531057LL)) ? (-5257259996118531062LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1])))))) ? (((/* implicit */int) ((signed char) arr_11 [i_1]))) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned short)14415)))));
            arr_19 [i_1] [(short)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) || (((/* implicit */_Bool) ((-3104373898277132573LL) / (arr_18 [(signed char)5] [i_4] [i_1]))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_22 = ((/* implicit */_Bool) ((arr_11 [i_1]) ? (max((4294967283U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)51120)) ? (((/* implicit */int) (unsigned short)51123)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_1])))))));
            arr_22 [i_1] [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)79)) : (arr_21 [i_5] [i_1])))) ? ((-(((/* implicit */int) min((((/* implicit */short) arr_9 [i_1])), (arr_7 [22ULL])))))) : (((/* implicit */int) var_8))));
        }
        var_23 = arr_6 [18];
        var_24 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_1])))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1])) <= (((/* implicit */int) arr_9 [i_1])))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        arr_26 [i_6] = ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_17 [i_6] [i_6] [2ULL]))))) << ((((+(((/* implicit */int) (unsigned short)14415)))) - (14403))));
        var_25 = ((/* implicit */unsigned short) (_Bool)1);
        var_26 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_6]))));
        arr_27 [i_6] [i_6] = ((/* implicit */long long int) arr_24 [i_6]);
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -5257259996118531056LL)) > (18446744073709551615ULL))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 1085920154U)) | (5257259996118531062LL))) & (((/* implicit */long long int) (~(var_13)))))))));
}
