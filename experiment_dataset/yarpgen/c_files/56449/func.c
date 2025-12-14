/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56449
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
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(2853209804U)))))))) % (var_16)));
    var_20 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != ((-(var_11)))))), (((unsigned long long int) var_17))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                arr_7 [i_0] [i_0] [i_1] [i_1] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 2] [i_1])) > (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 3])))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])))))));
                var_22 = ((/* implicit */long long int) max((var_22), ((-(((((/* implicit */_Bool) -327560095)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (-1LL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 2] [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_0] [i_2 - 2])) : (((/* implicit */int) arr_1 [(unsigned char)4] [i_3 - 1])))) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), ((short)(-32767 - 1)))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (-(8796093022144LL)))) ? (max((((/* implicit */unsigned long long int) ((short) arr_11 [i_0] [i_0] [i_2] [i_0] [i_4]))), (max((((/* implicit */unsigned long long int) var_0)), (6313768286301765566ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned char) (unsigned short)9784))))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_1 [i_5] [i_1]))));
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 17; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_26 |= ((/* implicit */long long int) min((max((arr_5 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_6 - 3] [i_1 + 3])))), (((/* implicit */unsigned long long int) ((arr_17 [i_0] [i_1] [i_0] [i_6 + 1] [i_7]) << (((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_5] [4ULL] [i_7]))) | (-4LL))) + (28LL))))))));
                            var_27 |= ((/* implicit */unsigned short) arr_3 [i_5] [i_5] [i_0]);
                            arr_22 [i_0] |= ((/* implicit */unsigned char) arr_0 [i_6 + 1] [(short)8]);
                        }
                    } 
                } 
            }
            var_28 |= ((/* implicit */unsigned int) max((((short) arr_14 [i_1 + 3] [i_0])), (((short) arr_8 [i_1] [i_1] [i_1] [i_1 + 1]))));
            var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [14ULL] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_0] [i_1]))))) : ((-(arr_0 [i_0] [i_0])))))) ? (min((((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [14LL] [i_1 + 2])) % (var_8))), (((/* implicit */int) arr_6 [i_1 - 2] [i_1] [i_1] [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0] [i_1])) >= (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [8ULL]))))), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)62035))))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_30 += ((/* implicit */unsigned short) ((12132975787407786050ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_8] [i_0] [i_8] [i_8]), (((/* implicit */unsigned long long int) -1084796520))))) ? (((/* implicit */int) min((arr_26 [i_0] [i_8]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (signed char)-116)))))));
            var_31 += ((/* implicit */unsigned long long int) ((((unsigned int) ((unsigned int) -1))) << (((var_5) + (1773712901)))));
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-32756)))))));
        }
        for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            var_33 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_9]))) / (((long long int) (-(((/* implicit */int) (short)-29696)))))));
            var_34 |= arr_25 [i_0] [i_9];
            var_35 -= ((/* implicit */unsigned int) (+(arr_8 [i_0] [i_9] [i_9] [i_0])));
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    var_36 -= ((/* implicit */short) (+(((((/* implicit */unsigned long long int) var_8)) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (arr_25 [i_0] [0ULL])))))));
                    var_37 |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((int) 11703329151064919152ULL))) ? (((/* implicit */int) (short)29696)) : (((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1)))))));
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_11] [i_9] [i_9])) ? (((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (((((/* implicit */_Bool) arr_26 [i_11] [i_11])) ? (((/* implicit */int) arr_9 [i_0] [i_10] [i_11] [i_11] [i_9] [i_10])) : (((/* implicit */int) arr_2 [i_11])))) : ((+(((/* implicit */int) (unsigned char)120)))))) : (((/* implicit */int) var_15)))))));
                }
                for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)62035))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8796093022144LL)) ? (2736936995U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9685)))))) : (6743414922644632464ULL))))));
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) var_8))));
                    var_41 |= ((/* implicit */unsigned char) ((18446744073709551615ULL) >> ((((-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_30 [i_9]))))))) + (1)))));
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (-((+(((/* implicit */int) arr_18 [i_0] [i_0] [i_12] [i_12])))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
                    {
                        var_43 &= ((/* implicit */unsigned int) arr_10 [i_0] [i_9] [i_10] [i_13 - 1] [i_13 - 1]);
                        var_44 += ((int) arr_38 [i_14] [i_14] [i_13 - 1] [i_10] [i_9] [i_0]);
                        var_45 -= ((/* implicit */short) (unsigned short)35512);
                        var_46 += ((/* implicit */short) ((((/* implicit */_Bool) (short)14336)) ? (1149112506U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 18; i_15 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned int) min((var_47), (((unsigned int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_15]))))))));
                        var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_0])))))));
                    }
                    for (int i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        arr_47 [i_16] [i_16 + 3] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-29696))));
                        var_49 -= ((/* implicit */unsigned int) ((int) -247252197622935100LL));
                    }
                    var_50 -= ((/* implicit */unsigned char) arr_19 [i_0] [i_9] [i_10] [i_10] [i_13] [i_0]);
                    arr_48 [i_0] [i_10] [i_0] [i_0] |= ((((/* implicit */int) arr_29 [i_0] [i_9] [i_10] [i_10])) != (((/* implicit */int) arr_29 [i_0] [i_9] [i_10] [i_0])));
                }
            }
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) (+(274065882362854626ULL))))));
            /* LoopNest 3 */
            for (unsigned char i_18 = 1; i_18 < 17; i_18 += 3) 
            {
                for (short i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    for (unsigned short i_20 = 0; i_20 < 19; i_20 += 4) 
                    {
                        {
                            var_52 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) -2041327721)) & (8796093022144LL)));
                            var_53 |= (unsigned short)3500;
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_65 [i_0] [i_21] [i_0] |= ((/* implicit */unsigned int) (+(247252197622935100LL)));
            var_54 = ((/* implicit */unsigned long long int) min((var_54), (((((/* implicit */_Bool) (+(max((10035452829619693974ULL), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62040))) : (max((170954070710173678ULL), (((/* implicit */unsigned long long int) var_15))))))));
        }
        for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 1) 
        {
            var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) ((((/* implicit */int) arr_20 [i_22] [i_0] [i_22] [i_22] [i_22])) % (var_14))))));
            var_56 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_66 [i_0])) ? (((/* implicit */int) arr_66 [i_0])) : (arr_15 [i_0] [i_0] [i_22] [i_22] [i_22])))));
            var_57 |= ((/* implicit */unsigned int) ((5926484303127166957LL) < (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_22] [4LL] [17U])))))));
        }
        var_58 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535))));
    }
    /* vectorizable */
    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
    {
        var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) != (arr_70 [i_23])))))))));
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 25; i_24 += 4) 
        {
            for (long long int i_25 = 0; i_25 < 25; i_25 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            {
                                var_60 &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
                                var_61 |= ((/* implicit */short) arr_80 [i_24] [i_26] [(short)0] [i_24] [i_24]);
                                var_62 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -247252197622935101LL)) ? (2147483647) : (((/* implicit */int) (short)(-32767 - 1)))))) > (arr_78 [i_23 - 1])));
                                arr_83 [i_25] [i_24] [i_25] [i_26] [i_24] [i_26] [(short)6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3062065542U)) ? (((/* implicit */unsigned long long int) 2349924355663600464LL)) : (6582889760521880166ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_28 = 0; i_28 < 25; i_28 += 3) 
                    {
                        for (unsigned short i_29 = 2; i_29 < 24; i_29 += 1) 
                        {
                            {
                                var_63 -= ((/* implicit */unsigned int) ((unsigned char) -247252197622935101LL));
                                var_64 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_71 [(short)22])) ? (3130754742U) : (((/* implicit */unsigned int) arr_84 [i_29 + 1] [i_24] [i_25])))) != (((arr_70 [i_23 - 1]) % (((/* implicit */unsigned int) arr_72 [(unsigned short)10]))))));
                                var_65 = ((/* implicit */long long int) min((var_65), (((/* implicit */long long int) ((_Bool) arr_72 [i_29 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_30 = 0; i_30 < 11; i_30 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            for (short i_32 = 2; i_32 < 9; i_32 += 1) 
            {
                {
                    var_66 += ((/* implicit */unsigned short) var_14);
                    /* LoopNest 2 */
                    for (unsigned long long int i_33 = 4; i_33 < 8; i_33 += 2) 
                    {
                        for (signed char i_34 = 0; i_34 < 11; i_34 += 2) 
                        {
                            {
                                var_67 &= ((/* implicit */short) (~(arr_81 [i_33] [i_33 + 1] [i_33] [i_33] [(_Bool)1] [i_33])));
                                var_68 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_26 [(_Bool)0] [i_31])) == (arr_95 [i_34] [i_32] [i_30]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)32767)))) : (((((/* implicit */_Bool) (short)29696)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11753))) : (arr_87 [i_34] [i_30] [i_32] [i_31] [i_34])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_69 = var_16;
    }
}
