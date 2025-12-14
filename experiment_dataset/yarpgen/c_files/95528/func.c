/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95528
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
    var_15 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 - 2])))))) != (((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) * (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [17] [i_2]))) : (var_11)))))));
                        var_16 |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [18ULL]))));
                        var_17 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) 4851988526441617780ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (arr_4 [19ULL] [i_1] [13]))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned char)255)))))))));
                        arr_12 [i_1] [i_2] [i_2] [1ULL] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [19] [i_1] [i_2] [i_3])) - (((/* implicit */int) (unsigned char)16))))) ? ((+(13179552709389900533ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [(unsigned short)6] [i_1] [i_1] [i_1])), (var_2)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 4; i_4 < 20; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_4] [i_1] [9LL] [i_3 - 1])) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10551)))))));
                            var_19 = ((/* implicit */_Bool) ((-272952532780355725LL) / (((/* implicit */long long int) (-(arr_9 [21] [14ULL] [i_2] [i_1] [(_Bool)1]))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_3))));
                            arr_15 [i_0] [i_1] [i_2] [i_1] = var_6;
                        }
                    }
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        arr_18 [15] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) min((min((arr_14 [i_2] [i_0] [i_2] [i_2] [i_5] [19ULL]), (arr_14 [i_0] [i_0] [19ULL] [i_0] [(short)0] [i_0]))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)3818)) ? (var_1) : (((/* implicit */int) arr_1 [(unsigned short)13] [i_2])))), (((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (unsigned short)127)) - (127))))))))));
                        arr_19 [(short)13] [i_5] [i_1] = ((unsigned short) ((((/* implicit */int) min(((short)30318), ((short)3)))) + (((var_10) ? (1570666836) : (arr_9 [i_0] [(short)15] [15ULL] [11U] [(short)13])))));
                        arr_20 [i_1] [i_1] [i_2] [(unsigned short)0] [3LL] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2277679848U)), (26388279066624LL)))) ? (((((/* implicit */_Bool) 2277679850U)) ? (arr_13 [i_0] [3U] [(unsigned char)16] [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */long long int) 134217696)) : (3860220220144471518LL))))))) ? (-899401072) : (((((/* implicit */int) ((-3860220220144471545LL) <= (((/* implicit */long long int) var_2))))) << (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)0))))))));
                        var_21 *= ((/* implicit */unsigned char) arr_3 [20ULL]);
                    }
                    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        arr_25 [11] [i_1] [i_1] = ((/* implicit */long long int) (((((((~(var_0))) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)54991)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) : (32212254720LL))) - (25LL))))) >= (((/* implicit */int) ((((/* implicit */_Bool) 524287)) || ((_Bool)1))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)7090)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (signed char)3)))) << (((((((/* implicit */_Bool) (unsigned char)1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_6]))))) - (3252867613U)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(2618251604U))))));
                        var_24 = max(((~(arr_4 [i_6 - 1] [i_2] [i_2]))), (arr_4 [i_6 + 1] [i_2] [i_2]));
                        arr_26 [(unsigned short)19] [(short)19] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) min((-7LL), (((/* implicit */long long int) (_Bool)1))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_29 [i_1] = ((/* implicit */unsigned int) arr_24 [i_1] [i_2] [11LL] [i_1]);
                        var_25 = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) max((var_1), (var_6)))), (min((((/* implicit */unsigned long long int) var_14)), (0ULL))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [i_8])) ? (((/* implicit */int) arr_8 [9ULL] [(signed char)2] [(short)1] [i_8])) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)20] [5] [i_0])))), ((-((+(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                        arr_33 [i_8] [i_1] [i_2] [i_1] [i_1] [(short)16] = ((/* implicit */unsigned short) (-((-(arr_10 [i_8])))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (min((((/* implicit */unsigned short) var_10)), (var_14)))));
    /* LoopSeq 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)54985), ((unsigned short)63))))) : (((((/* implicit */_Bool) arr_5 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_32 [i_9] [i_9] [i_9] [(short)14]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_9] [i_9] [i_9] [i_9] [(unsigned short)4])))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 1; i_11 < 15; i_11 += 3) 
            {
                {
                    arr_43 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_11 + 1] [i_11 + 1] [i_10] [i_9])) ? (arr_39 [i_10] [i_10]) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_34 [(unsigned short)3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 13; i_12 += 3) 
                    {
                        for (int i_13 = 3; i_13 < 12; i_13 += 1) 
                        {
                            {
                                var_28 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [(_Bool)1] [16] [i_11] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)61198)))) : (arr_14 [i_9] [i_10] [i_11] [i_13] [i_13] [i_13])))));
                                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_40 [i_13 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4626464833904380950ULL)))))) : ((~(var_11)))));
                            }
                        } 
                    } 
                    arr_50 [i_9] [i_10] = ((/* implicit */unsigned int) (+(max(((~(var_1))), (min((var_1), (((/* implicit */int) arr_2 [i_11] [(unsigned char)12] [i_9]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            arr_57 [15U] [15] = ((/* implicit */int) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4147896923U)));
            arr_58 [i_15] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [(short)15] [i_15])))) >> (((((1158773357) & (((/* implicit */int) arr_52 [i_15])))) - (11)))));
        }
        for (short i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                arr_65 [(_Bool)1] [i_17] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_8 [i_14] [i_14] [i_14] [i_14])) && (((/* implicit */_Bool) -413747793))))));
                arr_66 [i_14] [i_14] [i_14] [i_17] = arr_9 [i_14] [i_16] [i_16] [i_17] [i_14];
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    arr_69 [i_17] [i_17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_14] [i_14] [14])) : (((/* implicit */int) (short)30325))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [(_Bool)1] [i_16] [i_17] [i_17] [i_17] [3ULL]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_18] [5LL]))) / (arr_10 [i_17]))));
                    var_30 = ((/* implicit */long long int) 4294967295U);
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_16 [i_14] [(unsigned short)20] [i_17] [(_Bool)1]))) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)166)) || (((/* implicit */_Bool) arr_68 [i_18] [i_17] [(short)12] [i_16] [i_14] [i_14]))))))))));
                }
                var_32 = ((/* implicit */long long int) ((arr_61 [i_14]) / (arr_61 [i_14])));
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (+(((/* implicit */int) var_5)))))));
            }
            var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_14]))));
        }
        for (short i_19 = 1; i_19 < 21; i_19 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 1) 
            {
                arr_76 [i_14] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (short)-13502))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) != (((/* implicit */int) (unsigned short)10565)))))) : (arr_62 [i_19] [i_19 - 1] [13] [i_19])));
                var_35 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (443239661) : (var_1)))));
            }
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((var_2) > (((/* implicit */unsigned int) arr_9 [i_19] [i_19] [i_19] [i_14] [i_14])))) ? (((/* implicit */unsigned int) arr_74 [(unsigned char)5] [i_19] [i_19 - 1])) : (arr_72 [4ULL] [i_19 - 1] [i_19 + 1]))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_21 = 1; i_21 < 20; i_21 += 1) 
        {
            for (unsigned int i_22 = 2; i_22 < 21; i_22 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 4) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 1) 
                        {
                            {
                                arr_86 [i_22] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_22 [i_24] [i_24] [(_Bool)1])) / (((/* implicit */int) var_12))))));
                                var_37 = ((/* implicit */short) ((((var_7) % (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_22 + 1] [i_21] [i_22] [i_21 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_62 [i_22 - 2] [i_21] [(unsigned char)6] [i_21 + 2]))))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (long long int i_25 = 1; i_25 < 15; i_25 += 3) 
    {
        arr_89 [i_25] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(var_7)))))) < (min((((/* implicit */unsigned int) (short)-114)), (4294967288U)))));
        arr_90 [i_25] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_63 [i_25 + 1] [i_25] [7LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)35032)))) : (var_2))), (min((((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (var_6)))), (((((/* implicit */_Bool) arr_59 [i_25] [i_25])) ? (((/* implicit */unsigned int) var_0)) : (arr_72 [i_25] [i_25] [i_25])))))));
    }
    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            arr_96 [(_Bool)1] [(unsigned char)12] [i_26] = ((/* implicit */unsigned short) ((short) ((_Bool) arr_70 [i_26 + 1] [5] [i_26])));
            var_39 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26 + 1])) ? (((/* implicit */unsigned int) -443239661)) : (arr_71 [i_26 + 1] [i_26 + 1]))), (((((/* implicit */_Bool) arr_5 [i_26] [i_26] [i_26] [i_26])) ? (((/* implicit */unsigned int) max((-677203644), (((/* implicit */int) arr_16 [i_27] [i_27] [(_Bool)1] [(_Bool)1]))))) : ((-(536870912U)))))));
            var_40 *= min((((274877906943ULL) >> (((((/* implicit */int) (unsigned short)54983)) - (54942))))), (((/* implicit */unsigned long long int) -443239672)));
        }
        for (unsigned int i_28 = 1; i_28 < 21; i_28 += 1) 
        {
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (((!(((((/* implicit */int) arr_5 [i_28] [i_28] [i_28] [13LL])) == (((/* implicit */int) arr_52 [i_26])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_94 [(unsigned short)7] [i_28]), (((/* implicit */long long int) arr_61 [i_26])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_26])) ? (arr_70 [(unsigned short)14] [1LL] [i_28]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4342)))))) ? (((/* implicit */int) (unsigned short)4332)) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)61199))))))))))));
            arr_99 [i_28] [(unsigned short)5] = ((/* implicit */long long int) (unsigned char)255);
        }
        arr_100 [i_26] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-8LL) * (((/* implicit */long long int) -443239653)))) & (((/* implicit */long long int) arr_72 [(unsigned char)14] [i_26] [i_26]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46066)) >> (((arr_62 [i_26] [i_26] [i_26] [20LL]) - (3016621668U)))))) ? (arr_91 [i_26 + 1]) : (max((((/* implicit */long long int) arr_75 [i_26] [i_26] [3ULL] [5ULL])), (var_11))))) : (((((/* implicit */_Bool) ((4190208U) - (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) arr_9 [i_26] [i_26] [i_26] [i_26] [i_26])) ? (arr_79 [i_26] [i_26] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    }
    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
    {
        arr_105 [i_29] [i_29] = ((max((((/* implicit */long long int) var_1)), (((arr_91 [10U]) / (((/* implicit */long long int) 4290777074U)))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_29])))))));
        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((-443239681) == (((/* implicit */int) arr_77 [i_29] [i_29])))) ? (((/* implicit */int) ((unsigned short) 18446743798831644687ULL))) : (max((max((var_7), (arr_74 [i_29] [(short)19] [i_29]))), (((((/* implicit */int) arr_80 [i_29] [i_29] [(_Bool)1] [i_29])) ^ (((/* implicit */int) (_Bool)1)))))))))));
    }
}
