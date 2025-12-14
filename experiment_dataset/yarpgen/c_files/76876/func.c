/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76876
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
    var_11 = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
    var_12 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) (unsigned short)15751);
            var_14 = ((/* implicit */unsigned int) (+(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))))));
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 3])) / (((/* implicit */int) (_Bool)1))));
            arr_7 [i_0] = ((/* implicit */_Bool) 7ULL);
            arr_8 [i_0] [i_0] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 2512515202U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            arr_11 [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_3]);
            var_16 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1948224934330376253LL))));
            var_17 += ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (unsigned char)255)))));
        }
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_15 [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_0 + 2]))) && (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 3])) || (((/* implicit */_Bool) (short)-5000))))));
            arr_16 [i_0 + 2] [i_4] [i_4] = ((/* implicit */unsigned char) (((!((!((_Bool)0))))) ? (((unsigned long long int) (signed char)(-127 - 1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_4])))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))))))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_8))));
                            arr_31 [i_5] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)18195)) && ((!(((/* implicit */_Bool) (unsigned char)0))))));
                        }
                    } 
                } 
            } 
            arr_32 [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0 + 1] [i_0 + 2] [i_5] [i_0 + 1]))) != (var_2))))));
            arr_33 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) arr_29 [i_5] [i_5] [i_5]);
            arr_34 [i_5] = ((/* implicit */unsigned long long int) ((long long int) arr_27 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_20 *= ((/* implicit */unsigned char) max((max((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */int) arr_35 [2LL])) - (((/* implicit */int) arr_38 [14LL] [i_9]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) max((arr_36 [(unsigned short)8]), (((/* implicit */unsigned char) arr_38 [10ULL] [i_9]))))) : (((/* implicit */int) arr_36 [12LL])))))));
        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)241))));
        arr_39 [i_9] = ((/* implicit */signed char) arr_37 [i_9]);
    }
}
