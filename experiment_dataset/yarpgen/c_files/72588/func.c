/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72588
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (short)-12631))))) ? (((/* implicit */int) (short)-12602)) : (((/* implicit */int) (unsigned short)39824))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_0] [i_1 + 4] [(signed char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12631))) ^ (4607182418800017408ULL)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1 + 3])) < (((/* implicit */int) var_14)))))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_0] [i_1 + 3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)13])))) : (((/* implicit */int) arr_3 [i_1 + 3] [i_1 - 1]))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)1] [i_1 - 2] [i_2])) ? (((arr_4 [19]) & (((/* implicit */int) arr_6 [i_2])))) : (((((/* implicit */int) var_9)) % (arr_4 [6])))));
                var_18 = ((/* implicit */_Bool) ((((arr_4 [i_2]) % (var_7))) / (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))));
                var_19 = ((/* implicit */unsigned int) (~(arr_7 [i_1] [i_1] [i_1 - 1] [i_1 + 2])));
            }
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                var_20 = ((/* implicit */long long int) (+(((arr_11 [i_0] [i_0] [i_0] [16LL]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                arr_13 [(signed char)17] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 2])) : (((/* implicit */int) arr_2 [i_0]))))) || (((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 2]))));
            }
            for (int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                arr_17 [i_4] [i_1] [i_4] = ((/* implicit */int) arr_3 [i_0] [i_0]);
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    arr_22 [i_4] [i_1] = ((/* implicit */unsigned char) ((signed char) ((arr_1 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27503))))));
                    var_21 -= (+(((/* implicit */int) arr_21 [i_1 + 3] [i_5])));
                    arr_23 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-124)) - (((/* implicit */int) (signed char)-64)))) < (((/* implicit */int) var_14))));
                    var_22 = ((/* implicit */signed char) ((8929125711717977322ULL) ^ (((/* implicit */unsigned long long int) arr_15 [i_1 - 2] [(signed char)1] [i_1 + 1] [i_1 - 1]))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 3]))) * (((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4])))))));
                }
                for (long long int i_6 = 3; i_6 < 19; i_6 += 4) 
                {
                    var_24 = ((arr_12 [i_1 - 2]) / (arr_12 [i_1 + 3]));
                    arr_27 [i_4] = ((/* implicit */unsigned short) ((short) arr_2 [i_0]));
                }
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) arr_16 [i_1 + 3] [i_1 + 1] [i_1 - 2]);
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0] [i_1 + 3]));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11))))) >= (1927161842))))));
                    }
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (short)5100)))) : (1927161842)));
                }
                var_29 = ((/* implicit */unsigned char) arr_18 [i_0] [i_1 - 1] [i_4] [i_1 + 3] [i_1 - 2] [i_4]);
            }
            arr_32 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) arr_20 [i_1 - 1] [(unsigned short)14] [i_1 + 1] [(unsigned short)16] [i_1 - 2]))));
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            var_30 = ((/* implicit */unsigned short) var_15);
            var_31 = ((short) (+(1880306428784693947ULL)));
        }
        var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)103))));
    }
    /* LoopSeq 3 */
    for (int i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        /* LoopSeq 4 */
        for (short i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            var_33 *= ((/* implicit */signed char) ((((/* implicit */int) max((arr_39 [i_11]), (arr_39 [i_11])))) * (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_39 [i_10])) : (((/* implicit */int) var_14))))));
            arr_41 [(unsigned short)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_10] [i_11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)54930))))), (arr_30 [i_10] [(unsigned char)19] [i_10] [i_11] [i_11]))))) : ((((!(((/* implicit */_Bool) (unsigned short)7258)))) ? (max((((/* implicit */unsigned long long int) var_13)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_10] [i_11])) && (((/* implicit */_Bool) var_10))))))))));
            arr_42 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) var_11);
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_7 [i_10] [i_10] [(unsigned char)9] [i_11]))) : (((/* implicit */long long int) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) arr_1 [i_10] [i_11])) ? (arr_15 [(unsigned char)11] [i_11] [i_11] [i_10]) : (var_12)))))))))));
        }
        for (short i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            arr_46 [i_12] = ((((/* implicit */int) (short)10588)) | (((/* implicit */int) var_9)));
            arr_47 [i_10] [i_12] [i_12] = ((/* implicit */long long int) arr_1 [i_12] [i_12]);
            var_35 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)25733))) && (((/* implicit */_Bool) (signed char)-37))))), ((~(((/* implicit */int) arr_40 [i_10]))))));
            var_36 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) max((((/* implicit */unsigned char) (!(var_1)))), (max((((/* implicit */unsigned char) var_15)), (arr_16 [i_12] [i_10] [i_10]))))))));
        }
        for (long long int i_13 = 4; i_13 < 16; i_13 += 1) 
        {
            var_37 = ((/* implicit */_Bool) (~(var_13)));
            arr_51 [(unsigned short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (short)12629))) ? (((((/* implicit */_Bool) (unsigned short)52493)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((var_8) << (((((/* implicit */int) var_9)) - (56))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)32749))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13 - 1])))))));
            var_38 |= ((/* implicit */signed char) max((((/* implicit */int) arr_18 [i_13] [i_13] [i_10] [i_10] [(signed char)20] [i_13 + 1])), (((((/* implicit */int) arr_10 [i_10] [i_10] [i_13] [3LL])) & (((/* implicit */int) (signed char)127))))));
            var_39 = ((/* implicit */signed char) arr_33 [i_10] [(signed char)4]);
        }
        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))) : (((/* implicit */int) arr_40 [i_14]))));
            arr_54 [i_14] [i_14] = var_12;
        }
        var_41 = ((/* implicit */_Bool) min(((unsigned short)25733), (((/* implicit */unsigned short) min(((unsigned char)96), (((/* implicit */unsigned char) max(((signed char)36), ((signed char)-61)))))))));
    }
    for (signed char i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_16 = 2; i_16 < 14; i_16 += 2) 
        {
            arr_60 [i_16] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (signed char)116)) : (2064241210)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) arr_31 [i_16] [i_16] [i_16] [i_16 - 2] [i_16])))) & (((/* implicit */int) (signed char)37))));
            var_42 = ((/* implicit */unsigned long long int) var_14);
            var_43 = ((/* implicit */unsigned short) arr_31 [i_16] [(_Bool)1] [i_16] [i_16] [i_16]);
            /* LoopSeq 1 */
            for (unsigned int i_17 = 0; i_17 < 18; i_17 += 1) 
            {
                var_44 *= ((/* implicit */signed char) arr_0 [i_17]);
                arr_64 [i_15] = min((((((/* implicit */_Bool) var_0)) ? (1604064693) : (((/* implicit */int) (unsigned char)110)))), (((/* implicit */int) ((unsigned short) var_12))));
            }
        }
        for (signed char i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            arr_67 [i_15] [i_18] [(signed char)14] |= ((/* implicit */int) ((((/* implicit */int) (((~(((/* implicit */int) var_1)))) <= (((/* implicit */int) arr_25 [i_18] [i_18] [i_18] [i_18] [i_18]))))) > ((-(((/* implicit */int) arr_10 [i_18] [19] [19] [i_15]))))));
            arr_68 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_15] [i_15] [11] [i_18] [i_18])) ? (var_12) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) min((((/* implicit */short) var_14)), ((short)12630)))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_55 [i_15]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)20)) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (short)12630))))))) : (((((/* implicit */_Bool) max((8178957617112137960ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_34 [i_18] [i_18])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)44203)))) : (((/* implicit */int) min((((/* implicit */short) var_14)), ((short)21109))))))));
        }
        var_45 = ((/* implicit */short) (-2147483647 - 1));
    }
    for (signed char i_19 = 0; i_19 < 18; i_19 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_20 = 2; i_20 < 17; i_20 += 1) 
        {
            var_46 = ((/* implicit */unsigned char) ((max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_62 [i_19] [i_19] [i_19] [i_20])) : (arr_33 [i_19] [(short)13])))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((+(((/* implicit */int) var_2)))) : (957401869))))));
            arr_73 [i_19] [i_19] = arr_29 [i_19] [i_19] [i_20 + 1] [i_20];
        }
        arr_74 [(short)3] = ((/* implicit */signed char) max((((/* implicit */unsigned char) arr_3 [i_19] [i_19])), (max((((/* implicit */unsigned char) arr_3 [i_19] [i_19])), ((unsigned char)128)))));
        var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_19] [10] [i_19] [i_19] [i_19])) ^ (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) min((arr_28 [i_19] [i_19] [i_19] [i_19] [(short)20]), (arr_28 [i_19] [i_19] [i_19] [(unsigned char)6] [i_19])))) : (((((/* implicit */int) arr_28 [i_19] [i_19] [i_19] [i_19] [18])) | (((/* implicit */int) arr_28 [i_19] [i_19] [i_19] [i_19] [i_19])))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_21 = 3; i_21 < 16; i_21 += 4) 
        {
            var_48 ^= ((/* implicit */_Bool) (short)-21110);
            var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_24 [i_21 - 3] [i_21 - 3]), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) == ((-9223372036854775807LL - 1LL)))))))) ? (((/* implicit */int) arr_57 [i_21 + 2] [i_21 - 1])) : (((((((/* implicit */int) var_1)) << (((((/* implicit */int) (signed char)-63)) + (65))))) * (((((/* implicit */_Bool) arr_19 [i_21] [(unsigned short)20] [i_19] [i_19])) ? (((/* implicit */int) var_6)) : (arr_71 [(unsigned short)14])))))));
            arr_77 [i_19] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [i_19] [i_19])))) ? (max((arr_33 [(signed char)3] [i_21]), (((/* implicit */int) var_14)))) : (((/* implicit */int) var_10)))) * (((/* implicit */int) var_6))));
        }
    }
}
