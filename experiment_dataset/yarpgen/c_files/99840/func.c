/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99840
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
    var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((0), (((/* implicit */int) (unsigned char)181))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (17242220148027082185ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), ((unsigned char)181))))))), (((unsigned long long int) min((((/* implicit */long long int) var_1)), (-20LL))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) 0))));
        var_17 += ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) var_8))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                arr_12 [i_1] &= ((/* implicit */unsigned int) (unsigned char)181);
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_19 [i_2] [i_5] [i_5] [i_2] = (-(((/* implicit */int) (unsigned char)133)));
                            arr_20 [i_2] = ((/* implicit */signed char) var_1);
                        }
                    } 
                } 
                arr_21 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0)))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_31 [i_2] [i_2] [i_6] [i_7 - 1] [i_8] = ((/* implicit */long long int) (~(((arr_11 [i_1]) ? (arr_9 [i_1] [i_1]) : (11528320865825242683ULL)))));
                            var_19 = ((((/* implicit */_Bool) 4617567945261680086ULL)) && (((/* implicit */_Bool) ((unsigned long long int) 0ULL))));
                        }
                    } 
                } 
                arr_32 [i_1] [i_2] [i_6] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) ^ (((/* implicit */int) arr_4 [i_1]))));
                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 16330056258473103950ULL)) ? (((/* implicit */unsigned long long int) 3590352564U)) : (var_4))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (unsigned char i_10 = 2; i_10 < 20; i_10 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_6] [i_6 - 1] [i_10 - 2])) * (((/* implicit */int) arr_7 [i_1] [i_6 + 1] [i_10 + 1]))));
                            var_22 = ((/* implicit */unsigned char) 7ULL);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)21312)) <= (((/* implicit */int) (unsigned char)0)))))));
            }
            /* LoopSeq 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_42 [i_11] [i_2] [i_2] [i_1] = ((/* implicit */signed char) var_7);
                arr_43 [i_1] [i_2] [i_2] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_1] [(_Bool)1] [i_11]))))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)134))) : (((unsigned long long int) 7ULL))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 4; i_12 < 19; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned char) (_Bool)0);
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_10)) * (((arr_49 [i_1] [i_11]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_13] [i_2] [i_2] [i_2]))))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_14 = 4; i_14 < 18; i_14 += 1) /* same iter space */
            {
                var_26 = (+(((/* implicit */int) (unsigned char)0)));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) ((((/* implicit */int) (unsigned char)74)) <= (((/* implicit */int) var_11)))))));
            }
            for (unsigned char i_15 = 4; i_15 < 18; i_15 += 1) /* same iter space */
            {
                arr_55 [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [i_2] [i_15])) ? (((((/* implicit */int) var_14)) << (((((/* implicit */int) (short)31874)) - (31872))))) : (arr_41 [i_1] [i_2] [i_15] [i_15])));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3053002295418917986LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_13))))) : (((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) << (((18446744073709551615ULL) - (18446744073709551612ULL)))))));
            }
            arr_56 [i_2] [i_2] = ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_2] [i_1])) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) var_3)));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (14162754281578921641ULL)));
        }
        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 18; i_19 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4410324399315485759LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13)))) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)43))))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (+((+(arr_46 [i_1] [i_1] [i_17] [i_19]))))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_22 [i_16] [i_17] [i_16] [i_16])))) ? (arr_29 [i_1]) : (((15ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                var_34 = ((/* implicit */_Bool) var_10);
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_35 [i_1] [i_16] [i_20] [i_21])) : (((/* implicit */int) var_8)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((_Bool) var_1));
                        var_37 = ((((/* implicit */_Bool) ((signed char) (_Bool)0))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_16])) ? (((/* implicit */int) var_6)) : (var_10)))));
                    }
                    var_38 = ((/* implicit */_Bool) var_0);
                    var_39 = ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned short)65535)) % (((/* implicit */unsigned long long int) ((long long int) 1833598872)))));
                }
                for (unsigned char i_23 = 1; i_23 < 19; i_23 += 3) /* same iter space */
                {
                    arr_76 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) var_10);
                    var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) arr_52 [i_1] [i_16] [i_20] [i_23]))));
                    arr_77 [i_16] [i_16] [i_20] [i_23 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) + (((((/* implicit */_Bool) 232603799)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))));
                    var_41 *= ((/* implicit */_Bool) var_5);
                    arr_78 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_23] [i_16] [i_23 + 2] [i_23 + 2] [i_20] [i_16])) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((long long int) 11114588106954617262ULL))));
                }
                for (unsigned char i_24 = 1; i_24 < 19; i_24 += 3) /* same iter space */
                {
                    arr_81 [i_16] = ((/* implicit */unsigned int) var_3);
                    /* LoopSeq 4 */
                    for (signed char i_25 = 2; i_25 < 18; i_25 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_85 [i_1] [i_16] [i_1] [i_1]))))) % (15ULL)));
                        arr_86 [i_1] [(unsigned char)14] [i_20] [i_16] [i_25] = ((/* implicit */unsigned long long int) ((int) 1234681005848099819ULL));
                    }
                    for (signed char i_26 = 2; i_26 < 18; i_26 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_1]) / (((/* implicit */int) var_0))))) ? ((-(var_13))) : (((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_24] [i_16])) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_91 [i_1] [i_16] [i_16] [i_24 + 1] [i_26] = arr_52 [i_16] [i_20] [i_24] [i_24];
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (2147483647))))));
                    }
                    for (unsigned long long int i_27 = 0; i_27 < 21; i_27 += 4) 
                    {
                        arr_94 [i_1] [i_16] [i_20] [i_16] [i_24] [i_16] = ((/* implicit */long long int) ((((((/* implicit */int) var_2)) | (((/* implicit */int) var_9)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3)))))));
                        var_45 -= ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) && (((/* implicit */_Bool) -803432250)));
                        arr_95 [i_16] [i_16] [i_20] [i_24 - 1] [i_27] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                    }
                    for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 3) 
                    {
                        arr_98 [i_16] [i_24 + 1] = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_3)))));
                        var_46 = (~(-2147483647));
                    }
                    arr_99 [i_1] [i_16] [11ULL] [i_24 + 2] [i_24] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_24] [i_24 + 1] [i_24 + 2])) ? (((/* implicit */int) arr_36 [i_24] [i_24 + 2] [i_24 - 1])) : (((/* implicit */int) arr_36 [i_24 + 1] [i_24 + 1] [i_24 + 1]))));
                }
                for (unsigned char i_29 = 0; i_29 < 21; i_29 += 1) 
                {
                    var_47 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (18446744073709551612ULL));
                    var_48 = ((unsigned char) ((((/* implicit */_Bool) 15ULL)) ? (var_13) : (22ULL)));
                    arr_103 [i_1] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_40 [i_16] [i_16] [i_16] [i_29]) ? (((/* implicit */int) arr_60 [i_20] [i_20] [i_16] [i_20])) : (arr_3 [i_1])))) ? (arr_49 [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_87 [i_1] [i_16] [i_20] [i_20] [i_29])))));
                    arr_104 [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) arr_53 [i_1] [i_1] [i_29]);
                }
                arr_105 [i_1] [i_16] [i_20] = ((unsigned long long int) ((27ULL) - (((/* implicit */unsigned long long int) -2147483625))));
                var_49 += ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) || ((_Bool)1));
            }
            for (unsigned long long int i_30 = 2; i_30 < 18; i_30 += 1) 
            {
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 21; i_31 += 4) 
                {
                    for (short i_32 = 0; i_32 < 21; i_32 += 2) 
                    {
                        {
                            arr_112 [i_1] [i_1] [i_1] [i_30] [i_16] [i_32] [i_32] = ((((/* implicit */int) ((_Bool) var_1))) % (((/* implicit */int) ((unsigned char) var_2))));
                            arr_113 [i_16] [i_32] = ((/* implicit */_Bool) 3ULL);
                        }
                    } 
                } 
                var_50 = ((/* implicit */unsigned int) min((var_50), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (~(-1833598873)))) : (arr_102 [i_30] [i_30 + 3] [i_30 + 1] [i_30 + 2])))));
            }
            var_51 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2147483625))))) << (((((/* implicit */int) var_11)) - (97)))));
        }
        for (int i_33 = 0; i_33 < 21; i_33 += 3) 
        {
            var_52 = ((/* implicit */int) ((((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1])) <= (((((/* implicit */_Bool) 232603783)) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_33] [i_33])) : (((/* implicit */int) var_9))))));
            arr_117 [i_1] [i_1] [i_33] = ((/* implicit */unsigned char) (+(arr_41 [i_1] [i_33] [i_33] [i_1])));
            arr_118 [i_33] [i_33] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_1] [i_1] [i_1] [i_33])) ? (18446744073709551600ULL) : (arr_45 [i_1] [i_1] [i_1] [i_1])));
            arr_119 [i_1] [i_1] [i_33] = ((/* implicit */_Bool) var_5);
            arr_120 [i_33] [14ULL] [14ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        }
        var_53 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 232603783)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2016))) : (arr_46 [i_1] [i_1] [i_1] [i_1])))));
        arr_121 [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_8)) << (((-232603783) + (232603801))))));
        arr_122 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))));
    }
}
