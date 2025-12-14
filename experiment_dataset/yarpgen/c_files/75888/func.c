/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75888
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_3), (var_4))), (var_1)))) ? (((min((var_0), (((/* implicit */unsigned long long int) var_10)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) var_4)))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((int) arr_0 [4])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((-2147483647 - 1)), (-336950422))))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((((-2147483647 - 1)) <= (((/* implicit */int) (unsigned char)166)))) ? ((((_Bool)1) ? (min((((/* implicit */long long int) 336950421)), (-5729043019547234815LL))) : (((/* implicit */long long int) -336950405)))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))))));
                                arr_14 [i_2] [i_0] [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) -4926375527398100334LL))));
                                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (arr_1 [i_1])))) ? (arr_11 [7] [i_2] [7]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] &= ((/* implicit */_Bool) arr_12 [(signed char)2] [2] [(signed char)6] [2] [i_0] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_18 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_10 [i_5] [i_2] [i_1] [(unsigned short)0])));
                        arr_20 [i_2] [4] [i_2] = ((/* implicit */_Bool) arr_6 [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((var_4) - (1265744487)))));
                        arr_24 [i_2] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) << (((((/* implicit */int) arr_8 [i_2] [i_2])) + (11)))))) : (((/* implicit */_Bool) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) << (((((((/* implicit */int) arr_8 [i_2] [i_2])) + (11))) + (114))))));
                        var_20 = (((!(((((/* implicit */int) var_10)) <= (arr_21 [i_2]))))) ? (max((((((/* implicit */int) arr_2 [i_1] [i_0])) / (((/* implicit */int) (short)11349)))), (((((/* implicit */_Bool) 8LL)) ? (((/* implicit */int) (short)11349)) : (((/* implicit */int) (short)27279)))))) : (((((((/* implicit */_Bool) 18014398509481983LL)) && (((/* implicit */_Bool) (unsigned short)16)))) ? ((-(var_12))) : (((/* implicit */int) ((((/* implicit */_Bool) 2260149238042379041ULL)) || (((/* implicit */_Bool) 18014398509481983LL))))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_6] [i_0])) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) arr_2 [i_6] [6]))))) | ((+(7406788410902522592LL)))));
                        arr_25 [i_0] &= var_1;
                    }
                    arr_26 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
        var_22 = ((((/* implicit */_Bool) arr_0 [3U])) ? (((((/* implicit */_Bool) -18014398509481994LL)) ? (((((/* implicit */_Bool) 533411715)) ? (533411715) : ((-2147483647 - 1)))) : (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) (short)27279))))))));
    }
    for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 2) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */unsigned short) arr_27 [i_7] [i_7]);
        arr_30 [i_7] [i_7] = ((/* implicit */signed char) (+(var_12)));
        arr_31 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) -336950422)) || ((_Bool)0)));
        arr_32 [i_7] [i_7] = ((/* implicit */long long int) ((((((((((/* implicit */int) var_11)) + (2147483647))) << (((((/* implicit */int) arr_27 [7] [i_7])) - (176))))) | (((/* implicit */int) var_11)))) | ((-(arr_28 [16ULL] [i_7 - 2])))));
    }
    for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(max((arr_34 [i_8 - 2] [i_8 + 1]), (arr_34 [i_8 - 3] [i_8 - 1]))))))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    arr_41 [i_10] = ((/* implicit */unsigned int) (~(-533411716)));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 16; i_12 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [11LL])) | (-533411726)))) ? (arr_28 [i_11 + 3] [i_8 - 1]) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_49 [i_12 + 1] [i_8 - 3] [i_8 - 3])) ? (((/* implicit */unsigned long long int) (~(arr_44 [i_9] [i_9])))) : (min((((/* implicit */unsigned long long int) arr_38 [i_9] [i_11] [i_9])), (arr_47 [i_12] [i_9] [(signed char)4] [i_9] [i_10] [i_9] [i_8]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
                                var_25 = ((/* implicit */short) (((((+(arr_28 [i_10] [i_10]))) / (arr_38 [i_10] [1LL] [i_10]))) * (((/* implicit */int) var_8))));
                                var_26 -= ((/* implicit */short) (~(((/* implicit */int) var_5))));
                                arr_50 [i_9] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)97)) ? (arr_39 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)11))))) & (((/* implicit */long long int) var_12))))) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : ((((+(((/* implicit */int) (unsigned short)51718)))) << (((/* implicit */int) (signed char)1))))));
                                arr_51 [i_9] [(short)4] [i_10] [12U] [i_9] &= ((/* implicit */long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) (signed char)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) var_1);
        var_28 *= ((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) (short)2407)) ? (((/* implicit */int) (short)2432)) : (-533411747))), (((/* implicit */int) (short)-2433))))));
    }
    for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 2; i_14 < 17; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            {
                                var_29 = (+(((/* implicit */int) ((((((/* implicit */unsigned long long int) var_4)) / (arr_57 [i_16]))) == (((/* implicit */unsigned long long int) (+(var_12))))))));
                                var_30 = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                    var_31 += ((/* implicit */signed char) (-(0LL)));
                    arr_65 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3LL)) ? (((/* implicit */int) arr_54 [i_14])) : ((+(arr_45 [i_13])))))) ? (var_4) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_35 [i_13])) : (var_4)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_18 = 2; i_18 < 16; i_18 += 3) 
        {
            var_32 += ((/* implicit */unsigned short) arr_33 [i_18 - 2]);
            arr_68 [i_18 - 1] [i_13] [i_13] = ((/* implicit */signed char) ((arr_59 [i_18] [i_13] [i_13] [i_13]) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) arr_52 [i_13])) : (-1LL))) : (((/* implicit */long long int) (~(533411715))))));
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_66 [i_18 - 1] [i_18 + 4])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_18 + 1] [i_18 + 3])) && (((/* implicit */_Bool) arr_66 [i_18 + 1] [i_18 - 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_18 + 2] [i_18 - 1])) || (((/* implicit */_Bool) var_0)))))));
            var_34 = arr_37 [i_18] [i_18 + 3];
        }
        for (unsigned int i_19 = 3; i_19 < 18; i_19 += 4) /* same iter space */
        {
            var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (var_4)))) ? ((-(arr_57 [i_19]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-3999698932541928755LL) : (((/* implicit */long long int) 1073733632)))))))) ? (arr_44 [i_13] [i_13]) : (((((/* implicit */int) arr_56 [i_19 + 2] [i_19])) | (((/* implicit */int) arr_56 [i_19 - 1] [15LL])))));
            var_36 += ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) | (((((/* implicit */_Bool) -3999698932541928763LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (-6519354334448922101LL))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_19])) ? ((-(((/* implicit */int) arr_63 [(unsigned char)6] [i_19] [(unsigned char)6] [(unsigned char)6] [i_13] [i_13])))) : (min((arr_52 [(unsigned short)0]), (((/* implicit */int) var_8)))))))));
            /* LoopSeq 2 */
            for (int i_20 = 2; i_20 < 18; i_20 += 4) 
            {
                arr_76 [i_13] [i_19] [i_13] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_56 [i_19 - 1] [i_19 - 1])) ? (((/* implicit */int) arr_56 [i_19 - 3] [i_19 - 1])) : (((/* implicit */int) arr_69 [i_13] [i_13]))))));
                /* LoopSeq 1 */
                for (short i_21 = 2; i_21 < 19; i_21 += 4) 
                {
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) arr_67 [i_13])) ? (((/* implicit */long long int) var_7)) : (arr_39 [i_20] [i_20]))))))))));
                    var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_13] [i_13])) ? (arr_48 [i_21 - 1] [i_21] [i_20] [i_19 - 1] [i_13]) : (((/* implicit */long long int) arr_45 [i_13])))))));
                }
                arr_79 [i_13] [i_19] [i_13] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_64 [i_20])) >> (((/* implicit */int) arr_69 [i_13] [i_13]))))) ? (max((63ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-50)))))))));
            }
            for (signed char i_22 = 2; i_22 < 19; i_22 += 2) 
            {
                arr_84 [i_13] [i_13] [0U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((((/* implicit */signed char) arr_54 [i_22 - 1])), (arr_33 [i_13])))) : ((-(((/* implicit */int) (unsigned char)211))))))) ? (((/* implicit */int) var_10)) : (var_4));
                arr_85 [i_22] [i_22] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3999698932541928762LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103)))))))) ? (-3999698932541928772LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            }
            arr_86 [i_19 - 1] [i_13] [i_13] = ((/* implicit */unsigned int) arr_33 [i_19]);
        }
        for (unsigned int i_23 = 3; i_23 < 18; i_23 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_24 = 4; i_24 < 19; i_24 += 2) 
            {
                /* LoopNest 2 */
                for (int i_25 = 1; i_25 < 19; i_25 += 2) 
                {
                    for (unsigned char i_26 = 4; i_26 < 17; i_26 += 4) 
                    {
                        {
                            arr_100 [i_26] [i_13] [i_24] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_66 [i_24 - 3] [i_23 + 1])) ? (arr_66 [i_24 - 3] [i_23 - 3]) : (arr_66 [i_24 + 1] [i_23 + 2])));
                            arr_101 [i_26] [i_25] [i_13] [i_13] [i_23] [3] = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_27 = 0; i_27 < 20; i_27 += 2) 
                {
                    arr_105 [i_27] [i_13] [i_23] [i_13] [11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_96 [i_24 - 2] [i_23 - 3] [i_23] [i_23 - 3]))));
                    arr_106 [i_13] [i_24 - 2] [i_23 - 2] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_39 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) arr_92 [i_27] [(signed char)18] [7] [i_13])) : (arr_104 [(signed char)14] [i_24] [i_23] [i_13]))) <= (var_2)));
                }
                var_39 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_35 [i_24])) % (var_4))) + ((~(-481679114)))));
            }
            for (signed char i_28 = 0; i_28 < 20; i_28 += 3) 
            {
                var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_12)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_63 [2U] [i_28] [4] [4] [i_23] [i_13])) : (arr_103 [i_28] [12U] [i_13] [i_13]))) : (((/* implicit */int) (signed char)127))))) ? (var_4) : (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_40 [i_28] [i_23] [i_13] [i_13]))))));
                var_41 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_7)) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((+(arr_57 [i_13])))))));
                var_42 = arr_55 [i_23];
                /* LoopNest 2 */
                for (unsigned char i_29 = 0; i_29 < 20; i_29 += 3) 
                {
                    for (unsigned int i_30 = 0; i_30 < 20; i_30 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */short) (((~(arr_104 [i_30] [i_28] [i_23 - 2] [i_13]))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-74))))))))));
                            arr_113 [i_13] = (~(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_110 [i_13] [i_13]))) % (-1717621468813093296LL))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                            arr_114 [i_13] [i_13] [i_13] [i_23 - 3] [i_13] = ((/* implicit */short) var_3);
                            arr_115 [i_13] [i_29] [i_28] [i_23] [i_13] = ((/* implicit */unsigned char) (+(max((min((((/* implicit */long long int) arr_64 [(unsigned short)15])), (-9110998108734324935LL))), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_69 [i_13] [i_13])), (arr_108 [i_30] [i_23] [i_23] [i_13]))))))));
                            var_44 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_99 [i_30] [i_29] [8ULL] [2] [i_13])), (var_0)))));
                        }
                    } 
                } 
            }
            for (signed char i_31 = 1; i_31 < 19; i_31 += 3) 
            {
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 20; i_32 += 3) 
                {
                    for (unsigned short i_33 = 0; i_33 < 20; i_33 += 2) 
                    {
                        {
                            var_45 &= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_77 [i_33] [i_33] [i_33] [i_31 + 1]))))));
                            arr_122 [i_13] [i_13] [i_31] [i_31] [i_13] [i_13] = (-(((/* implicit */int) var_13)));
                            var_46 += ((/* implicit */_Bool) var_9);
                            var_47 -= ((/* implicit */unsigned short) 9110998108734324938LL);
                        }
                    } 
                } 
                var_48 = ((/* implicit */signed char) ((arr_34 [i_31 + 1] [i_13]) & (((/* implicit */long long int) var_4))));
                arr_123 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((short) arr_94 [i_23] [i_23 - 1] [i_13] [i_13]));
                var_49 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_53 [i_23] [(signed char)6])) ? (((/* implicit */unsigned long long int) (-(arr_70 [i_31] [(signed char)5] [i_13])))) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
            }
            arr_124 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_94 [i_23] [i_23 - 1] [i_23 + 2] [i_13])) ? (arr_94 [i_23 + 1] [i_23 - 1] [6LL] [6LL]) : (arr_94 [i_23] [i_23 - 2] [i_23] [i_13]))))));
        }
    }
    var_50 = ((/* implicit */signed char) var_4);
}
