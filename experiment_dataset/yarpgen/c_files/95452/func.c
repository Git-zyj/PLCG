/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95452
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
    var_14 -= ((/* implicit */unsigned long long int) (unsigned char)2);
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2287543421U)) ? (201326592) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) var_10)) : (var_9)))), (var_3)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_8 [i_4] [23U] [(signed char)5] [(signed char)5])) | (arr_7 [i_0] [i_1] [i_0] [i_1])));
                                var_17 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-8149)) ? (3241036654U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1])) || (((/* implicit */_Bool) -1481745444)))))))) ? (min((var_8), (var_9))) : (((arr_5 [i_0] [i_0] [i_0]) ^ (arr_5 [i_2] [i_0] [i_0])))));
                    var_18 = ((/* implicit */unsigned int) ((max((((3017669157134883677ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2895))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62648))) : (arr_1 [(_Bool)1]))))) ^ (((/* implicit */unsigned long long int) -4LL))));
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)2888)), (arr_8 [i_2] [i_2] [18LL] [i_0]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)62647))))) ? (((int) var_0)) : (var_10))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_21 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_6] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_11 [i_6] [i_6] [i_5] [i_6] [(unsigned short)14])) : (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 90267232)), (3852060196U)))))) ? (((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) arr_14 [i_5])), (arr_18 [i_6]))))) : (((unsigned long long int) arr_15 [i_5] [i_5]))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    {
                        arr_25 [i_5] [i_8] [i_5] = max((((/* implicit */int) var_6)), ((+(((/* implicit */int) arr_3 [i_8] [i_7] [i_7])))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_6])) % (((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8]))) ^ (((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [7LL]))) : (arr_11 [i_5] [i_5] [i_5] [i_7] [(signed char)18])))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-58))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_7]))) : (3578197020U)))) ? (max((((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8]))))), (max((arr_1 [i_6]), (((/* implicit */unsigned long long int) arr_18 [i_6])))))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)-94)))) + (max((((/* implicit */int) arr_14 [i_5])), (var_10))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(7658407572245786333ULL)))) ? (-4271140710611594001LL) : (((/* implicit */long long int) ((int) arr_2 [i_6])))));
        }
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            arr_29 [i_9] = ((/* implicit */signed char) (unsigned short)62641);
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    {
                        arr_35 [i_10] [i_10] [i_10] [i_10] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [7])) ? (((/* implicit */int) (signed char)57)) : (arr_10 [i_9] [i_5] [i_9] [i_9])))) >= (arr_30 [i_5] [(_Bool)1])))) & (arr_16 [i_5] [i_5])));
                        var_25 *= ((/* implicit */short) 2221815163U);
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) (unsigned char)84);
            arr_36 [(signed char)4] [(signed char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_5] [i_5])) ^ (((/* implicit */int) arr_19 [i_9]))));
        }
        var_27 = ((/* implicit */unsigned char) (~((-(1117932096)))));
        var_28 = ((/* implicit */signed char) ((((((((((/* implicit */int) (signed char)-94)) + (2147483647))) >> (((var_0) - (9710678247478821352ULL))))) % (((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [(signed char)18] [i_5])) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_27 [i_5] [i_5] [i_5])))))) ^ ((~(((/* implicit */int) (signed char)61))))));
        arr_37 [i_5] = ((/* implicit */unsigned int) arr_18 [i_5]);
    }
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned int) arr_40 [i_12])) : (arr_39 [(_Bool)1])));
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_14] [i_14] [i_14] [8ULL] [i_16])) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) arr_3 [i_14] [10ULL] [i_14])))))) ? ((+(((((/* implicit */int) arr_3 [i_12] [i_13] [i_13])) * (((/* implicit */int) arr_9 [i_12])))))) : (((arr_47 [i_16] [i_13]) ? (((/* implicit */int) (short)-24337)) : (((/* implicit */int) arr_47 [i_12] [(_Bool)0])))))))));
                            arr_51 [i_13] [i_13] [0ULL] [i_16] [i_16] [i_16] [i_14] = ((((/* implicit */_Bool) arr_42 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)61))))))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) arr_4 [i_12] [i_12] [i_12]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-61))))) : (arr_0 [i_12]))));
                            var_31 = ((/* implicit */unsigned long long int) min(((short)-30928), (var_6)));
                        }
                        for (short i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_13] [i_12]))));
                            arr_56 [i_12] [i_13] [i_14] = ((/* implicit */int) arr_43 [i_17] [i_12]);
                        }
                        var_33 &= ((/* implicit */signed char) (((~(((/* implicit */int) arr_38 [i_12] [i_13])))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62647))) == (((((/* implicit */_Bool) (signed char)58)) ? (arr_7 [i_12] [i_13] [i_13] [(signed char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62647))))))))));
                    }
                } 
            } 
        } 
        arr_57 [i_12] [i_12] = ((/* implicit */int) (~(((-9061967949419397556LL) - (-5871951273526147763LL)))));
    }
}
