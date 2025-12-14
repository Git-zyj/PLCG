/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81271
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) 665320899U)) - (var_3))) < (((/* implicit */unsigned long long int) var_1))))))));
    var_11 = var_2;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (40ULL) : (min((18446744073709551601ULL), (((/* implicit */unsigned long long int) (unsigned char)21))))))) ? (-3814924232369094854LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))))));
        var_13 = ((/* implicit */unsigned short) (signed char)57);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)70))))) >= (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) var_2)) : (1217343560299626996LL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_3] [3LL] [i_5] = ((/* implicit */int) ((max(((-(((/* implicit */int) (signed char)11)))), (((/* implicit */int) (signed char)127)))) < (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)63))))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) : (4149609901U)))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)33)) << (((((/* implicit */int) (unsigned char)234)) - (231)))))))) % (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-34)))))));
                                arr_19 [i_1] [i_2] [i_1] [i_4] [i_5] = ((/* implicit */short) ((arr_15 [i_1] [11ULL] [i_3] [1U] [11ULL]) ? ((+(((((/* implicit */int) (unsigned char)168)) >> (((((/* implicit */int) (unsigned char)189)) - (171))))))) : (((/* implicit */int) (short)32759))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) var_9)), (20ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551595ULL)) && (((/* implicit */_Bool) var_2))))))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)23)), ((short)7689)))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) > (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2)));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            {
                                arr_35 [i_10] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)43938)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (short)26869))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_7 + 2] [i_7 - 1] [i_7 - 1])) - (((/* implicit */int) var_5))));
                                arr_36 [i_6] [i_6] [i_6] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */short) 18446744073709551595ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (var_2)));
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6])) / (((/* implicit */int) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6]))));
        arr_37 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18ULL)) && (((/* implicit */_Bool) var_7))));
    }
    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        arr_40 [i_11] = (~(((((((/* implicit */_Bool) (signed char)113)) || (((/* implicit */_Bool) (signed char)-113)))) ? (((/* implicit */int) arr_38 [i_11])) : (((((/* implicit */int) (signed char)-114)) | (((/* implicit */int) (signed char)-78)))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) (unsigned short)17728)) - (17691)))))) ? (((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) (unsigned char)130)))) : (((((/* implicit */int) var_6)) & (((/* implicit */int) (_Bool)1)))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) (short)17049))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_8))))), (var_0)))));
    }
}
