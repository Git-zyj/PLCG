/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71107
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
    var_12 = ((/* implicit */int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_2))))))), (var_0)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_10);
            arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */int) max((arr_3 [i_1] [i_0] [i_0]), (((/* implicit */unsigned char) arr_1 [i_1] [7ULL]))))) * ((~(((/* implicit */int) arr_1 [i_1] [i_0])))));
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) max((var_5), (var_5))))), (((((/* implicit */int) (unsigned char)146)) - (((/* implicit */int) (unsigned char)245)))))))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((_Bool) (!(((/* implicit */_Bool) 18327999976151364131ULL))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [6LL] [i_2])) * (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)248)) ? (arr_2 [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))))) : (arr_2 [i_0] [1LL] [1LL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_3)))) ? (((((/* implicit */_Bool) (unsigned char)242)) ? (arr_7 [i_0] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32753))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)47))));
                var_15 += ((((/* implicit */int) arr_3 [i_0] [(short)7] [i_3 + 2])) << ((((+(((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (unsigned char)110)))))) + (66))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) arr_13 [i_3 + 1]);
                            var_17 ^= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 3150208106U)) && (((/* implicit */_Bool) 16622806486786280499ULL)))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))) - (880276212U)))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25486))) + (18327999976151364149ULL))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_24 [i_7] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_7] [i_0] [i_0])) << (((arr_17 [i_0] [i_7] [i_0]) + (332865173)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (((8429314975406517764ULL) << (((((/* implicit */int) var_1)) + (178)))))))));
            arr_25 [i_7] = ((/* implicit */unsigned char) var_1);
        }
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_8] [i_8] [i_9]))));
            var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)55)) - (((/* implicit */int) arr_32 [i_9] [i_9] [i_8]))))));
        }
        for (long long int i_10 = 2; i_10 < 16; i_10 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)63)) | (((/* implicit */int) (unsigned char)112))));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                var_24 += ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11]))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10] [i_11]))) : (1473788816U))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_10 - 1])) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-21876))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 2; i_15 < 15; i_15 += 1) 
                    {
                        {
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_43 [(signed char)8]))));
                            arr_50 [i_10] [i_14 - 1] [i_10] [i_10] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_48 [i_14] [i_15 - 2] [i_15] [i_15] [i_15 + 2])) - (((/* implicit */int) arr_48 [i_11] [i_11] [i_15] [4U] [i_15 + 2]))));
                            arr_51 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_15 - 2] [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_15 - 2] [i_15 - 2])) ? (((/* implicit */long long int) var_3)) : ((~(arr_44 [(_Bool)1] [i_10] [(_Bool)1] [i_8] [(_Bool)1] [i_10])))));
                        }
                    } 
                } 
            }
            for (unsigned char i_16 = 2; i_16 < 16; i_16 += 1) 
            {
                var_28 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_16 - 1] [i_10 - 1])) - (((/* implicit */int) arr_37 [i_16 - 1] [i_10 - 1]))));
                arr_55 [i_10] [i_10] [i_16 - 2] [(_Bool)1] = ((/* implicit */_Bool) ((((unsigned int) arr_33 [i_16 - 2])) - (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10 - 1])))));
                var_29 = ((/* implicit */short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_8] [i_8] [i_8] [i_8]))) / (arr_28 [i_10]))));
                var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 1261916714)) && (((/* implicit */_Bool) (unsigned char)191)))))));
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    arr_59 [i_10] [i_10] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-21902))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_44 [(_Bool)1] [i_8] [i_8] [i_10] [i_16 - 1] [i_17])));
                    var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_52 [i_10 - 1] [i_10 + 1] [i_10 - 1]))));
                    arr_60 [i_10] [i_10] [(short)1] [i_10] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_32 [i_17] [i_16 - 1] [i_16]))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_32 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_46 [i_8] [i_8] [(short)8] [i_18])) * (((/* implicit */int) var_1)))) - (((/* implicit */int) arr_45 [i_8] [i_8] [i_16 - 2] [i_8]))));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_16 + 1] [i_16 + 1] [i_18])) | (((/* implicit */int) var_11)))))));
                }
            }
        }
        for (long long int i_19 = 2; i_19 < 16; i_19 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned short) (~(arr_47 [(signed char)0] [i_19] [5LL] [i_19 + 1] [i_8] [(signed char)0] [i_8])));
            arr_65 [i_19] = ((/* implicit */short) (-(var_3)));
            var_35 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (103)))))) ? (((((/* implicit */_Bool) -7615118440933283203LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_8] [i_19])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_43 [i_19]))))));
            var_36 = ((/* implicit */long long int) arr_27 [(_Bool)1]);
            var_37 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_41 [12LL] [12LL] [(short)7])) * (((/* implicit */int) arr_54 [i_8] [i_8] [i_19] [7LL]))))) ? (((int) (unsigned char)159)) : (((/* implicit */int) arr_37 [i_19 + 1] [i_19 + 1])));
        }
        for (short i_20 = 0; i_20 < 17; i_20 += 1) 
        {
            var_38 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)47))));
            arr_69 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1350043011497245555LL)) | (0ULL)));
        }
        var_39 = ((/* implicit */long long int) min((var_39), (arr_34 [i_8])));
    }
    for (unsigned short i_21 = 0; i_21 < 17; i_21 += 1) /* same iter space */
    {
        arr_73 [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_27 [i_21])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_27 [i_21]) : (arr_27 [i_21]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_21]))))))));
        arr_74 [i_21] [i_21] = ((/* implicit */unsigned long long int) var_2);
    }
    /* vectorizable */
    for (long long int i_22 = 2; i_22 < 24; i_22 += 2) 
    {
        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) (unsigned char)229)))))));
        var_41 = (!(((/* implicit */_Bool) arr_75 [i_22])));
        /* LoopSeq 1 */
        for (short i_23 = 0; i_23 < 25; i_23 += 1) 
        {
            var_42 -= ((/* implicit */long long int) arr_78 [i_23]);
            /* LoopSeq 1 */
            for (long long int i_24 = 0; i_24 < 25; i_24 += 3) 
            {
                /* LoopSeq 4 */
                for (long long int i_25 = 0; i_25 < 25; i_25 += 1) 
                {
                    var_43 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_75 [i_22 - 1])) ? (((/* implicit */int) arr_76 [i_22 + 1])) : (((/* implicit */int) arr_76 [i_22 - 1]))));
                    arr_87 [i_25] [i_25] [i_25] [i_22] = ((/* implicit */_Bool) (+(arr_75 [i_24])));
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((arr_76 [i_22 + 1]) ? (((/* implicit */int) arr_76 [i_22 - 2])) : (((/* implicit */int) arr_76 [i_22 - 1])))))));
                }
                for (signed char i_26 = 0; i_26 < 25; i_26 += 1) 
                {
                    arr_91 [i_22 - 2] [i_23] [i_26] [i_23] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) : (((3210098709U) << (((3210098709U) - (3210098699U)))))));
                    /* LoopSeq 3 */
                    for (short i_27 = 1; i_27 < 23; i_27 += 3) 
                    {
                        var_45 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-60))));
                        var_46 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (short)-32760)) ? (7615118440933283229LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))))));
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_22 - 1]))) - (arr_77 [i_22 - 2])));
                        var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) arr_79 [i_23] [i_24] [i_23]))));
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_80 [i_24] [i_23])) * (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1))))));
                        var_50 = ((/* implicit */_Bool) arr_75 [i_22]);
                        arr_99 [i_29] [i_29] [i_29] [i_29] [i_29] [i_26] [16U] = ((/* implicit */short) ((unsigned char) (signed char)-88));
                        var_51 = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_9)))) - (((((/* implicit */int) arr_88 [(unsigned short)1] [i_22 - 1] [i_23] [i_22 - 1] [i_23] [i_22 - 1])) >> (((((/* implicit */int) var_1)) + (151)))))));
                        var_52 = ((/* implicit */unsigned char) ((65045394741443168LL) >= (7615118440933283208LL)));
                    }
                }
                for (signed char i_30 = 2; i_30 < 23; i_30 += 4) 
                {
                    var_53 = ((/* implicit */unsigned char) var_3);
                    var_54 = ((arr_103 [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_22]) >= (arr_103 [i_22] [i_22 + 1] [9ULL] [i_30]));
                    arr_104 [i_22 - 1] [11LL] [(_Bool)1] [i_24] [i_24] [i_24] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_102 [i_22] [i_22] [i_22 - 2] [4ULL] [i_22 - 2]))) - (arr_101 [i_22 - 1])));
                }
                for (long long int i_31 = 1; i_31 < 23; i_31 += 1) 
                {
                    var_55 = ((/* implicit */unsigned short) max((var_55), (var_8)));
                    var_56 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_102 [i_31 - 1] [i_22] [i_22 - 2] [i_22 + 1] [i_22]))));
                    var_57 &= ((/* implicit */_Bool) (+(((((/* implicit */int) var_10)) - (((/* implicit */int) var_2))))));
                }
                arr_107 [20LL] [i_23] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((unsigned int) 21ULL));
            }
            arr_108 [(_Bool)1] [i_23] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)250)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_106 [i_22 + 1] [15U] [i_22 + 1] [i_23])))))) : (arr_106 [i_22] [i_22] [i_23] [i_23])));
        }
        /* LoopNest 2 */
        for (short i_32 = 1; i_32 < 24; i_32 += 3) 
        {
            for (unsigned short i_33 = 1; i_33 < 24; i_33 += 4) 
            {
                {
                    var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) arr_77 [3LL]))));
                    var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_114 [i_22] [i_22] [i_33] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_32 + 1] [i_22] [i_32 + 1] [(_Bool)1] [i_32 - 1] [i_33 - 1])) ? ((-(((/* implicit */int) arr_95 [i_22] [i_32] [i_33] [i_33])))) : ((-(((/* implicit */int) arr_97 [i_33 - 1] [i_33 + 1] [i_22] [i_22] [i_22 - 1] [i_22 - 1]))))));
                    var_60 -= ((/* implicit */long long int) var_9);
                    var_61 = ((/* implicit */short) ((unsigned short) arr_79 [i_22] [i_32 + 1] [i_33 - 1]));
                }
            } 
        } 
        arr_115 [18ULL] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_102 [i_22 + 1] [i_22] [i_22 - 2] [i_22] [i_22 - 1]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)27409))))))));
    }
}
