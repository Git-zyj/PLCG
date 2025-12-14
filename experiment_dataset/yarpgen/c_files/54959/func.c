/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54959
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
    var_17 &= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) var_12)) : ((((_Bool)1) ? (((/* implicit */int) (short)12942)) : (((/* implicit */int) (unsigned short)0)))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (signed char)-62)))))) ? ((+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)25090)) : (((/* implicit */int) (signed char)-74)))))) : ((((+(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_16))))));
    var_19 |= ((/* implicit */_Bool) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)62)) * (((/* implicit */int) (short)32767))))) ? (((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) (signed char)-62)) / (((/* implicit */int) (signed char)127))))));
        var_21 *= ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_1 [i_0 - 1] [i_0 - 1])))));
        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((unsigned char) var_4)))) ? (((/* implicit */int) (!(((var_15) && (arr_2 [(unsigned short)4])))))) : (((((/* implicit */_Bool) arr_0 [(signed char)6])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_0 [(short)0]))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [(unsigned char)7] [i_3])) : (((/* implicit */int) (unsigned short)65535))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */short) (unsigned short)17374);
                        arr_15 [i_0] [i_1] [i_2] [(signed char)3] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)4585))));
                    }
                }
                var_26 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2])) - (((((/* implicit */int) (short)12942)) << (((/* implicit */int) (unsigned short)7)))))));
            }
            for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                var_27 ^= ((_Bool) (_Bool)0);
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    arr_22 [i_0] [i_1] [i_5] [(_Bool)1] = (!(((/* implicit */_Bool) (unsigned short)48159)));
                    var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) ((((/* implicit */int) (short)32763)) != (((/* implicit */int) var_8))))) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) arr_0 [i_6]))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) | (5744086369046987458LL)));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)11)), ((short)-32765)))) ? ((((!(((/* implicit */_Bool) -6183827302961617052LL)))) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_1])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0 + 3] [i_5] [i_5])))) : (((/* implicit */int) var_6))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) var_2);
                        arr_29 [i_0] [3LL] [3LL] [i_6] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-62))));
                        arr_30 [i_0] [(unsigned short)0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_0] [(_Bool)1] [i_0] [(short)4]))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((arr_23 [4LL] [i_0 + 3] [i_0 - 4] [i_0] [i_0 - 4] [i_0 - 4]) ? ((~(((/* implicit */int) (unsigned short)29323)))) : (((/* implicit */int) ((unsigned short) arr_27 [(_Bool)1] [i_1] [i_5] [i_6] [i_8] [i_8] [i_8]))))))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1] [i_6] [i_5] [(_Bool)1] [i_6])) + (((/* implicit */int) (_Bool)1))));
                    }
                }
            }
        }
        /* vectorizable */
        for (short i_9 = 2; i_9 < 8; i_9 += 2) 
        {
            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_23 [i_9] [(unsigned short)6] [i_9 - 2] [i_0 - 1] [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_8 [i_0 - 1] [(short)9] [i_9])) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) arr_31 [i_0 - 3] [i_9] [i_0 - 3])) ? (((/* implicit */int) arr_27 [(_Bool)1] [i_0 - 2] [i_0] [i_0 + 3] [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) var_3))))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                arr_37 [i_0] [i_0] [i_0 - 4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_19 [i_10] [i_10] [i_9 - 2] [(_Bool)1] [i_0]))));
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_34 |= ((/* implicit */signed char) ((((arr_18 [(signed char)6] [(signed char)6] [i_9] [i_11]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)17378)))) ^ (((((/* implicit */int) (signed char)-54)) | (((/* implicit */int) (unsigned short)65514))))));
                        arr_43 [(_Bool)1] [i_0] [i_9] [i_9] [i_0] [2LL] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (short)-12945)) % (((/* implicit */int) (_Bool)1))))) == (arr_25 [i_0 - 2] [i_0 + 3])));
                        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_2)))) >> (((((((/* implicit */int) arr_1 [(_Bool)1] [i_9])) << (((((/* implicit */int) (short)26912)) - (26911))))) - (226)))));
                        var_36 = ((/* implicit */_Bool) max((var_36), ((!(((/* implicit */_Bool) (unsigned short)65521))))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0 + 3] [i_0])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_5))));
                    }
                    arr_44 [i_0] [i_0] [i_10] [i_11] = ((/* implicit */_Bool) ((short) ((unsigned short) (unsigned char)17)));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        var_38 = (((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_47 [4LL] [4LL] [i_9] [i_13] [(short)9])))) >= (((/* implicit */int) ((var_16) && (((/* implicit */_Bool) var_1))))));
                        var_39 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)211)))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_27 [i_0] [i_9] [i_0] [(_Bool)1] [i_10] [(_Bool)1] [i_15]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_36 [i_0] [i_13] [i_15]))))) ? (((/* implicit */int) ((signed char) (signed char)32))) : (((/* implicit */int) var_15))));
                        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0] [i_10] [i_10] [i_13] [i_15] [8LL])) ^ (((/* implicit */int) (_Bool)1))))) : (((long long int) var_15)))))));
                        var_42 = ((/* implicit */unsigned short) ((unsigned char) ((var_7) || (var_15))));
                    }
                    var_43 = (!(((/* implicit */_Bool) (unsigned short)29323)));
                    arr_52 [i_0] = ((/* implicit */long long int) var_12);
                    /* LoopSeq 4 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61498)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5992607191202075742LL)));
                        var_45 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) (unsigned short)37350)) : (((/* implicit */int) (short)32763))))));
                        arr_55 [i_0] [i_0] = ((/* implicit */_Bool) -391002747570581646LL);
                        arr_56 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) (unsigned short)65535)))))) >= (arr_25 [i_10] [i_16]));
                    }
                    for (signed char i_17 = 2; i_17 < 8; i_17 += 2) 
                    {
                        arr_59 [i_0 - 4] [i_0] = ((/* implicit */_Bool) var_5);
                        arr_60 [i_0 - 2] [i_9] [i_10] [i_0] [i_17] = ((/* implicit */short) ((var_15) ? (((/* implicit */int) arr_48 [1LL] [i_0 - 3] [i_0] [i_0 + 1] [i_17 + 1])) : (((/* implicit */int) arr_48 [i_0] [i_0 - 4] [i_0] [i_0 - 4] [i_17 - 2]))));
                    }
                    for (long long int i_18 = 4; i_18 < 8; i_18 += 2) 
                    {
                        var_46 -= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)68))));
                        var_47 = ((/* implicit */_Bool) (unsigned short)16);
                        arr_64 [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_3 [i_0]))))));
                        var_48 = ((/* implicit */unsigned short) ((arr_35 [i_0]) ? (((/* implicit */int) ((_Bool) (unsigned short)22177))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_5)))))));
                    }
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0 - 1] [i_10] [(_Bool)1] [i_19])) > (((/* implicit */int) arr_14 [i_19 - 1] [i_13] [i_9] [i_0]))));
                        arr_69 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4037)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)59))) : (3042921510897002983LL)));
                    }
                    var_50 -= ((_Bool) (_Bool)1);
                }
                for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_21 = 4; i_21 < 8; i_21 += 2) 
                    {
                        var_51 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_67 [i_0] [i_9 - 2] [i_9 - 2] [i_0] [i_20] [i_21 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_0 + 2] [(unsigned char)4] [(_Bool)1] [(unsigned short)8] [i_0 + 2]))))));
                        arr_77 [i_0 - 1] [(short)6] [i_21] &= ((/* implicit */long long int) ((_Bool) (short)-32763));
                        arr_78 [(_Bool)1] [i_9] [i_0] [i_20] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned short)56675)) : (((/* implicit */int) (short)-12954))));
                    }
                    var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_20] [i_10] [i_9 - 2] [i_0])) ? (((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [(unsigned short)2] [i_20])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */int) (unsigned short)710)) - (((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) arr_62 [i_9 - 1] [i_9 - 1] [i_9] [(signed char)5] [(unsigned short)9] [i_9 - 2]))));
                    arr_79 [i_9] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (signed char)54);
                    var_53 *= ((/* implicit */_Bool) arr_75 [i_0] [i_0] [i_0] [i_0 - 1] [i_10]);
                    arr_80 [i_0] [i_0] = ((/* implicit */short) ((arr_24 [i_9] [i_9 + 1] [i_0] [i_20]) ? (((/* implicit */int) arr_40 [i_0 + 3] [i_9 + 1] [i_10] [i_10])) : (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (unsigned short)22814)) : (((/* implicit */int) var_3))))));
                }
                arr_81 [i_0] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_9 - 1] [i_0] [i_0] [2LL])) >= (((/* implicit */int) var_6))));
                /* LoopSeq 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        var_54 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_86 [(unsigned short)2] [i_9] [i_0] [i_10] [i_23] = ((/* implicit */long long int) arr_58 [i_9 - 1] [(unsigned char)3] [i_0]);
                        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61502))))) ? ((-(((/* implicit */int) var_3)))) : ((-(((/* implicit */int) arr_17 [i_0] [i_9] [i_0])))))))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        arr_91 [i_0] [i_10] [i_10] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_0 [i_0]))));
                        var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (_Bool)0))))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))));
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        var_57 = ((/* implicit */_Bool) var_14);
                        arr_96 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (_Bool)1)))) != ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-56))))));
                        var_58 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0]))));
                        var_59 -= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)54))));
                        arr_97 [i_0] [i_0] [i_10] [i_22] [i_25] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_32 [i_9 + 2]));
                    }
                    arr_98 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25823)) * (((/* implicit */int) (unsigned short)61504))));
                    arr_99 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39696)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned short i_26 = 0; i_26 < 10; i_26 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_27 = 2; i_27 < 7; i_27 += 1) /* same iter space */
                    {
                        var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_104 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [(unsigned char)7] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [i_0 - 3] [i_0 - 1] [(short)3] [i_0 + 2] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        var_61 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)39713))));
                    }
                    for (signed char i_28 = 2; i_28 < 7; i_28 += 1) /* same iter space */
                    {
                        var_62 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39713)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_63 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_12)) - (54586))))));
                        var_64 = ((/* implicit */long long int) arr_93 [i_0] [(_Bool)0] [i_26]);
                        arr_109 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))) ? ((~(105553116266496LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0] [i_0])))));
                    }
                    arr_110 [i_0] [i_0] [i_0] [(_Bool)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (short)25611)) - (25589)))))) ? (((/* implicit */int) arr_12 [i_0] [i_10] [i_26])) : (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)39735))))));
                    arr_111 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_53 [i_9 + 2] [i_9 + 2] [i_9 - 2] [i_9 - 1] [i_9 + 1])) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                }
            }
        }
        var_65 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
    }
    var_66 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
}
