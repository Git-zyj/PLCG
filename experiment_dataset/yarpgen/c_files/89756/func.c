/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89756
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [(short)3] [i_3])) ? (arr_1 [i_1] [i_2 + 1]) : (((/* implicit */int) arr_10 [i_2 + 3] [i_2 + 3] [i_1] [i_0 - 2]))));
                        var_19 -= ((/* implicit */short) ((long long int) (+(((/* implicit */int) var_5)))));
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_20 ^= ((/* implicit */long long int) 1472760310);
                            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0 + 1]))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) (-(var_3)));
                            arr_18 [i_1] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_2] [i_2] [i_2 + 1]));
                            arr_19 [i_0] [i_2] [i_2] [i_3] [(short)8] = ((/* implicit */short) arr_15 [i_2] [i_2 - 1] [i_3]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_22 [i_0] [i_1] [i_1] [(unsigned short)8] [i_2] [i_6] = ((/* implicit */short) arr_16 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_1] [i_2]);
                            var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_6] [i_2 - 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)32767))))) : (var_4)));
                            arr_23 [i_2] [i_2] [i_2] [(unsigned short)8] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (short)32761))));
                            var_24 = arr_12 [i_0] [i_2] [i_3] [i_0];
                        }
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_26 [i_0 - 1] [i_2] [i_2] [(short)3] [i_7] = (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) arr_3 [i_0])) : (((int) arr_21 [i_0] [(unsigned char)3] [i_2] [i_3] [i_7])));
                            var_25 = ((/* implicit */long long int) ((((arr_17 [i_7] [i_3] [6LL] [i_2 + 2] [i_1] [(unsigned short)6] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))))) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22)) / (((/* implicit */int) var_8)))))));
                        }
                    }
                } 
            } 
        } 
        arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_6 [(unsigned char)1] [i_0 - 3] [i_0 + 1])) ^ (((/* implicit */int) arr_5 [(signed char)2] [i_0]))));
        arr_28 [i_0] = ((/* implicit */short) ((22U) >= (((/* implicit */unsigned int) -2137105471))));
        var_26 = ((/* implicit */unsigned short) (-(arr_11 [i_0 - 1] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_8] [i_10] [i_10] [i_11])) ? (((/* implicit */int) arr_36 [i_8] [i_8] [(unsigned char)2] [i_10] [i_11])) : (((/* implicit */int) arr_33 [i_10] [i_9] [i_8]))));
                        var_28 = ((/* implicit */int) ((((int) (short)16413)) > (((/* implicit */int) (unsigned short)65513))));
                        var_29 = ((/* implicit */short) (+(0U)));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) 269619506U))));
                    }
                } 
            } 
            arr_40 [i_9] [2LL] = ((/* implicit */unsigned char) (+((+(arr_37 [i_8] [i_8])))));
            var_31 = ((/* implicit */short) var_1);
        }
        /* LoopSeq 2 */
        for (unsigned short i_12 = 1; i_12 < 19; i_12 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) (unsigned char)7);
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 4) 
                    {
                        {
                            arr_51 [i_15] [i_12] [i_13] [i_12] [i_8] = ((/* implicit */unsigned short) var_8);
                            arr_52 [i_8] [i_12] [i_13] [i_12] [i_15] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (arr_46 [i_12] [(unsigned short)18] [(unsigned char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 32767LL)) && (((/* implicit */_Bool) (unsigned char)243))))))));
                            var_33 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (unsigned short)22)) ? (arr_37 [i_12] [i_14]) : (((/* implicit */int) (short)7)))));
                            var_34 -= ((/* implicit */unsigned char) ((unsigned short) arr_42 [i_13] [i_8]));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_16 = 3; i_16 < 19; i_16 += 4) 
            {
                for (unsigned short i_17 = 2; i_17 < 19; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        {
                            arr_61 [i_8] [i_12 + 1] [i_16] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_12] [i_16] [i_18])) ? (arr_41 [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_8] [i_8] [i_8] [i_8])))));
                            arr_62 [6U] [(unsigned char)0] [i_12] [6ULL] [i_17] [i_18] = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) 
        {
            var_35 -= ((/* implicit */unsigned char) ((unsigned short) ((arr_64 [i_8] [i_19]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))))));
            var_36 -= ((/* implicit */unsigned long long int) ((short) arr_58 [i_19] [i_19]));
            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (short)-31443))));
        }
        var_38 = ((/* implicit */unsigned short) (unsigned char)244);
        /* LoopSeq 2 */
        for (unsigned char i_20 = 1; i_20 < 18; i_20 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned short) ((int) arr_53 [i_20] [i_20] [i_20] [i_20 + 2]));
            var_40 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_8] [9LL] [i_20 + 2] [i_20 - 1]))) == (((long long int) (short)31701))));
            arr_68 [i_8] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 1626080811U))) ? (arr_64 [i_20] [i_20 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_20] [i_20 + 1] [i_20 + 2])))));
            arr_69 [i_8] [i_8] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) / (var_9)))) : ((-(-4584218470792418801LL)))));
        }
        for (unsigned char i_21 = 1; i_21 < 18; i_21 += 2) /* same iter space */
        {
            var_41 &= ((/* implicit */unsigned char) ((long long int) (unsigned short)44886));
            arr_72 [i_21] = ((unsigned short) arr_64 [i_8] [i_21]);
        }
        /* LoopSeq 2 */
        for (unsigned short i_22 = 2; i_22 < 17; i_22 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_23 = 0; i_23 < 20; i_23 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 20; i_24 += 2) 
                {
                    for (short i_25 = 0; i_25 < 20; i_25 += 3) 
                    {
                        {
                            var_42 ^= ((/* implicit */int) 4584218470792418801LL);
                            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1023)))))));
                        }
                    } 
                } 
                arr_82 [i_8] [i_22] [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_45 [i_23] [i_22] [i_8]))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_26 = 0; i_26 < 20; i_26 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_27 = 0; i_27 < 20; i_27 += 1) 
                {
                    for (unsigned char i_28 = 0; i_28 < 20; i_28 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned short) 2671914059010442330ULL);
                            arr_93 [i_28] [i_22] [i_26] [(unsigned short)5] [i_22] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)1))))) : (((((/* implicit */_Bool) 4890270696787308327ULL)) ? (arr_91 [i_28] [i_27] [i_22] [i_22] [i_22] [i_8]) : (((/* implicit */unsigned long long int) 1474006447))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 20; i_29 += 4) 
                {
                    for (unsigned char i_30 = 2; i_30 < 18; i_30 += 3) 
                    {
                        {
                            var_45 ^= ((/* implicit */short) (-(((/* implicit */int) arr_47 [i_30 - 1] [i_29]))));
                            arr_101 [i_8] [i_22] [i_8] [i_8] [15LL] = ((/* implicit */unsigned char) ((int) 4025347801U));
                            var_46 = ((/* implicit */short) ((long long int) arr_98 [i_30] [i_30] [(signed char)3] [i_30] [i_30 + 1] [6]));
                        }
                    } 
                } 
                arr_102 [i_8] [i_22 + 3] [i_22] = ((/* implicit */long long int) (signed char)8);
                arr_103 [i_22] [i_22] = arr_84 [i_8] [i_8] [i_8] [i_22];
                var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 269619490U))));
            }
            for (unsigned short i_31 = 0; i_31 < 20; i_31 += 4) /* same iter space */
            {
                arr_106 [i_8] [i_8] [i_22] [i_22] = ((/* implicit */unsigned char) arr_39 [i_8] [i_22] [i_22 - 1] [i_22]);
                var_48 += ((/* implicit */long long int) (unsigned char)39);
                /* LoopSeq 1 */
                for (long long int i_32 = 1; i_32 < 19; i_32 += 4) 
                {
                    arr_110 [i_22] [i_22] [i_31] [i_31] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)6)) || (((/* implicit */_Bool) var_11)))) ? (arr_90 [i_32 + 1] [i_32 + 1] [(short)10] [i_32 - 1] [i_32] [i_32 - 1] [i_32]) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) var_1))))));
                    var_49 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_8] [(unsigned short)8] [i_8] [i_22 + 1]))));
                }
                arr_111 [i_8] [i_22] [i_31] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_32 [i_22] [i_22]))));
            }
            for (unsigned short i_33 = 0; i_33 < 20; i_33 += 4) /* same iter space */
            {
                arr_114 [i_8] [i_22] [i_8] = ((/* implicit */unsigned long long int) arr_95 [i_8] [i_22] [i_33] [i_33]);
                var_50 = ((/* implicit */unsigned short) ((short) arr_88 [i_22 + 1] [i_22] [i_22] [i_22 - 2] [i_22]));
                var_51 = ((/* implicit */short) arr_57 [i_8] [i_8] [i_8] [i_8] [(short)4] [i_8]);
            }
        }
        for (unsigned char i_34 = 0; i_34 < 20; i_34 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_35 = 2; i_35 < 19; i_35 += 4) 
            {
                for (int i_36 = 1; i_36 < 19; i_36 += 3) 
                {
                    {
                        arr_121 [i_35] [i_35] [i_35] [i_35] = ((/* implicit */long long int) (~(((/* implicit */int) arr_77 [i_36 - 1] [i_36] [i_36 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_37 = 0; i_37 < 20; i_37 += 4) 
                        {
                            var_52 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 1054314627U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_37] [i_8] [i_35 + 1] [i_8]))) : (arr_120 [i_34] [i_36 - 1] [i_37] [3ULL] [(unsigned char)17] [i_36 - 1])));
                            arr_126 [(short)5] [i_37] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)31417))));
                        }
                        var_53 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32759)) + (2147483647))) >> (((((var_3) ^ (((/* implicit */int) arr_94 [i_35] [i_35 + 1] [i_35] [(signed char)14] [i_35])))) + (727947682)))));
                    }
                } 
            } 
            arr_127 [i_8] [i_34] = ((/* implicit */unsigned char) ((long long int) arr_48 [i_8] [i_8] [i_34] [i_34]));
            /* LoopNest 2 */
            for (unsigned char i_38 = 1; i_38 < 18; i_38 += 3) 
            {
                for (short i_39 = 1; i_39 < 18; i_39 += 4) 
                {
                    {
                        arr_133 [i_34] [i_34] [i_38] [15U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))));
                        var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [(unsigned char)11] [(unsigned char)10] [i_38] [16LL])) / (var_15)))) || (((/* implicit */_Bool) (unsigned short)31202)))))));
                    }
                } 
            } 
            var_55 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) 6913172587160182721ULL)) || (((/* implicit */_Bool) (short)31432)))))));
        }
    }
    /* vectorizable */
    for (short i_40 = 0; i_40 < 21; i_40 += 2) 
    {
        var_56 += ((/* implicit */short) ((unsigned long long int) arr_137 [i_40]));
        /* LoopNest 2 */
        for (unsigned int i_41 = 0; i_41 < 21; i_41 += 2) 
        {
            for (short i_42 = 0; i_42 < 21; i_42 += 3) 
            {
                {
                    var_57 -= ((/* implicit */unsigned char) ((1813401950U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51622)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_43 = 0; i_43 < 21; i_43 += 3) 
                    {
                        for (unsigned char i_44 = 1; i_44 < 20; i_44 += 2) 
                        {
                            {
                                var_58 = ((/* implicit */int) max((var_58), (((int) ((1144251383280372598ULL) < (((/* implicit */unsigned long long int) arr_136 [7LL])))))));
                                arr_152 [i_42] [i_41] [i_43] [i_43] [i_44 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_136 [i_40])) == (var_2))))) % (((((/* implicit */_Bool) arr_151 [(unsigned short)8] [13ULL] [i_42] [i_42] [i_42] [i_43] [i_44 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_135 [i_42]))) : (14590362432353126362ULL)))));
                                var_59 &= ((unsigned long long int) var_5);
                                var_60 &= ((/* implicit */int) (short)32767);
                            }
                        } 
                    } 
                    var_61 = ((/* implicit */int) min((var_61), (((/* implicit */int) (signed char)-1))));
                }
            } 
        } 
        var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) (unsigned char)111)))))));
    }
    var_63 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-5145)))))))));
    var_64 = ((/* implicit */short) max((var_64), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((int) var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_2))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_13)))))))))))));
}
