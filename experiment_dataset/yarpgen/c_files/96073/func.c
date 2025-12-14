/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96073
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) var_10))))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_0 + 2] [i_1 - 1])))), (var_16)))) / (max((min((((/* implicit */unsigned long long int) (unsigned char)255)), (0ULL))), (var_7)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (short)-32749))));
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((unsigned long long int) arr_3 [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        arr_15 [i_5] [(signed char)22] = (~((+(((/* implicit */int) arr_13 [i_5 + 1] [i_5 - 1])))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned char i_9 = 4; i_9 < 21; i_9 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) max((((/* implicit */int) (short)(-32767 - 1))), (((int) (+(arr_18 [i_6] [i_7] [(unsigned char)0] [(unsigned char)13]))))));
                            arr_24 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned char) var_15)), (arr_22 [i_5 - 1] [i_6] [i_7] [i_8] [i_5 - 1])))), (var_6)))) != (arr_20 [i_5] [(_Bool)1] [i_5] [i_9])));
                            var_22 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_21 [i_5] [i_5 - 1])), (max((18446744073709551594ULL), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (((long long int) arr_19 [i_5])))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 37ULL)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31266)))))));
                arr_25 [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) arr_23 [(unsigned char)7] [i_6] [i_6] [i_6] [i_6] [(unsigned char)7] [i_6]));
                /* LoopSeq 3 */
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_5])), (((((/* implicit */_Bool) 7908752633832480210LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_5 - 1] [i_5] [i_5])))))))) ? (max(((+(var_16))), (((/* implicit */int) ((unsigned short) arr_19 [i_5]))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_13 [i_10] [i_6])) : (((/* implicit */int) arr_13 [i_5] [i_5 - 1]))))));
                    var_25 = ((/* implicit */signed char) (~(((22ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182)))))));
                    var_26 = min((arr_23 [i_10] [i_10] [i_10] [i_7] [10ULL] [i_6] [i_5]), (((/* implicit */unsigned char) max((arr_17 [i_5 - 1] [i_5 - 1]), (arr_17 [i_5 + 1] [i_5 + 1])))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)0))))));
                        var_28 = ((/* implicit */unsigned short) arr_29 [i_5 + 1] [10] [i_5 + 1] [i_10] [i_11] [i_5] [i_5 - 1]);
                        var_29 = ((/* implicit */unsigned long long int) arr_27 [i_5] [i_6] [i_10] [16LL]);
                    }
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        var_30 *= ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((((/* implicit */int) arr_22 [i_12] [i_10] [i_7] [i_6] [i_5])) > (arr_27 [16ULL] [16ULL] [i_7] [16ULL]))))))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), ((unsigned char)0)))) ? (var_7) : (max((((/* implicit */unsigned long long int) (unsigned short)31340)), (((unsigned long long int) arr_20 [i_5] [i_5] [i_5] [i_5]))))));
                        var_32 -= ((/* implicit */unsigned short) (!(min(((!(((/* implicit */_Bool) arr_21 [i_5] [i_5])))), ((!(((/* implicit */_Bool) arr_13 [i_7] [i_10]))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_33 = (signed char)0;
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (-9223372036854775807LL - 1LL)))));
                    }
                    for (signed char i_14 = 2; i_14 < 22; i_14 += 2) 
                    {
                        arr_40 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) ((unsigned char) (!((!(((/* implicit */_Bool) var_16)))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) max(((((~(var_16))) | (arr_35 [i_5 + 1] [i_6] [i_7] [i_5 + 1] [i_14]))), ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)197)) && (((/* implicit */_Bool) (unsigned char)255))))))))))));
                        arr_41 [i_5] = ((/* implicit */signed char) ((unsigned short) (+(((((/* implicit */_Bool) arr_27 [i_5 - 1] [i_6] [i_5] [i_10])) ? (arr_20 [(unsigned char)1] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
                        var_36 = ((/* implicit */long long int) ((var_7) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_18 [i_6] [i_6] [i_6] [i_14]))))));
                        var_37 = ((/* implicit */short) max(((+(((/* implicit */int) (signed char)9)))), (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_31 [i_5] [i_5] [i_10] [i_14])))))));
                    }
                }
                for (signed char i_15 = 2; i_15 < 22; i_15 += 3) 
                {
                    var_38 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */short) var_9)), ((short)9393))))));
                    var_39 &= ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) arr_31 [i_5 + 1] [i_6] [i_7] [i_7])))));
                    arr_46 [i_7] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) min((arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_27 [(signed char)18] [i_5 - 1] [i_6] [i_5 - 1])))))));
                    var_40 = ((/* implicit */unsigned char) ((signed char) (-9223372036854775807LL - 1LL)));
                    var_41 = ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_5] [i_6] [i_7]))));
                }
                for (int i_16 = 2; i_16 < 22; i_16 += 4) 
                {
                    var_42 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [i_7])))))));
                    var_43 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (short)32738))))), (max((arr_16 [i_7]), (((/* implicit */int) var_4))))));
                    var_44 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-37)), ((unsigned char)2)));
                    arr_50 [i_5] [i_6] [i_7] [i_16] = ((/* implicit */int) var_4);
                    arr_51 [i_5] [i_5] = ((/* implicit */long long int) var_2);
                }
            }
            arr_52 [i_6] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) min((((unsigned short) arr_35 [i_5] [i_5] [i_6] [i_6] [i_6])), (arr_21 [i_5] [i_6]))))));
            var_45 = ((/* implicit */signed char) (((~(var_16))) > (min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) arr_30 [i_6]))))));
            var_46 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_44 [i_5] [i_6] [i_5 - 1] [i_6]))))));
        }
        /* LoopSeq 4 */
        for (long long int i_17 = 4; i_17 < 21; i_17 += 4) 
        {
            var_47 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_54 [i_5 - 1])) : (((/* implicit */int) arr_54 [i_5 + 1]))))));
            var_48 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (~(0ULL)))) ? (((((/* implicit */_Bool) (unsigned short)63163)) ? (((/* implicit */int) arr_13 [i_5] [23U])) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_22 [i_5] [i_5] [i_5] [i_5] [i_5])) ^ (((/* implicit */int) (short)-9393)))))));
        }
        for (int i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
        {
            var_49 = ((/* implicit */int) min((21ULL), (((/* implicit */unsigned long long int) arr_48 [i_5 - 1] [i_5] [i_5] [9] [i_18]))));
            arr_59 [i_18] = ((/* implicit */unsigned short) arr_23 [i_18] [i_5] [(short)5] [i_5] [i_5] [i_5] [i_5]);
            arr_60 [i_5] [i_18] = ((/* implicit */short) arr_21 [i_5] [i_18]);
        }
        for (int i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned long long int) ((short) 18446744073709551597ULL));
            var_51 = ((/* implicit */unsigned char) ((signed char) max((var_7), (((/* implicit */unsigned long long int) arr_21 [i_5] [i_5 + 1])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                var_52 = ((/* implicit */unsigned short) 8894682269028503107ULL);
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        var_53 = ((/* implicit */short) max((arr_23 [i_22] [i_21] [i_19] [(signed char)2] [i_19] [i_19] [i_5]), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (signed char)124)) < (((/* implicit */int) var_10))))))));
                        arr_71 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_21] [i_20] [i_21] = ((/* implicit */unsigned char) (+(arr_56 [i_19] [i_19] [i_22])));
                    }
                    arr_72 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */signed char) max((min((((/* implicit */long long int) min((arr_14 [i_5 - 1]), (arr_27 [i_5 + 1] [i_5 + 1] [i_19] [i_21])))), ((-(arr_56 [(signed char)7] [i_19] [i_19]))))), (((/* implicit */long long int) arr_27 [i_5] [i_20] [2ULL] [i_5]))));
                }
                arr_73 [i_20] [i_20] [i_5] [i_20] = ((/* implicit */_Bool) max((arr_69 [i_5 + 1] [i_5 - 1]), (((/* implicit */unsigned char) var_15))));
                var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) ((((/* implicit */_Bool) ((short) 18446744073709551608ULL))) || (((/* implicit */_Bool) arr_69 [i_5] [i_5 - 1])))))));
                arr_74 [i_5] [i_20] [i_20] = ((/* implicit */int) (_Bool)1);
            }
            for (signed char i_23 = 0; i_23 < 24; i_23 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_24 = 0; i_24 < 24; i_24 += 2) 
                {
                    var_55 |= ((/* implicit */int) (~(arr_55 [i_5] [i_5 - 1])));
                    /* LoopSeq 1 */
                    for (int i_25 = 0; i_25 < 24; i_25 += 2) 
                    {
                        var_56 *= ((/* implicit */unsigned long long int) ((arr_43 [i_5 - 1] [i_25] [i_25] [i_5 - 1]) <= (((/* implicit */int) var_9))));
                        var_57 = ((/* implicit */short) var_5);
                        var_58 *= ((/* implicit */signed char) (~(max((((/* implicit */int) arr_33 [i_23] [(unsigned char)4] [i_25] [i_23] [i_25])), ((+(((/* implicit */int) arr_21 [i_5] [i_5]))))))));
                        arr_81 [i_5] [i_25] [i_25] [i_19] [i_23] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_67 [i_5] [i_23] [i_23] [i_24] [(signed char)12] [i_5])))))) * (((/* implicit */int) arr_70 [i_5] [i_19] [i_25] [i_24] [i_24] [i_5]))));
                    }
                    var_59 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (3470562670164132757ULL)));
                    arr_82 [i_19] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17750))) - ((+(18446744073709551594ULL)))));
                }
                for (int i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    var_60 = ((/* implicit */signed char) var_8);
                    /* LoopSeq 1 */
                    for (short i_27 = 1; i_27 < 21; i_27 += 4) 
                    {
                        arr_91 [i_27] [i_26] [(unsigned short)22] [i_23] [(unsigned char)5] [i_26] [i_5] = ((/* implicit */signed char) ((arr_76 [i_5]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_89 [i_26] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) (unsigned short)53719)) : (((/* implicit */int) arr_89 [i_26] [i_5 - 1] [i_19])))))));
                        var_61 = ((/* implicit */unsigned long long int) min((var_61), ((((!(((/* implicit */_Bool) arr_53 [i_5] [i_5])))) ? (((unsigned long long int) 15407605470312579071ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        arr_92 [i_27] [i_26] [i_23] [i_26] [i_5] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (+(11498631686026313302ULL)))) ? ((+(arr_64 [i_26] [i_27]))) : (min((arr_38 [i_5] [i_5] [i_23] [i_27] [i_27] [(signed char)2]), (((/* implicit */int) var_4)))))));
                        arr_93 [i_26] [i_19] [i_26] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [(unsigned char)7] [i_26] [i_19] [i_5])) ? (((/* implicit */int) arr_21 [(unsigned char)6] [i_27])) : (((/* implicit */int) (unsigned char)87))));
                        var_62 = var_11;
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_28 = 0; i_28 < 24; i_28 += 1) 
                {
                    for (unsigned long long int i_29 = 3; i_29 < 20; i_29 += 4) 
                    {
                        {
                            arr_99 [i_28] [i_19] [i_28] [i_29] = ((((/* implicit */_Bool) arr_23 [i_5] [(unsigned char)15] [i_5] [i_28] [i_28] [i_28] [i_29])) ? (max((((((/* implicit */int) arr_85 [i_5] [i_19] [i_23] [i_23] [i_5])) % (((/* implicit */int) arr_44 [i_29] [(_Bool)1] [i_23] [i_19])))), (var_8))) : ((+((~(((/* implicit */int) arr_48 [i_5] [i_19] [(signed char)19] [i_28] [(signed char)19])))))));
                            var_63 = ((/* implicit */signed char) (+((+(((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (arr_13 [i_19] [i_23]))))))));
                        }
                    } 
                } 
            }
            var_64 = ((/* implicit */unsigned short) arr_61 [i_5] [i_5 - 1] [i_5]);
        }
        for (signed char i_30 = 0; i_30 < 24; i_30 += 3) 
        {
            arr_104 [i_5] [i_5] = arr_94 [20U] [i_30] [20U];
            var_65 = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)77))))));
            var_66 *= ((/* implicit */short) arr_44 [i_5] [i_5] [i_30] [(signed char)18]);
        }
    }
    for (unsigned char i_31 = 0; i_31 < 17; i_31 += 4) 
    {
        var_67 = ((/* implicit */unsigned char) max((var_67), (((/* implicit */unsigned char) max((arr_47 [i_31] [i_31] [i_31] [i_31]), (((/* implicit */signed char) arr_102 [i_31] [i_31])))))));
        var_68 = ((/* implicit */unsigned short) ((unsigned int) ((int) arr_54 [i_31])));
        var_69 = ((/* implicit */int) arr_101 [i_31] [i_31]);
    }
}
