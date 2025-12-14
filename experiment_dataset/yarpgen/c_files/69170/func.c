/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69170
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((int) var_13)) : (((((/* implicit */_Bool) (short)7101)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-107))))))), (((((/* implicit */_Bool) min((var_0), (var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */int) var_13))))) : (min((((/* implicit */unsigned int) (signed char)-41)), (3397824895U)))))));
    var_20 = (unsigned char)130;
    var_21 = var_8;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_14))));
        var_23 = ((/* implicit */short) var_17);
    }
    /* LoopSeq 2 */
    for (short i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-41)) && (((/* implicit */_Bool) (unsigned short)18295))))), (arr_3 [i_1] [(unsigned short)9])))) ? (max((arr_3 [i_1 + 1] [i_1 + 2]), (var_11))) : (max((var_8), ((-2147483647 - 1))))));
        /* LoopSeq 2 */
        for (int i_2 = 4; i_2 < 20; i_2 += 4) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) min((((arr_3 [i_2] [i_2 - 2]) % (((/* implicit */int) (short)29027)))), (((/* implicit */int) ((((/* implicit */int) var_5)) <= (arr_4 [i_1] [i_1] [(unsigned short)5]))))))))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((short)-29039), (((/* implicit */short) var_3))))) ? ((+(((((/* implicit */_Bool) arr_3 [4U] [i_2 - 3])) ? (((/* implicit */int) (short)29027)) : (((/* implicit */int) (unsigned short)43088)))))) : ((+(var_0)))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
        {
            var_27 = var_5;
            var_28 = (-(((696572991) ^ (arr_3 [i_3] [i_3 - 2]))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3 - 1] [(unsigned short)7]))));
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_14 [i_1] [i_3 - 1] [i_3 - 2] [i_4] [i_3 - 1]))) & (((/* implicit */int) ((unsigned short) (unsigned short)0))))))));
                    var_31 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)251)) & ((-(((/* implicit */int) var_13))))));
                    var_32 *= ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_5])))));
                    var_33 = (unsigned short)47267;
                    var_34 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-98))))) ? (((/* implicit */int) ((arr_9 [6] [6]) <= (((/* implicit */int) (unsigned char)154))))) : (((/* implicit */int) (unsigned short)65535)));
                }
                for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-30)) < (arr_2 [i_3 + 1]))))));
                        var_36 = ((/* implicit */int) 1210424446518719975LL);
                        var_37 = ((/* implicit */unsigned char) (((+(3397824891U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -240603727))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_38 = ((((/* implicit */_Bool) arr_21 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_3 + 1] [i_6 + 2] [i_6])) ? (arr_2 [i_1]) : (((/* implicit */int) (unsigned char)221)));
                        var_39 = ((/* implicit */short) ((long long int) arr_22 [i_1] [i_1 - 2] [i_6 + 2] [i_6] [i_6 + 2]));
                    }
                    var_40 = ((/* implicit */unsigned short) var_11);
                    var_41 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(0U)))) ? (((/* implicit */int) arr_19 [i_1] [(unsigned char)8] [i_1] [i_6] [i_1 - 2] [17])) : (((/* implicit */int) (unsigned short)8701))));
                    var_42 |= ((/* implicit */int) 15U);
                }
            }
            for (int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_10 = 3; i_10 < 19; i_10 += 4) 
                {
                    var_43 += ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_15 [i_3] [22U] [(unsigned short)21]))))));
                    var_44 = ((/* implicit */int) var_9);
                    var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2511273481U)) ? (var_11) : (((/* implicit */int) (signed char)-103))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_10] [i_3] [i_10] [i_10] [i_3])) && (((/* implicit */_Bool) (unsigned char)21)))))) : (((((/* implicit */_Bool) (unsigned char)167)) ? (3088614U) : (((/* implicit */unsigned int) arr_13 [i_1] [i_3])))))))));
                    var_46 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 941374578)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27560))) : (arr_11 [14U] [i_1 - 1] [i_1])));
                    var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)41217)))))));
                }
                var_48 = ((/* implicit */unsigned int) (-(arr_29 [i_9] [i_9] [i_3 - 1] [i_1] [i_1])));
            }
            var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 15U))))) & (((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)18268))))));
            /* LoopSeq 2 */
            for (int i_11 = 3; i_11 < 22; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    var_50 = ((/* implicit */int) 3247768768U);
                    var_51 = ((/* implicit */unsigned short) 5064090027468134626LL);
                    /* LoopSeq 3 */
                    for (short i_13 = 1; i_13 < 22; i_13 += 3) 
                    {
                        var_52 = ((/* implicit */short) ((((/* implicit */int) (short)-29028)) < (((/* implicit */int) (unsigned char)66))));
                        var_53 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_13] [i_13] [i_13 + 1])) >> (((var_2) + (654607371)))));
                    }
                    for (short i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_11 [i_1 + 2] [(unsigned short)13] [i_11])))))))));
                        var_55 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) var_8)));
                        var_56 = ((/* implicit */unsigned int) min((var_56), (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_9))) : (((/* implicit */unsigned int) var_2))))));
                        var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_1] [i_1 - 2] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_19 [i_11] [i_12 + 2] [i_11] [i_11] [(unsigned short)14] [i_1])) : (arr_33 [i_1 + 1] [i_3] [i_11 + 1] [(unsigned short)16])));
                        var_58 = ((/* implicit */int) ((unsigned short) arr_38 [i_11 - 2] [1] [i_11] [i_12 - 1] [i_12 - 1]));
                    }
                    for (int i_15 = 4; i_15 < 21; i_15 += 4) 
                    {
                        var_59 = ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_27 [i_1])) ? (((/* implicit */int) (unsigned short)47285)) : (var_8))) : (((/* implicit */int) arr_36 [i_1 - 2] [i_15 + 2] [i_15 - 2])));
                        var_60 = ((((/* implicit */_Bool) -835062785)) ? ((+(1014851431))) : (62033780));
                        var_61 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_12 + 3] [i_12 + 1] [i_12 + 1] [i_12] [i_3 - 2])) ? (-1) : (((/* implicit */int) var_6))));
                        var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [11U] [i_11] [i_12 - 2] [i_12 - 2])) ? (arr_5 [i_15] [i_11 - 3] [i_3]) : (arr_8 [6] [6])))) ? (arr_35 [i_1 + 2] [i_12 - 1] [i_15 + 2] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15]) : ((-(((/* implicit */int) (short)29027))))));
                        var_63 -= ((/* implicit */signed char) var_6);
                    }
                    var_64 -= ((/* implicit */int) ((var_17) != (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3 + 1] [i_11 - 1] [i_12] [i_12 + 1] [i_12])))));
                    var_65 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_33 [i_11 - 3] [i_11 - 3] [i_11] [i_11]))));
                }
                var_66 = ((/* implicit */int) ((((/* implicit */int) arr_21 [i_1] [i_1] [(unsigned short)9] [i_11 - 1] [i_1] [5] [i_11 - 1])) != (((((/* implicit */_Bool) (short)-10718)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) var_16))))));
            }
            for (unsigned short i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                var_67 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2270393730U)) ? (arr_3 [i_3 - 2] [i_1 + 2]) : (arr_3 [i_3 + 2] [i_1 + 1])));
                var_68 = ((/* implicit */signed char) ((2024573564U) == (((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_1] [i_1])))))));
                var_69 = ((/* implicit */int) (short)13008);
            }
        }
    }
    for (unsigned int i_17 = 0; i_17 < 12; i_17 += 3) 
    {
        var_70 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_25 [i_17] [i_17] [i_17] [i_17]))));
        /* LoopSeq 1 */
        for (int i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            var_71 = ((/* implicit */unsigned int) max((var_71), (max((max((arr_41 [(short)18] [i_17] [i_17] [(short)18] [i_17]), (((/* implicit */unsigned int) arr_9 [i_17] [i_18])))), (((((/* implicit */_Bool) arr_41 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (arr_41 [6LL] [(unsigned char)15] [i_18] [6LL] [i_18]) : (((/* implicit */unsigned int) var_4))))))));
            var_72 += ((/* implicit */unsigned short) (unsigned char)168);
            /* LoopSeq 3 */
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                var_73 = ((/* implicit */int) min((var_73), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967294U)) ? (max((771153819), (((/* implicit */int) (unsigned char)36)))) : ((-(((/* implicit */int) (unsigned char)13))))))), (min((((((/* implicit */_Bool) arr_12 [17] [17] [i_19] [17])) ? (((/* implicit */unsigned int) 688923875)) : (3448377344U))), (((/* implicit */unsigned int) var_1)))))))));
                var_74 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 1806708500U)) || ((!(((/* implicit */_Bool) var_11))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_52 [i_17] [(unsigned short)2] [i_19])), (arr_7 [12LL] [12LL])))))))));
            }
            for (signed char i_20 = 0; i_20 < 12; i_20 += 4) /* same iter space */
            {
                var_75 &= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_32 [i_17] [i_20])) ? (((/* implicit */int) arr_32 [i_17] [i_17])) : (-1048059928)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    var_76 = ((/* implicit */signed char) var_14);
                    var_77 = var_13;
                }
                for (unsigned int i_22 = 0; i_22 < 12; i_22 += 1) 
                {
                    var_78 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_47 [(signed char)8]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)28857)))) : (min((((2338274436680578423LL) + (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) -835062785))))));
                    var_79 = ((((((/* implicit */_Bool) arr_48 [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_17]))) : (arr_11 [i_18] [i_18] [i_17]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_17] [16LL] [i_17] [i_17]))));
                    var_80 = ((/* implicit */int) ((min((((/* implicit */unsigned int) var_4)), (((1422452769U) + (((/* implicit */unsigned int) 764830508)))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_20] [i_22]))))))));
                }
            }
            for (signed char i_23 = 0; i_23 < 12; i_23 += 4) /* same iter space */
            {
                var_81 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) (unsigned short)6))) * ((+(arr_30 [i_17] [i_17] [i_17] [i_23]))))))));
                var_82 = ((/* implicit */unsigned char) max((var_82), (((/* implicit */unsigned char) (+((-(2270393730U))))))));
            }
        }
    }
}
