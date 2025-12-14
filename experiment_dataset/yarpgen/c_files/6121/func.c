/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6121
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
    var_16 = ((/* implicit */signed char) (!(((((/* implicit */int) (unsigned char)52)) <= (((/* implicit */int) (unsigned short)16782))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_4 [23] = ((/* implicit */short) ((var_12) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((_Bool)1))))))) : ((((!(((/* implicit */_Bool) 1509387646U)))) ? (max((arr_0 [21LL] [i_0]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255)))))))));
        var_17 = ((/* implicit */unsigned long long int) var_15);
        var_18 += ((/* implicit */unsigned int) (-(7543822876837850423LL)));
        arr_5 [i_0] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-20502)) > (((/* implicit */int) (short)-20502))))), (max((var_11), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_7 [i_1] [i_1]))))))) : ((+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32763)))))))))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1336320623U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_0 [11ULL] [i_1])))) ? (max((arr_9 [i_2] [11]), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)32767)))))), ((-(((/* implicit */int) ((unsigned short) var_9)))))));
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
        {
            var_20 = ((unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_14 [i_3] [i_1]))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                arr_17 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [9])) ? (arr_12 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_4])))))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_20 [i_1] [i_5] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)127))))));
                    arr_21 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))));
                    arr_22 [i_5] [i_3] [i_4] [i_3] = ((/* implicit */signed char) (+(arr_9 [i_1] [i_3])));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (var_3) : ((+(arr_0 [i_1] [i_1]))))))));
                    arr_26 [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(arr_13 [i_1] [i_3])));
                    var_22 = ((/* implicit */unsigned short) (!(((_Bool) arr_15 [i_6] [i_1] [i_1]))));
                    arr_27 [i_1] [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_8 [i_6] [i_3] [i_3])) : (520272630))));
                }
                arr_28 [i_4] = ((/* implicit */_Bool) var_1);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_3] [i_1]))) * (arr_10 [i_3] [i_4])));
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                arr_31 [i_1] [i_3] = ((_Bool) (signed char)-108);
                /* LoopSeq 4 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_4)))));
                    arr_34 [22LL] [i_8] [i_8] [i_8] [(unsigned char)9] [i_1] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_39 [i_9] [i_7] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_9] [i_3] [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    arr_40 [i_1] [i_3] [i_3] [(signed char)7] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_13)))));
                    arr_41 [i_1] [i_1] [i_7] [i_1] [i_9] [i_1] = ((/* implicit */unsigned short) ((arr_37 [i_1] [i_3] [i_7] [i_9]) ? (arr_30 [i_1] [i_3] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_1] [i_7] [i_7] [i_9])))));
                    arr_42 [i_1] [14] [i_7] [i_7] [i_7] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]);
                    var_25 -= ((short) (!(((/* implicit */_Bool) (signed char)115))));
                }
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    var_26 ^= ((/* implicit */unsigned long long int) var_14);
                    arr_46 [i_1] [10ULL] [i_10] [(_Bool)1] = ((/* implicit */unsigned char) ((var_2) > (2147483640)));
                }
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        arr_53 [(unsigned short)17] [i_1] = ((((_Bool) arr_25 [i_1] [i_11] [i_3] [i_1] [i_1] [i_11])) ? (((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_25 [i_12] [i_1] [i_1] [i_1] [i_3] [i_1])) : (((/* implicit */int) arr_14 [i_3] [i_11])))) : (((/* implicit */int) arr_43 [(unsigned short)22] [i_1] [i_1] [i_1])));
                        arr_54 [i_7] [i_7] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1] [i_7] [i_12]))));
                        var_27 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_11)) ? (arr_13 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_7))))));
                        arr_55 [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_12] [i_11] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) 920463439489655520LL))))) ? (((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [(signed char)1] [i_12])) : (var_7));
                    }
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) >> (((((/* implicit */int) var_14)) + (102)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) || ((_Bool)1)))) : ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
                    var_30 += ((/* implicit */long long int) (+(((/* implicit */int) arr_37 [i_1] [i_3] [i_7] [i_11]))));
                    var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (-520272641))) > (((/* implicit */int) arr_32 [i_1] [i_7] [i_3] [i_1]))));
                }
            }
            for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                arr_59 [i_1] [i_3] [i_1] [i_13] = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_29 [i_13])) < (arr_2 [i_3])))));
                arr_60 [i_1] [i_1] = ((((/* implicit */_Bool) arr_50 [i_1] [i_3] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (short)4920)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) % ((-2147483647 - 1))))) : (0U))));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (5695291523949175531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [i_15] [i_14] [i_15] [i_14])))))));
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (18446744073709551607ULL) : (arr_66 [i_3] [i_15] [i_3] [i_3] [(unsigned short)17] [i_1])))) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (short)-20521))));
                            arr_73 [i_16] [i_14] [i_14] [i_16] [i_16] = ((/* implicit */int) arr_1 [i_14]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    arr_77 [(signed char)13] [i_17] [4ULL] [i_1] [i_17] = ((/* implicit */unsigned long long int) arr_30 [i_1] [i_3] [i_14] [i_1]);
                    var_34 = ((/* implicit */short) 520272640);
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    arr_80 [i_18] [i_3] = ((/* implicit */long long int) ((signed char) arr_51 [i_3] [i_3] [i_3] [i_3] [i_3]));
                    var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */int) var_5)) * (((/* implicit */int) var_14))))));
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_83 [i_14] [i_18] [i_18] = ((/* implicit */signed char) ((_Bool) arr_45 [i_1] [i_3] [i_18] [i_18]));
                        arr_84 [i_19] [i_18] [i_14] [i_18] [i_1] = ((/* implicit */unsigned int) arr_67 [i_18] [i_18]);
                    }
                    arr_85 [i_1] [i_18] [i_1] [(signed char)17] [i_1] [i_1] = (-((~(520272641))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                {
                    var_36 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_71 [i_14] [i_3] [i_14] [15LL] [i_1])) || (((/* implicit */_Bool) arr_35 [3ULL] [3ULL] [3ULL] [i_14] [i_14] [i_20]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) var_13);
                        var_38 ^= ((/* implicit */unsigned int) (short)-1);
                        arr_91 [i_1] [i_1] [i_14] [i_20] [i_1] [i_14] = ((/* implicit */unsigned int) ((unsigned long long int) arr_87 [i_1] [i_3] [(signed char)0] [17]));
                    }
                    for (int i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        arr_94 [i_1] [i_3] [i_14] [i_20] [i_22] = ((/* implicit */unsigned int) var_3);
                        arr_95 [i_22] [i_22] [i_20] [4ULL] [4ULL] [(unsigned short)4] [i_1] = ((/* implicit */int) ((arr_75 [i_22] [i_14] [i_14] [i_1]) >> (((arr_75 [i_22] [i_3] [i_14] [i_20]) - (7460357107596763675ULL)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_23 = 0; i_23 < 24; i_23 += 4) 
                    {
                        arr_100 [i_1] [i_3] [i_14] [(unsigned short)14] = ((/* implicit */unsigned short) arr_68 [i_1] [i_3] [(short)14] [i_20]);
                        arr_101 [i_1] [i_1] [i_14] [i_14] [i_20] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16768)) ? (arr_81 [i_23] [i_3] [i_14] [i_20] [i_23]) : (((/* implicit */int) arr_58 [i_23] [i_20] [i_14] [i_3]))));
                    }
                }
                arr_102 [(unsigned char)9] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-22416)) > (((/* implicit */int) arr_45 [i_14] [i_14] [i_14] [i_1]))));
                arr_103 [i_1] [i_1] [i_14] [8LL] = ((/* implicit */unsigned int) arr_82 [i_1] [i_1] [i_1] [i_3] [i_14] [i_14]);
            }
        }
        for (signed char i_24 = 0; i_24 < 24; i_24 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 24; i_25 += 3) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 3) 
                {
                    {
                        arr_110 [(_Bool)1] [(signed char)3] [(signed char)3] [(signed char)3] = ((/* implicit */short) var_2);
                        var_39 = (-((~(((/* implicit */int) var_5)))));
                    }
                } 
            } 
            var_40 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_68 [i_24] [i_24] [(_Bool)1] [i_1])) ? (arr_68 [i_1] [i_1] [i_1] [i_1]) : (arr_68 [i_24] [i_24] [i_1] [i_1]))) - (((/* implicit */unsigned long long int) ((max((var_9), (((/* implicit */long long int) var_1)))) - (((arr_0 [i_24] [i_1]) + (((/* implicit */long long int) 520272631)))))))));
            /* LoopSeq 4 */
            for (int i_27 = 0; i_27 < 24; i_27 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 0; i_28 < 24; i_28 += 2) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 24; i_29 += 1) 
                    {
                        {
                            var_41 = ((signed char) ((short) (+(((/* implicit */int) (unsigned short)16782)))));
                            arr_120 [i_1] [8ULL] [i_27] [i_27] [i_28] [i_27] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */unsigned long long int) arr_36 [i_27])) ^ (arr_57 [i_27] [i_28] [i_28]))) : (((/* implicit */unsigned long long int) var_7))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_30 = 0; i_30 < 24; i_30 += 1) 
                {
                    var_42 -= ((/* implicit */unsigned char) arr_81 [i_1] [i_1] [i_24] [i_27] [i_30]);
                    var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -520272648))));
                }
                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_24] [i_27])) ? (max((((/* implicit */int) ((((/* implicit */int) (unsigned short)26405)) == (((/* implicit */int) var_15))))), (max((1068522218), (((/* implicit */int) var_14)))))) : (max((((/* implicit */int) var_12)), (arr_79 [i_1] [i_1] [i_1] [i_1] [13ULL])))));
            }
            for (signed char i_31 = 0; i_31 < 24; i_31 += 1) 
            {
                arr_127 [13] [14U] [8] = ((/* implicit */_Bool) var_2);
                var_45 = ((/* implicit */int) (signed char)126);
            }
            /* vectorizable */
            for (int i_32 = 0; i_32 < 24; i_32 += 2) 
            {
                arr_130 [i_1] [i_24] [i_32] = ((/* implicit */unsigned int) var_1);
                arr_131 [i_32] [i_1] = ((/* implicit */_Bool) arr_108 [i_1] [i_24] [i_1] [i_24]);
                arr_132 [3U] [6LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_24] [i_24] [i_32]))));
            }
            for (short i_33 = 0; i_33 < 24; i_33 += 4) 
            {
                arr_136 [i_24] [i_24] [13U] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                var_46 += ((unsigned int) (+(arr_107 [i_1] [i_1] [i_1])));
                arr_137 [i_1] [i_24] [i_24] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (_Bool)1)), (-1123375835)))));
                var_47 *= ((/* implicit */int) arr_64 [i_33] [i_33] [i_24] [(short)18]);
            }
        }
        for (long long int i_34 = 0; i_34 < 24; i_34 += 2) 
        {
            var_48 = ((/* implicit */int) -7022698635192953863LL);
            var_49 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_13))))))))));
        }
        var_50 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) 3229448319U))))) ? ((-(-920463439489655524LL))) : (((/* implicit */long long int) ((unsigned int) arr_61 [i_1] [i_1]))))))));
        arr_141 [i_1] = ((/* implicit */signed char) max(((unsigned short)48739), (((/* implicit */unsigned short) (short)-27061))));
        arr_142 [i_1] = ((/* implicit */unsigned int) (+(((long long int) max((((/* implicit */unsigned short) arr_109 [i_1])), ((unsigned short)65534))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_35 = 0; i_35 < 24; i_35 += 1) 
        {
            var_51 = ((/* implicit */unsigned int) arr_13 [i_1] [(_Bool)1]);
            var_52 += ((/* implicit */int) ((((/* implicit */_Bool) arr_97 [i_35] [(signed char)10] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_111 [i_1] [(short)0]))) : (arr_67 [i_1] [i_35])));
            arr_146 [i_35] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_74 [i_1] [i_35] [i_35] [i_35] [i_1]))));
            arr_147 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) ((/* implicit */int) var_14))) + (var_9))) : (var_9)));
        }
        for (unsigned long long int i_36 = 0; i_36 < 24; i_36 += 3) 
        {
            arr_151 [i_1] [i_36] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_32 [i_36] [i_1] [i_36] [i_36])), (var_8))))))), (((max((8527206782213261338ULL), (((/* implicit */unsigned long long int) var_14)))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
            var_53 = ((/* implicit */unsigned long long int) (unsigned short)0);
            arr_152 [i_36] [i_36] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32765))));
            arr_153 [i_36] [i_36] [i_36] = ((/* implicit */unsigned short) (+(3800842015U)));
        }
    }
    var_54 = ((/* implicit */unsigned long long int) (-((+(3800842015U)))));
    var_55 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (var_3)))))));
}
