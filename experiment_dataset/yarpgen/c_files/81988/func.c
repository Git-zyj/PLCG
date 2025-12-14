/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81988
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-7238))) & (2U))) & (((/* implicit */unsigned int) (+(-1283449097))))))));
    var_19 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_20 = var_14;
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) (unsigned short)4)), (((long long int) var_6)))), (((/* implicit */long long int) (-(((/* implicit */int) (short)32760)))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [(unsigned short)10]))));
                            var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 2]))) + (arr_1 [i_3 + 2]))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 3; i_5 < 18; i_5 += 1) /* same iter space */
        {
            arr_21 [(unsigned short)12] |= ((/* implicit */short) ((int) (+(arr_15 [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 3] [i_5 - 3]))));
            var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_11)) <= (((/* implicit */int) (signed char)95))))))), (((((/* implicit */_Bool) arr_13 [i_0])) ? ((~(arr_5 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)18])))))));
            arr_22 [i_0] [i_0] [i_5 + 2] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_20 [i_5] [i_5 + 1] [i_5 - 3])) && (((/* implicit */_Bool) var_2)))));
            arr_23 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1249883571796303250ULL), (((/* implicit */unsigned long long int) (signed char)-110))))) || (((/* implicit */_Bool) min((-2527429526265275180LL), (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5 + 1]))))));
        }
        for (unsigned short i_6 = 3; i_6 < 18; i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_13 [i_0])))) : ((+(((/* implicit */int) arr_17 [i_0] [i_6 - 3] [i_0] [i_6] [i_0] [(short)15] [i_0])))))), (((/* implicit */int) ((unsigned short) (~(arr_1 [i_0])))))));
            var_24 = ((/* implicit */int) ((unsigned int) (unsigned short)4341));
        }
        for (unsigned short i_7 = 3; i_7 < 18; i_7 += 1) /* same iter space */
        {
            arr_29 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) arr_17 [i_7] [i_7 + 2] [i_7] [i_7 - 2] [i_7] [i_7] [i_7])));
            var_25 *= ((((/* implicit */_Bool) ((11169711246288099362ULL) + (((/* implicit */unsigned long long int) -4664469632320442427LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_16 [i_7] [i_7] [i_0] [i_0] [i_0] [6])) : (arr_20 [i_7 - 1] [i_0] [i_0])))) ? (((/* implicit */int) var_0)) : (var_2)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7 + 1]))) + (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((+(6911778681769069582ULL))))));
        }
        arr_30 [(signed char)8] &= ((/* implicit */unsigned long long int) (~((~(833971071)))));
        var_26 = ((/* implicit */int) arr_24 [i_0] [i_0] [i_0]);
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_3 [i_0])) & (var_2))))))));
    }
    for (int i_8 = 3; i_8 < 22; i_8 += 4) 
    {
        var_28 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 2; i_9 < 21; i_9 += 3) 
        {
            for (unsigned short i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                {
                    arr_40 [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_38 [i_8 - 1])) ? (min((((/* implicit */long long int) arr_37 [i_8] [i_8 - 2])), (var_1))) : (((((/* implicit */_Bool) var_9)) ? (6166406697662926490LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_38 [11ULL]) | (var_12)))) ? (((/* implicit */int) arr_31 [i_8 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_35 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2])) == (((/* implicit */int) arr_32 [i_8]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 1) 
                    {
                        arr_43 [i_8] [(unsigned short)20] [(signed char)0] [i_11 - 1] &= ((/* implicit */_Bool) ((6297935056398450002LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))));
                        arr_44 [i_8] [i_9 + 2] [i_10] [i_11] = ((/* implicit */long long int) (((-(((((/* implicit */int) var_17)) << (((((/* implicit */int) (unsigned short)28777)) - (28759))))))) - ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_11])))))))));
                        arr_45 [i_10 + 1] [i_9 + 1] [i_10 + 1] [12LL] |= ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) arr_42 [i_11 - 1] [7ULL] [7ULL] [i_11] [i_11 + 1])), (max((((/* implicit */short) var_13)), (arr_36 [i_11]))))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_12 = 3; i_12 < 20; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_8] [i_8 - 1] [i_8 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_11 + 1] [i_9 + 3] [i_12])) ? (((/* implicit */int) arr_49 [(_Bool)1] [i_9] [i_11 + 1] [i_11] [i_12] [i_11 + 1] [(unsigned short)17])) : (((/* implicit */int) arr_42 [i_8] [i_9] [i_11 - 1] [(_Bool)1] [7ULL]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64315))) ^ (1712614413U)))));
                            var_30 = ((/* implicit */long long int) (_Bool)1);
                            var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (unsigned short)30622)) : (((/* implicit */int) (signed char)100))))) | (((((/* implicit */_Bool) (short)15088)) ? (1263816948U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55588)))))));
                        }
                        for (long long int i_13 = 3; i_13 < 21; i_13 += 2) 
                        {
                            var_32 = ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (unsigned char)16)))) : ((+(arr_51 [i_11 + 1] [5LL]))));
                            var_33 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_50 [i_8] [i_8 + 2] [i_9] [i_10] [i_10 - 1] [(unsigned short)9] [i_13 + 3])))) % ((((_Bool)1) ? (((/* implicit */int) var_10)) : (-1832592444)))))) - (-9223372036854775782LL)));
                            var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(63U))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_56 [i_8] [i_8] [i_10] [i_8] = ((/* implicit */short) arr_34 [i_8] [i_8] [i_10]);
                            var_35 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8] [i_9])) ? (((/* implicit */int) var_3)) : (var_2))))));
                            arr_57 [i_8] [i_9] [i_11 - 1] [i_14] = ((((/* implicit */int) arr_31 [i_8 + 2])) >> (((((/* implicit */int) arr_31 [i_8 - 2])) - (3549))));
                            arr_58 [i_14] [i_8] [i_11 + 1] [i_11 - 1] [i_10 + 2] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2084598940U)) ? (3985850104U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78)))))) ? (((/* implicit */int) (unsigned char)232)) : (((((/* implicit */_Bool) 12984237530829086991ULL)) ? (((/* implicit */int) (unsigned short)62574)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)123))))) ? (((/* implicit */int) max(((unsigned short)22), (((/* implicit */unsigned short) (unsigned char)203))))) : (min((((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (short)24571)))), (((((/* implicit */_Bool) arr_35 [i_15] [i_15] [i_15])) ? (((/* implicit */int) (unsigned short)30720)) : (((/* implicit */int) arr_37 [i_8] [i_10]))))))));
                            var_37 = ((/* implicit */unsigned char) ((var_7) ? ((+(2619336655308806115LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_36 [i_8 + 2]), (((short) 18446744073709551605ULL))))))));
                        }
                    }
                    for (unsigned char i_16 = 3; i_16 < 21; i_16 += 1) 
                    {
                        arr_63 [i_9] [i_8] [(unsigned char)16] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_60 [i_8] [i_8]))))));
                        var_38 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((long long int) arr_50 [i_16] [i_8] [i_16 + 3] [i_16] [(signed char)22] [i_9 + 1] [i_8]))))), (18446744073709551593ULL)));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17))));
                        var_40 = ((/* implicit */signed char) (+(4U)));
                    }
                }
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned short) ((long long int) var_5));
}
