/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8950
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_1 - 1] [i_1] [i_1] [i_3] |= ((/* implicit */short) (+(arr_3 [i_0] [i_1 + 2])));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+((+(((/* implicit */int) (short)32767)))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_8 [i_1 + 2] [i_1] [i_1 + 1] [4]), (arr_8 [i_1] [i_1] [i_1 + 2] [i_1])))), (((((/* implicit */_Bool) -1156057671)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4136))) : (5600005857238759917LL)))));
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [i_0])) / (arr_5 [(unsigned char)6] [i_2] [i_1] [i_0]))))), ((-(arr_7 [i_1 + 2] [15ULL] [i_1 + 2] [i_1 + 2] [i_1 + 1])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) (+(var_12)));
                        var_23 = ((/* implicit */int) ((arr_11 [i_0] [i_1 - 1] [i_2]) + (2305840810190438400ULL)));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */int) ((arr_18 [i_0] [i_1] [i_0] [i_6]) ^ (((/* implicit */long long int) arr_1 [i_0]))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51013)) ? (arr_16 [i_1 + 1] [i_1 + 1] [i_6 + 2]) : (arr_16 [i_1 + 1] [i_1 + 2] [i_6 + 1])));
                            arr_20 [i_1] [i_1] [23] [i_5] [i_6 + 1] = ((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_1]);
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 1) 
                    {
                        var_26 *= ((/* implicit */signed char) arr_22 [i_0] [(short)2] [i_2] [i_0]);
                        /* LoopSeq 1 */
                        for (long long int i_8 = 3; i_8 < 23; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_15))))) > (max((((/* implicit */int) arr_0 [i_2] [i_8])), (arr_21 [i_8] [i_2] [i_1]))))) ? (max((((/* implicit */unsigned int) var_17)), (arr_1 [i_8]))) : (arr_16 [i_1 + 2] [i_2] [i_7])));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [(unsigned char)19] [i_1 - 1])) * (((arr_17 [i_0] [i_2]) ? (arr_5 [(short)4] [(short)4] [i_2] [i_7 + 1]) : (arr_5 [(short)16] [i_7 - 1] [15U] [i_7 + 1])))));
                            var_29 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_10)) : (arr_21 [i_2] [i_7] [i_2]))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) >= (arr_11 [i_1 + 1] [i_2] [i_2]))) ? ((+(-5600005857238759908LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2019699703))))))))));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */signed char) ((arr_15 [i_9] [i_1 + 2] [i_1 + 2] [i_2] [i_9] [i_2]) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (arr_7 [i_0] [i_0] [i_2] [i_9] [i_2]))) - (16133372943337231853ULL)))));
                        arr_28 [i_1] [i_2] [i_9] = ((/* implicit */short) arr_27 [i_1] [i_1] [i_1] [i_0]);
                    }
                    for (unsigned char i_10 = 2; i_10 < 24; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) var_10);
                        var_32 = ((/* implicit */unsigned short) (+(3426883706U)));
                    }
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_10 [(signed char)24] [i_2] [i_2] [i_11])), (arr_11 [i_1 + 2] [i_1 + 1] [i_1 - 1])));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_11])) ? (67108736) : (((/* implicit */int) (unsigned char)141))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_12 = 1; i_12 < 24; i_12 += 1) 
                    {
                        arr_36 [i_0] [i_1] [i_12 - 1] [i_1] = ((/* implicit */short) ((signed char) ((5600005857238759922LL) | (arr_15 [i_1] [(_Bool)1] [i_2] [i_1] [i_1] [i_0]))));
                        var_35 = ((/* implicit */short) arr_7 [i_0] [i_1] [i_2] [i_2] [(short)21]);
                        var_36 = ((((/* implicit */_Bool) arr_2 [i_12 - 1])) ? (((/* implicit */int) arr_2 [i_12 + 1])) : (((/* implicit */int) arr_2 [i_12 - 1])));
                        var_37 = ((/* implicit */unsigned int) arr_34 [i_12 + 1] [i_2] [i_0] [i_0]);
                    }
                    for (long long int i_13 = 1; i_13 < 24; i_13 += 3) 
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) max(((signed char)-108), (((/* implicit */signed char) ((((/* implicit */_Bool) 31052020U)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))))))))));
                        /* LoopSeq 3 */
                        for (long long int i_14 = 1; i_14 < 22; i_14 += 3) 
                        {
                            var_38 = ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((int) arr_24 [i_2] [i_1] [i_0])));
                            arr_45 [i_0] [i_0] [i_1] [i_1] [i_1] [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) -3869013378974250618LL)) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_16))) | (arr_15 [i_0] [i_0] [i_0] [0U] [i_0] [i_14 + 3]))), (((/* implicit */long long int) arr_32 [i_1 - 1] [i_13] [i_1] [i_14 + 3] [i_14 + 2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1156057671)) ? (((/* implicit */int) (signed char)-23)) : (var_11))))));
                        }
                        /* vectorizable */
                        for (short i_15 = 2; i_15 < 24; i_15 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned short) ((arr_15 [i_15 - 1] [i_13 - 1] [i_1 + 2] [i_1 + 1] [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_31 [24LL] [i_15 - 2] [i_15 - 2])))));
                            var_40 = ((/* implicit */_Bool) ((arr_15 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2] [i_13 - 1] [i_15 - 1]) | (var_7)));
                            arr_48 [i_0] [i_2] [i_13] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) arr_13 [i_1] [i_1])))) >> (((((((/* implicit */_Bool) arr_47 [i_15] [i_13] [i_2] [i_1 - 1] [i_0])) ? (((/* implicit */int) (unsigned short)7319)) : (((/* implicit */int) (unsigned char)132)))) - (7296)))));
                        }
                        for (short i_16 = 2; i_16 < 24; i_16 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5008724)) ? (((((/* implicit */_Bool) (-(5008724)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_13] [i_16])) ? (-5600005857238759908LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)70)))))) : (((((/* implicit */_Bool) arr_51 [i_0])) ? (arr_27 [i_0] [i_1] [i_0] [i_13]) : (((/* implicit */unsigned long long int) arr_21 [i_2] [i_13 + 1] [i_16 - 1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_16 [i_13 + 1] [i_1] [i_1])) ? (arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [i_13] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */unsigned int) arr_21 [i_0] [i_1 + 1] [i_2]))))))))));
                            var_42 = ((/* implicit */_Bool) (((+(((((/* implicit */int) (signed char)102)) / (-1156057671))))) ^ ((+(((/* implicit */int) (signed char)119))))));
                            arr_52 [i_0] [i_2] [i_2] [i_1] [i_16] [i_16] = ((/* implicit */short) var_11);
                            var_43 |= ((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)51013)) >= (((/* implicit */int) (unsigned short)21897)))))));
                        }
                        arr_53 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_51 [i_1])))) ? (((/* implicit */int) arr_39 [i_13 - 1])) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_13])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_14))))))) ? (arr_34 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_29 [i_13] [i_2] [(signed char)3] [i_0] [i_0]))));
                        arr_54 [i_0] [i_1] [(short)22] [(short)22] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58217)) ? (((/* implicit */int) (unsigned short)43673)) : (((/* implicit */int) (unsigned short)7340))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)199))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            {
                var_44 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_17] [i_17] [i_17] [i_17] [i_18] [i_17] [i_17]))) >= (((((/* implicit */_Bool) ((-5600005857238759923LL) % (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) ? (((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8250))) : (-4279880556683586525LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_38 [i_17] [i_17] [i_18] [i_18] [i_18])))))))));
                arr_60 [i_17] [i_18] [i_18] = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) arr_39 [i_17])) | (((int) var_13)))) : ((-(((/* implicit */int) ((var_8) <= (((/* implicit */int) arr_17 [i_17] [i_17]))))))));
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
    var_46 = ((/* implicit */short) var_2);
}
