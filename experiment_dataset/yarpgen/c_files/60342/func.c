/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60342
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)159)) / (14)))) ? (((9223372036854775799LL) << (((((-2001424861104016873LL) + (2001424861104016892LL))) - (19LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)255)) ^ (((/* implicit */int) (_Bool)1))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0 + 1])) - (46812))))) : (((((/* implicit */int) (unsigned char)0)) >> (((/* implicit */int) (_Bool)1))))));
        var_16 = min((((/* implicit */signed char) ((((/* implicit */int) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) (short)255))))) < (((((/* implicit */_Bool) 536870912)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (signed char)-111))))))), (((signed char) arr_1 [i_0 + 1])));
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-248)), (2147483647)))) && (((((/* implicit */_Bool) arr_1 [i_0 + 1])) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))))));
    }
    var_17 = ((long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) (unsigned short)47458);
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
            arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2001424861104016856LL)) || (((/* implicit */_Bool) -1)))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) (unsigned char)186))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(16991455111334326856ULL)))) ? (((/* implicit */int) arr_1 [i_1])) : (max((var_7), (2147483647))))))));
            arr_11 [i_1] [(signed char)2] [i_2] = (signed char)113;
        }
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_20 -= ((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) arr_13 [i_1] [i_3] [8])) : (((/* implicit */int) (_Bool)1)))) == (((((/* implicit */_Bool) arr_14 [i_1] [i_3] [9LL])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (signed char)-39))))))), (((((/* implicit */int) ((((/* implicit */int) (short)244)) <= (-8)))) >> ((((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))) - (18446744073709551602ULL)))))));
            /* LoopSeq 2 */
            for (int i_4 = 2; i_4 < 11; i_4 += 1) /* same iter space */
            {
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_15 [i_1]);
                var_21 = ((/* implicit */int) min((var_21), ((~(((/* implicit */int) (signed char)111))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) 814924456)))))));
                    arr_22 [i_5] = ((/* implicit */_Bool) (signed char)-64);
                    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) - (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    arr_25 [i_1] [i_3] [i_3] [i_3] [i_4 + 1] [i_6] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_1 [i_6 + 1])))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_6 - 1] [i_6])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 - 1]))))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4 + 1] [i_6 - 1] [i_6])) | (((/* implicit */int) var_9))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((var_11) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)43)) >> (((/* implicit */int) (_Bool)1)))))));
                        arr_28 [i_3] [i_3] [i_4 - 1] [i_7] [i_7] [i_4 - 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)76)) * (((/* implicit */int) arr_23 [i_1] [i_6 + 1] [i_7 - 1] [i_3] [i_3] [i_3]))));
                        arr_29 [i_3] [i_3] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 - 2]))) > (arr_27 [i_3] [i_7 - 1] [i_7 - 1])));
                        var_26 = var_6;
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_1] [i_4] [i_4] [i_6] [i_7 + 2] [i_3] [i_6 - 1])) ^ (((/* implicit */int) (_Bool)1))));
                    }
                    var_28 = ((/* implicit */unsigned char) -601474316);
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    arr_33 [i_8] [i_8] [i_4 - 2] [i_4] [i_3] [i_1] = ((/* implicit */unsigned int) arr_8 [i_8]);
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) >> (((var_5) - (11465613045868681273ULL)))))) ? ((-(-3057600538456600918LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1])))));
                    var_30 = ((/* implicit */signed char) (((((_Bool)1) ? (906844756U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)40)) / (((/* implicit */int) (signed char)-33)))))));
                }
                var_31 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)1))))) ? (2ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((/* implicit */int) (short)-19236)) : (((/* implicit */int) (_Bool)1)))))))));
            }
            for (int i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned long long int) ((((585000545U) ^ (arr_5 [i_1]))) <= (min((arr_5 [i_1]), (arr_5 [i_9 + 1])))));
                arr_36 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)114)) && ((_Bool)1))) && (((/* implicit */_Bool) arr_20 [i_9 - 1] [i_9 - 1] [i_9 - 1]))))), (((((((/* implicit */_Bool) (unsigned char)40)) || (((/* implicit */_Bool) arr_8 [i_9])))) ? (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (short)-14283)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1])))))))));
            }
        }
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) var_0)) / (((/* implicit */int) arr_24 [i_1] [6LL] [6LL] [i_1] [i_10])))) >> (((((15105710483098334635ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))))) - (15105710483098334675ULL)))))) | ((+(var_13))))))));
            var_34 = (-(((arr_9 [i_1] [i_10]) / (((/* implicit */int) (_Bool)1)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 3; i_12 < 11; i_12 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 3) 
                {
                    arr_47 [i_1] [i_1] [i_1] [(signed char)4] [(signed char)4] = ((/* implicit */signed char) (!(((15105710483098334635ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210)))))));
                    var_35 ^= ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)56)) - (43))))) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)64230)) < (((/* implicit */int) arr_15 [i_11]))))));
                    var_36 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    arr_51 [9ULL] [9ULL] [i_12] [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (short)32764)))));
                    var_37 = ((/* implicit */unsigned char) arr_48 [i_1] [i_1] [i_12] [i_12 + 1] [i_12] [i_12]);
                    arr_52 [i_1] [i_1] = arr_44 [i_1] [i_1] [i_12 - 1] [i_14];
                    arr_53 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) var_3)))) - (((/* implicit */int) arr_13 [i_12 - 2] [i_12 - 2] [i_1]))));
                }
                /* LoopSeq 3 */
                for (short i_15 = 2; i_15 < 10; i_15 += 4) /* same iter space */
                {
                    arr_56 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_12 - 3] [i_12 - 2] [i_12 - 1])) ? (((/* implicit */int) arr_54 [i_12 - 3] [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) (_Bool)1))));
                    var_38 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_15 [i_1])) ? (((/* implicit */unsigned long long int) var_10)) : (18446744073709551598ULL)))));
                }
                for (short i_16 = 2; i_16 < 10; i_16 += 4) /* same iter space */
                {
                    arr_61 [i_12 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -313663677)) ? (2412979387317325323LL) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)1)))))));
                    var_39 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) var_6)))));
                    var_40 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_1] [i_11] [i_12 - 2] [i_16])) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    arr_66 [i_11] [i_11] [i_17] = ((/* implicit */signed char) (_Bool)1);
                    arr_67 [i_17] = ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) > (((/* implicit */int) arr_35 [i_11] [i_12 + 1] [i_17]))))) == (((/* implicit */int) (_Bool)1)));
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((arr_34 [i_12] [i_12] [i_12 + 1] [i_12 - 3]) ? (((/* implicit */int) arr_34 [i_11] [i_11] [i_12 + 1] [i_12 - 3])) : (((/* implicit */int) arr_34 [i_1] [i_1] [i_12 + 1] [i_12 - 3])))))));
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_42 = ((/* implicit */int) max((var_42), ((~(((/* implicit */int) (signed char)-95))))));
                        var_43 += ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)26722)))) - (((/* implicit */int) arr_30 [i_12 - 1] [i_12 - 1] [i_1]))));
                    }
                    for (signed char i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
                        var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)14)))) : (((/* implicit */int) (unsigned char)65)))))));
                        arr_72 [i_1] [i_11] [i_12] [i_17] [i_19] [i_17] = ((/* implicit */long long int) (_Bool)1);
                    }
                }
            }
            /* LoopSeq 3 */
            for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    arr_81 [i_1] [i_11] [i_1] [i_21] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_60 [i_1] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_20] [i_11] [i_11] [i_20] [i_20]))))));
                    arr_82 [i_1] [i_11] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)109)) | (((/* implicit */int) arr_77 [i_1] [9] [i_1] [9]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)22))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) & (arr_62 [i_1] [i_11] [i_11] [i_11])))));
                    var_46 = ((/* implicit */signed char) var_10);
                }
                arr_83 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4062179599U)) || (((/* implicit */_Bool) var_11)))) || ((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)193))))));
                var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8788792033321975798ULL)) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) arr_69 [i_1] [i_1] [i_20] [i_1] [i_1] [i_1]))));
            }
            for (int i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (_Bool)1))));
                arr_86 [i_22] [i_1] [i_22] [i_11] = (signed char)20;
                arr_87 [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 22ULL)) ? (((/* implicit */int) arr_76 [i_22])) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) arr_62 [i_1] [i_11] [i_22] [i_11])) : (16210954305116057294ULL)));
            }
            for (unsigned char i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                var_49 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)126))))));
                /* LoopSeq 1 */
                for (signed char i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    var_50 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)-2)))) != ((-(((/* implicit */int) var_8))))));
                    arr_93 [i_24] [i_24] [i_23] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(2412979387317325328LL)))) ? (((((-2412979387317325310LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)25781)) - (25781))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) ^ (-2412979387317325323LL)))));
                    var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)149)) ? (((((/* implicit */_Bool) (unsigned char)32)) ? (-7886745681798822677LL) : (((/* implicit */long long int) 4062179599U)))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-36)) + (2147483647))) << (((((/* implicit */int) (signed char)5)) - (5))))))));
                    var_52 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_23] [i_23] [i_24] [i_24]))));
                }
            }
        }
    }
}
