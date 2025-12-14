/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60642
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
    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_3)))) ? (((int) (!(var_13)))) : (((/* implicit */int) (!(((var_0) >= (var_14))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -6))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_0 + 1])));
                /* LoopSeq 4 */
                for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (arr_8 [i_3] [i_2] [i_0 + 3])))) ? (((unsigned long long int) arr_2 [i_2] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) / (((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0 + 1])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))));
                        var_26 = ((/* implicit */unsigned long long int) var_11);
                    }
                }
                for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_15 [(signed char)4] [i_0] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_2 [i_1] [i_1])))));
                    var_27 = ((/* implicit */_Bool) (+(4453147988873710435LL)));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)74)) ? (-1918151045) : (((/* implicit */int) (_Bool)1))));
                    var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
                    arr_16 [i_2] [i_2] [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5])) > (((/* implicit */int) var_1)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_5])) / (((/* implicit */int) (unsigned short)15245))))));
                }
                for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    var_30 += ((/* implicit */unsigned short) 8070150669665857344LL);
                    arr_19 [i_6] [i_6] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                    arr_20 [i_0] [i_0 - 2] [i_2] [i_0 - 1] |= ((/* implicit */unsigned short) (+(arr_4 [i_0 + 3] [i_0 + 1])));
                    var_31 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) 1918151038))) : (((((/* implicit */int) (unsigned short)65532)) & (var_17)))));
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (-(arr_13 [i_0] [i_0] [i_0 + 2] [i_0 + 2]))))));
                }
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    var_33 &= ((/* implicit */unsigned short) ((var_11) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14)) || (((/* implicit */_Bool) arr_21 [(unsigned char)10] [(unsigned char)10] [i_1] [i_2] [(unsigned char)10] [i_2]))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_7] [i_0 + 3] [3ULL] [i_2] [i_2] [i_7])) : (((/* implicit */int) (unsigned short)65518))))));
                    arr_24 [i_7] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 + 3] [i_7])) ? (arr_4 [i_0 + 1] [(unsigned short)9]) : (arr_4 [i_0 + 3] [i_2])));
                }
            }
            for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_0 [i_8]))))) != (arr_7 [i_0 + 3] [i_0 + 2] [i_0] [i_0 - 1])));
                /* LoopSeq 4 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_35 = (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_9] [i_8] [i_0] [i_0 + 1] [i_0]))) <= (var_14))));
                    arr_33 [i_1] &= ((/* implicit */_Bool) (+((~(arr_25 [i_1] [i_8] [i_1] [i_1])))));
                    arr_34 [i_0 - 2] [i_1] [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) 10549962280803876295ULL);
                }
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned int) (unsigned short)65512);
                    var_37 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))) >= (arr_27 [i_10] [i_8] [i_8]))))) ^ (((((/* implicit */_Bool) (unsigned short)50291)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8))));
                    arr_38 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_28 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248))))) : (((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))));
                    var_38 = ((/* implicit */unsigned int) 1918151042);
                }
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
                {
                    arr_42 [i_0] [i_8] [i_0 + 3] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (arr_8 [i_0] [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1918151035))))))));
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (_Bool)0))));
                }
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) arr_32 [i_1] [i_8] [i_8]))));
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-21)))))));
                }
            }
            for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 2) 
            {
                arr_50 [i_13] [i_13] [i_0] = ((/* implicit */unsigned long long int) var_5);
                var_42 = arr_47 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 - 1];
                var_43 = ((/* implicit */_Bool) min((var_43), (((((/* implicit */_Bool) arr_35 [i_0 - 2] [i_13 + 1] [i_13 + 1])) && (((/* implicit */_Bool) arr_35 [i_0 + 1] [i_13 + 1] [i_13 - 1]))))));
            }
            /* LoopSeq 4 */
            for (signed char i_14 = 1; i_14 < 13; i_14 += 3) 
            {
                arr_53 [i_14 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_14] [i_1] [i_14 - 1] [i_0])) ? (1) : (arr_39 [i_0 - 2] [i_1] [i_14 - 1] [i_14 + 1])));
                arr_54 [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_14 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) -5256076374473016033LL)) && (((/* implicit */_Bool) arr_25 [i_0] [i_0] [(signed char)8] [i_0]))))) : (((/* implicit */int) var_2))));
            }
            for (long long int i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0 + 3])) ? (((/* implicit */int) ((unsigned short) (unsigned short)15245))) : (var_17)));
                var_45 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
                var_46 = ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_1] [i_15] [i_15]);
                arr_58 [i_15] [i_1] [i_0 + 3] |= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)46)) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        arr_66 [i_16] [i_16] = ((/* implicit */unsigned char) (-(var_8)));
                        var_47 = ((/* implicit */signed char) var_6);
                        var_48 = ((arr_7 [i_17] [i_0 - 1] [i_16] [(unsigned short)13]) >= (arr_7 [i_0] [i_0 - 2] [i_16] [i_16]));
                    }
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))))) : (0U)));
                        var_50 = ((((/* implicit */_Bool) arr_55 [i_0 - 2] [i_16] [i_0 - 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (arr_48 [i_0 + 2] [i_17] [i_0 + 2]));
                    }
                    arr_70 [0] [i_17] [i_16] [i_16] [0] [0] = ((/* implicit */signed char) (_Bool)0);
                    arr_71 [i_16] [i_17] = ((/* implicit */unsigned int) ((long long int) 3ULL));
                    arr_72 [i_0] [i_16] = ((unsigned short) (signed char)-24);
                }
                var_51 ^= ((/* implicit */int) arr_44 [i_1] [i_0]);
                /* LoopSeq 1 */
                for (unsigned char i_20 = 0; i_20 < 14; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_52 = ((signed char) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [i_0]);
                        var_53 -= ((unsigned char) (unsigned short)48);
                    }
                    for (signed char i_22 = 0; i_22 < 14; i_22 += 2) 
                    {
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2290090113U)) ? (((/* implicit */int) var_11)) : (arr_29 [i_20])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((var_11) ? (((/* implicit */long long int) var_17)) : (arr_23 [i_22] [i_22] [(signed char)0] [i_16] [i_1] [i_0])))));
                        var_55 = ((/* implicit */unsigned short) (signed char)-36);
                    }
                    arr_83 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)70)) ? (((((/* implicit */int) var_11)) | (arr_29 [i_16]))) : (((/* implicit */int) arr_31 [i_0] [3U] [i_16]))));
                    arr_84 [i_1] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0 - 2] [i_16] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_74 [i_16] [i_16]))))) : (arr_62 [i_0 + 2] [i_16] [i_0])));
                    var_56 = ((/* implicit */signed char) var_6);
                    var_57 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_0] [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_0 + 2]))));
                }
            }
            for (unsigned char i_23 = 2; i_23 < 12; i_23 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    arr_92 [i_24] [i_23 - 2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_5))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_25 = 2; i_25 < 13; i_25 += 4) 
                    {
                        arr_95 [i_0] [i_1] [i_23 - 1] [i_24] [i_24] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_81 [i_0] [i_1] [(_Bool)1] [i_25] [i_25 + 1] [i_23] [i_25 - 2])) ? (((/* implicit */int) (unsigned short)50291)) : (arr_76 [i_0] [i_0])));
                        arr_96 [i_0 - 2] [(_Bool)1] [i_23 + 1] [i_24] [4ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_0 - 1] [i_23 - 2] [i_23])) ? (arr_56 [i_0 - 1] [i_0 - 1] [i_1]) : (arr_56 [i_0 - 1] [i_1] [i_1])));
                    }
                    for (unsigned int i_26 = 3; i_26 < 12; i_26 += 2) 
                    {
                        arr_100 [i_0] [i_26] [i_0] [i_26] [i_1] [i_24] [i_23] = ((/* implicit */int) var_18);
                        arr_101 [i_0 + 3] [i_0] [i_1] [i_23] [i_0 + 3] [i_26] [10] = ((/* implicit */long long int) ((arr_99 [i_0] [i_23 + 1] [i_26]) + (arr_99 [i_1] [i_23 + 2] [i_26])));
                        var_58 = ((/* implicit */signed char) arr_31 [(unsigned short)3] [i_0] [i_23]);
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_59 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_23 - 2] [i_1] [i_23 + 2])) ? (arr_37 [i_23 + 1] [i_23 + 1] [i_0 + 3] [i_0 + 2]) : (((/* implicit */int) var_15))));
                        var_60 = ((/* implicit */signed char) arr_99 [i_1] [i_1] [i_1]);
                        var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_0 - 2] [i_0 - 1] [i_0 + 3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_24])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_12))))) ? (arr_97 [i_0] [i_0 - 2] [i_23 + 1] [i_23 - 1] [i_24]) : (arr_27 [i_0 + 2] [i_1] [i_23 - 1])));
                    var_63 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_23 + 2] [i_1] [i_23 + 2] [i_0 + 3])) + (((/* implicit */int) var_11))));
                }
                var_64 += ((/* implicit */signed char) arr_25 [i_0] [i_1] [i_1] [i_23]);
                arr_104 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) arr_25 [i_0] [i_0 - 1] [i_1] [i_23 - 1]));
            }
        }
        for (int i_28 = 0; i_28 < 14; i_28 += 4) /* same iter space */
        {
            arr_109 [i_0] = ((((/* implicit */int) arr_43 [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) (unsigned short)18397)));
            arr_110 [i_28] [i_28] = ((/* implicit */int) (+(arr_105 [i_28] [(short)5] [i_0 - 2])));
        }
        for (int i_29 = 4; i_29 < 12; i_29 += 3) 
        {
            var_65 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_48 [i_29 - 3] [i_0] [i_0 + 1]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_93 [i_0] [i_0 + 3] [i_0 - 2] [6ULL] [i_0 - 2]))))));
            var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_102 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_29] [i_29]))))) ? (((/* implicit */unsigned long long int) ((arr_28 [i_0 - 2]) - (arr_3 [i_0])))) : (((((/* implicit */_Bool) arr_12 [i_29] [i_29] [i_0] [i_0 - 1])) ? (arr_36 [i_0] [i_0] [i_0] [i_29]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_29] [i_29] [i_29] [i_29] [i_0] [i_0] [i_0])))))));
        }
        for (int i_30 = 2; i_30 < 10; i_30 += 1) 
        {
            var_67 ^= ((/* implicit */unsigned int) (+(arr_108 [i_0 + 1] [i_0 + 3])));
            arr_116 [i_0] [i_30] [i_30] = ((/* implicit */unsigned int) (~(arr_11 [i_30] [i_30 + 3] [i_30] [i_30] [i_30 + 4] [13LL])));
            var_68 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)38))));
            var_69 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_0] [12] [i_30] [i_30])) ? (((((/* implicit */int) var_19)) & (arr_39 [i_0] [i_30] [i_0] [i_0]))) : (((int) arr_111 [i_0] [3ULL]))));
            var_70 = (~(((/* implicit */int) arr_2 [i_0 - 1] [i_30])));
        }
        arr_117 [i_0 + 1] = (~((~(((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
    {
        var_71 = ((/* implicit */unsigned short) min((var_71), (((/* implicit */unsigned short) arr_119 [i_31]))));
        var_72 = ((/* implicit */int) (_Bool)1);
    }
    for (signed char i_32 = 1; i_32 < 9; i_32 += 1) 
    {
        var_73 -= ((/* implicit */unsigned long long int) var_14);
        arr_123 [(_Bool)1] = ((/* implicit */unsigned long long int) min((((min((((/* implicit */unsigned int) arr_26 [i_32] [i_32] [i_32 + 1] [(_Bool)1])), (arr_115 [6]))) << (((/* implicit */int) (signed char)12)))), (((/* implicit */unsigned int) arr_37 [i_32] [i_32] [i_32] [i_32]))));
        var_74 &= ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (max((arr_61 [i_32 + 1] [i_32 + 1] [i_32]), (((/* implicit */int) arr_114 [i_32 + 1] [i_32 + 1] [(_Bool)1]))))));
        var_75 = ((/* implicit */long long int) arr_45 [7ULL] [i_32 + 1] [i_32] [7ULL] [i_32] [i_32 - 1]);
    }
}
