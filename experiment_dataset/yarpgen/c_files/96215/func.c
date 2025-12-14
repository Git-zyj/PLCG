/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96215
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
        var_19 -= arr_0 [i_0] [i_0];
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) -1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) < (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : ((~(arr_3 [i_0] [i_0]))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (11652844486943554336ULL))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_22 -= ((/* implicit */int) max((0ULL), (((/* implicit */unsigned long long int) arr_5 [(unsigned char)4]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (arr_6 [i_1] [i_3] [i_3])))) : (((((/* implicit */int) var_8)) % (421267265)))))) % (((long long int) max((arr_9 [i_2] [i_3] [i_4 + 2]), (arr_7 [i_4] [(signed char)9] [i_2])))))))));
                        var_24 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_5 [i_2])), ((+(((((/* implicit */_Bool) 1505483505U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) : (var_13)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_15 [i_1] [i_4 + 2]), (((/* implicit */short) arr_16 [i_4] [i_4] [i_4] [i_4] [i_4 + 2]))))) ? (max((((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_3] [i_4]))), ((-(((/* implicit */int) arr_16 [i_1] [i_2] [i_3] [i_4] [13LL])))))) : (((/* implicit */int) min((arr_16 [i_1] [i_2] [i_4 - 1] [i_4 + 1] [i_5]), (arr_16 [i_1] [i_2] [i_4 - 1] [(signed char)0] [i_5]))))));
                            var_26 &= ((/* implicit */_Bool) ((signed char) min((arr_8 [i_1] [i_4] [i_4] [(signed char)3]), (((/* implicit */short) ((arr_5 [i_1]) || (arr_14 [(unsigned short)6] [i_4] [i_4 - 2] [i_4] [i_2] [i_2] [i_1])))))));
                        }
                        var_27 = ((/* implicit */unsigned int) var_11);
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_1])))))));
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1])) ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2]) : (arr_13 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]))) > (max((arr_13 [i_1] [3ULL] [i_1] [i_2] [i_2] [i_2]), (arr_13 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1]))))))));
        }
    }
    /* LoopSeq 3 */
    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))), (min((arr_18 [i_6] [i_6]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))))));
        var_31 -= ((/* implicit */unsigned short) var_8);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((max((arr_7 [i_7] [i_8] [i_8]), (((/* implicit */unsigned int) var_5)))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [12ULL] [12ULL] [i_7] [i_8] [i_8] [i_8] [12ULL]))) == (2789483781U))))))))));
            var_33 |= ((/* implicit */int) ((short) arr_20 [(_Bool)1] [i_8]));
            var_34 = ((/* implicit */signed char) max(((+(max((((/* implicit */long long int) var_15)), (arr_6 [i_7] [i_7] [i_8]))))), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_15 [i_7] [i_7]))))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_35 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_7] [i_8])) < (((/* implicit */int) var_17))))), (((unsigned long long int) var_6)))));
                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (~(421267265))))));
            }
            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (~(((int) arr_9 [i_7] [i_8] [i_8])))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_34 [(unsigned short)2] [(unsigned short)2] |= ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned short) ((46622591U) == (arr_9 [i_10] [i_7] [i_7])))), (var_9))));
            var_38 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_8 [i_7] [i_7] [i_7] [i_7])))))) / (max((2468863486732441119LL), (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_7] [i_10] [i_10] [i_10] [i_7])) != (arr_31 [i_7] [i_10]))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_7] [i_10] [i_7])) ? (arr_21 [i_11]) : (arr_21 [i_11])))))));
                    arr_41 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_32 [i_7] [i_10] [i_10]);
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) var_17))));
                    arr_42 [i_12] [i_7] [i_12] [i_11] [i_7] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (arr_31 [i_7] [i_12])))), (((((((/* implicit */_Bool) arr_11 [i_12] [i_11] [i_7])) || (((/* implicit */_Bool) var_0)))) ? ((-(arr_39 [i_7] [i_10] [i_7] [4]))) : (((/* implicit */unsigned long long int) var_16))))));
                }
                for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    var_41 = ((((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_7] [i_11]))))))))) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) (signed char)38))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_5)), (var_2))))) : (((unsigned long long int) arr_38 [i_7])))) : (((/* implicit */unsigned long long int) arr_21 [i_7])));
                    var_42 += ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_13] [i_7])) ? (((/* implicit */int) arr_12 [5LL] [i_10] [i_11])) : (arr_35 [i_7] [i_10] [i_11] [i_13])))), (arr_33 [i_7] [(unsigned short)9] [4ULL]))));
                    var_43 ^= ((/* implicit */unsigned short) var_3);
                }
                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_11]))) <= (arr_18 [i_11] [i_10])))) == (((/* implicit */int) (signed char)25)))) ? (((((/* implicit */_Bool) arr_35 [i_10] [i_7] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29261)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_32 [i_11] [i_10] [i_10]))))) : ((-(2789483798U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_7] [i_10] [(unsigned short)6])) * (((/* implicit */int) var_12))))))))));
            }
            for (unsigned long long int i_14 = 1; i_14 < 6; i_14 += 3) 
            {
                arr_49 [(short)2] &= ((unsigned short) ((var_8) ? (min((arr_44 [i_7] [i_7] [i_10] [(signed char)0]), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [4ULL] [i_7])))));
                arr_50 [i_7] [8U] [i_14] &= ((/* implicit */long long int) (-(arr_0 [i_14] [i_10])));
                arr_51 [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_40 [i_7] [i_7] [i_14])), (var_15)));
                arr_52 [i_7] [i_7] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_5 [i_7]) || (arr_16 [i_14] [i_14] [i_7] [(_Bool)1] [i_7])))) - (((/* implicit */int) max(((unsigned short)0), ((unsigned short)18400))))));
            }
            for (unsigned long long int i_15 = 3; i_15 < 9; i_15 += 2) 
            {
                var_45 = ((/* implicit */unsigned short) ((unsigned int) ((((int) var_1)) << (((((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (arr_37 [i_7] [i_7] [i_15]))) - (18446744073709551614ULL))))));
                var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (-(var_16))))));
                var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [i_7] [i_10])) + (2147483647))) << (((((((/* implicit */int) arr_22 [i_15] [i_10])) + (649))) - (30)))))) ? (((/* implicit */int) arr_10 [i_7] [i_10] [i_7])) : ((-(((/* implicit */int) var_9))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_15 + 1] [i_15 - 2] [i_10]))))));
                /* LoopSeq 4 */
                for (unsigned char i_16 = 2; i_16 < 8; i_16 += 3) 
                {
                    var_48 |= ((/* implicit */long long int) (-(max((var_13), (arr_18 [i_15 - 1] [i_15 - 2])))));
                    var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_16 [i_16] [i_16 - 1] [i_15 + 1] [i_15 - 2] [i_15 - 2]))) ? (((unsigned long long int) arr_16 [i_16 - 1] [i_16 + 1] [i_15 + 1] [i_15 + 1] [i_7])) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (arr_16 [i_16] [i_16 + 1] [i_15 - 1] [i_15] [i_15]))))))))));
                    var_50 = 17263808167787762035ULL;
                }
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        var_51 = ((/* implicit */unsigned char) min(((-(((int) arr_2 [i_17])))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == ((+(((/* implicit */int) var_11)))))))));
                        arr_65 [i_7] [i_10] [i_7] [i_7] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_14))))) & (((long long int) arr_37 [2U] [i_7] [2U]))))) : (max((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_7)) : (arr_45 [i_15 - 1] [i_17] [i_18])))), (18446744073709551615ULL)))));
                        var_52 ^= ((/* implicit */unsigned int) max((((short) var_3)), (var_4)));
                        var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((unsigned long long int) (-2147483647 - 1))))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        var_54 &= ((/* implicit */int) arr_66 [i_15 + 1]);
                        var_55 = ((/* implicit */unsigned int) ((int) var_3));
                        var_56 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_15 - 1])) ? (arr_9 [i_7] [i_10] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_10])))))) - (max(((~(141863388262170624ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_3)))))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        var_57 &= ((/* implicit */short) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_2)))))));
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17263808167787762035ULL)) ? (((/* implicit */unsigned long long int) arr_26 [i_7] [i_7] [i_7] [i_20])) : (min((((/* implicit */unsigned long long int) arr_48 [i_7] [i_15 - 3] [i_17 - 1])), (arr_0 [i_7] [i_10])))));
                        var_59 = ((/* implicit */unsigned int) ((5846592846920220028ULL) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_6 [i_7] [i_15] [i_7])))) ? (((/* implicit */unsigned long long int) max((arr_54 [i_10] [i_15]), (((/* implicit */long long int) var_9))))) : (min((var_13), (arr_39 [6LL] [6LL] [i_7] [6LL])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 1; i_21 < 9; i_21 += 2) 
                    {
                        var_60 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_70 [i_7] [i_10] [i_15 - 2] [i_15] [(unsigned char)2] [i_17] [i_21])))))) / (max((((/* implicit */unsigned long long int) (signed char)25)), (10697698808216999514ULL)))));
                        var_61 |= ((/* implicit */unsigned short) min((arr_68 [i_15 - 3] [i_17] [i_17 - 1]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (arr_68 [i_15 - 1] [i_17] [i_17 - 1]))))));
                        arr_73 [i_7] [i_7] [i_15 - 3] [i_17] [i_21 + 1] = ((/* implicit */signed char) arr_14 [i_7] [i_7] [i_7] [i_15] [i_15] [i_17] [i_7]);
                    }
                    for (signed char i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        var_62 += ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) ((signed char) arr_61 [(short)1] [i_10] [(short)1] [i_10] [i_10]))));
                        var_63 = ((/* implicit */unsigned long long int) ((((((var_8) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_29 [i_10] [i_10] [i_15 - 3] [i_7])))) << (((((unsigned int) arr_3 [i_7] [i_22])) - (1489539642U))))) > (((/* implicit */int) var_2))));
                    }
                }
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) /* same iter space */
                {
                    var_64 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) var_17)), (((/* implicit */unsigned char) ((signed char) 10697698808216999494ULL))))))) > (4477214361054846575ULL)));
                    arr_79 [i_7] [0LL] [i_15] [i_23] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_3)), (var_13)));
                }
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
                {
                    var_65 = ((/* implicit */unsigned long long int) max((var_65), (((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) arr_8 [i_15] [i_15] [i_7] [i_7])) && (((/* implicit */_Bool) arr_78 [i_7] [i_10] [i_7] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_7] [i_7] [8] [2])) || (((/* implicit */_Bool) var_13)))))) : (arr_76 [i_7] [i_10] [(_Bool)1] [(_Bool)1]))), (((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_8 [i_7] [i_10] [i_15] [i_24])) && (((/* implicit */_Bool) arr_78 [i_7] [i_15 - 2] [i_7] [i_24]))))))))))));
                    var_66 = ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_11))))) > (min((((/* implicit */unsigned int) var_14)), (arr_11 [i_10] [i_10] [i_7]))))))) : (-1592506370787798625LL));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        arr_87 [i_7] [3U] [i_10] [i_15] [i_7] [i_10] [i_7] = ((/* implicit */int) arr_77 [i_7] [i_7] [i_7] [i_7]);
                        arr_88 [i_7] [i_10] [i_10] [i_7] [i_24] [i_24] [i_25] = ((((/* implicit */_Bool) arr_33 [i_15 - 1] [i_15 - 1] [i_24 - 1])) ? (arr_33 [i_15 - 2] [i_24] [i_24 - 1]) : (arr_33 [i_15 - 2] [i_15] [i_24 - 1]));
                    }
                    var_67 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (max((((/* implicit */unsigned long long int) var_6)), (max((4477214361054846575ULL), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) arr_20 [4] [4]))));
                }
            }
        }
        for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 2) 
        {
            var_68 = ((/* implicit */unsigned long long int) max((var_68), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)29261))))) : (max((arr_0 [i_7] [i_26]), (1714211225877409536ULL)))))))))));
            var_69 = ((/* implicit */unsigned int) max((var_69), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) arr_32 [i_26] [i_7] [i_7])) : (((/* implicit */int) arr_17 [i_26]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (var_0))))) : (min((0ULL), (((/* implicit */unsigned long long int) arr_45 [i_26] [i_7] [i_7])))))))))));
        }
        arr_92 [i_7] = ((/* implicit */_Bool) 9223372036854775807LL);
    }
    for (int i_27 = 0; i_27 < 22; i_27 += 3) 
    {
        var_70 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1ULL)))) % (var_1)))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_94 [i_27]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90)))))) : (((((/* implicit */_Bool) arr_17 [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_18 [i_27] [i_27])))))));
        var_71 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_18 [i_27] [i_27])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_94 [i_27]))))));
        var_72 = ((/* implicit */_Bool) min((var_72), (((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
        arr_95 [i_27] = ((/* implicit */unsigned short) min((max((((arr_93 [i_27] [i_27]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned char)20]))))), (((/* implicit */unsigned int) ((unsigned short) arr_94 [i_27]))))), (((/* implicit */unsigned int) (~(((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_27])))))))));
    }
    var_73 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) max((16732532847832142079ULL), (((/* implicit */unsigned long long int) var_1)))))) ? (((/* implicit */long long int) min((var_0), (((/* implicit */int) var_17))))) : (((((/* implicit */long long int) (+(((/* implicit */int) var_11))))) - (max((((/* implicit */long long int) var_11)), (var_16)))))));
    var_74 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((unsigned char) var_15)), (((/* implicit */unsigned char) ((var_12) || (((/* implicit */_Bool) var_3)))))))), (((unsigned int) ((((/* implicit */int) var_10)) << (((/* implicit */int) var_14)))))));
}
