/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85177
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
    var_17 = ((/* implicit */long long int) var_7);
    var_18 &= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_2 [i_0] [8LL] [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)12)), (var_3)))) ? (min((((/* implicit */unsigned long long int) var_12)), (arr_6 [18U] [i_4 - 1] [i_2] [i_3] [i_2]))) : (max((arr_10 [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_4 - 1] [4LL] [i_2] [i_1])))))) ^ ((~(((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0] [i_1]) : (var_5)))))));
                                arr_12 [i_0] [22U] [20] [i_2] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_2] [i_1])) : (var_0)))))) ? (((((arr_2 [i_0] [i_3] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_3])))))));
                                var_21 = ((/* implicit */short) (-((-(((long long int) arr_10 [i_0] [i_3]))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_9 [i_0] [i_2] [i_2] [i_2] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (unsigned short)65535))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) (signed char)118)) : (arr_8 [i_5] [i_5] [i_5] [i_5])));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            arr_17 [(unsigned short)9] [i_6] = ((/* implicit */short) var_8);
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
            {
                var_25 = var_9;
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-((~(((/* implicit */int) var_1)))))))));
                var_27 = (-(((/* implicit */int) ((short) (signed char)-120))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_5))));
                var_29 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_7])) > (((/* implicit */int) var_16)))))) : (arr_2 [i_5] [i_5] [i_7])));
            }
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
            {
                arr_23 [i_5] [i_5] &= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_7 [i_8] [(signed char)15] [(signed char)15] [i_5])) ? (8502776780479363225LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8] [i_6] [i_5]))))));
                /* LoopSeq 2 */
                for (signed char i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    var_30 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                    var_31 = ((/* implicit */unsigned short) (((-(var_3))) << (((((/* implicit */int) var_16)) + (48)))));
                    arr_26 [i_5] [i_6] [(signed char)1] [i_9 + 1] = ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5])));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) (signed char)-73);
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_9 - 1])) ? (((unsigned long long int) arr_14 [(unsigned short)3] [i_6])) : (((/* implicit */unsigned long long int) (-(2751790541272475411LL))))));
                    }
                    for (short i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        var_34 = ((/* implicit */short) var_16);
                        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_1 [i_5]) && (((/* implicit */_Bool) (short)-5727))))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_21 [i_5] [i_5])) : (((/* implicit */int) arr_15 [i_11]))))));
                    }
                    var_36 = ((/* implicit */unsigned int) (short)-7008);
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_37 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3868691627958676509ULL)))))));
                    var_38 = ((/* implicit */short) ((((-2147483632) + (2147483647))) << (((2142052900) - (2142052900)))));
                    var_39 = ((/* implicit */unsigned char) ((var_2) ? (((/* implicit */int) arr_28 [i_12 - 1] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_28 [i_12 - 1] [i_12] [i_12] [i_12 - 1]))));
                    var_40 = ((/* implicit */unsigned short) (-(((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [(unsigned short)9])))))));
                    var_41 = var_5;
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) > (arr_22 [i_5] [1] [i_8]))) ? (((/* implicit */unsigned int) ((arr_1 [i_5]) ? (((/* implicit */int) arr_16 [(signed char)3])) : (arr_35 [i_5] [i_5] [i_5] [i_5] [i_5])))) : ((~(arr_19 [i_5] [i_5] [i_8] [i_13])))));
                            var_43 = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    arr_47 [i_5] [i_5] [i_5] = ((/* implicit */int) var_12);
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) (unsigned char)253))))) || (((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_25 [i_5] [(unsigned char)3] [i_8] [i_15])) : (var_9))))));
                    var_45 = ((/* implicit */unsigned short) ((arr_7 [i_5] [i_6] [i_5] [i_8]) - (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    arr_48 [i_5] [i_5] [i_8] [i_15] = ((/* implicit */signed char) var_2);
                }
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((long long int) var_15)))));
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_5]))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [21LL] [i_6] [i_6] [(short)23] [i_6]))) : (var_15)))));
                    var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))) + (arr_39 [i_5] [i_5] [i_6] [i_5] [i_16] [i_16]))))));
                    var_49 = (-(((var_13) ? (arr_22 [(signed char)0] [i_8] [i_5]) : (((/* implicit */int) arr_13 [i_16])))));
                }
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    /* LoopSeq 4 */
                    for (short i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        var_50 = ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_5])));
                        var_51 = ((/* implicit */signed char) var_4);
                        arr_58 [12ULL] [i_6] [i_8] [i_17] [i_18] = ((/* implicit */unsigned long long int) var_16);
                        arr_59 [i_5] [i_18] [i_18] [i_6] [i_18] [i_18] = ((/* implicit */unsigned long long int) (-(arr_53 [i_5] [(signed char)12] [i_8] [i_17] [(signed char)12] [(signed char)12])));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_52 -= ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) (signed char)125)))));
                        var_53 = ((/* implicit */long long int) (-(var_15)));
                    }
                    for (unsigned short i_20 = 1; i_20 < 12; i_20 += 2) 
                    {
                        arr_64 [(signed char)10] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_5] [i_20 - 1] [i_17] [i_5] [i_20 + 1])) ? (((/* implicit */int) arr_31 [i_5] [i_20 + 1] [i_20 + 1] [i_20 + 1] [8])) : (((/* implicit */int) arr_31 [(short)5] [i_20 - 1] [i_8] [i_17] [i_20 - 1]))));
                        var_54 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_31 [i_20 + 1] [i_20] [i_20 + 1] [i_20] [i_20 - 1])) : (((/* implicit */int) (_Bool)1)));
                        var_55 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                        var_56 = ((/* implicit */unsigned short) min((var_56), (((/* implicit */unsigned short) (_Bool)1))));
                        var_57 -= ((/* implicit */int) (_Bool)1);
                    }
                    for (unsigned long long int i_21 = 2; i_21 < 12; i_21 += 4) 
                    {
                        var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) var_14))));
                        var_59 = ((((/* implicit */_Bool) arr_39 [i_21 - 2] [i_21] [i_21 - 2] [i_5] [i_5] [i_5])) ? (((var_0) << (((var_9) + (553399258))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))));
                    }
                    var_60 = ((/* implicit */signed char) ((((var_5) ^ (var_15))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_14)))))));
                }
            }
            for (unsigned short i_22 = 0; i_22 < 13; i_22 += 2) 
            {
                var_61 = ((((unsigned long long int) arr_9 [i_5] [i_5] [i_6] [i_5] [i_22])) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_5] [i_6] [i_5]))));
                var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_52 [10ULL])) ? (((/* implicit */int) var_4)) : (arr_8 [i_5] [i_6] [i_22] [i_22]))) != (((/* implicit */int) arr_5 [11LL] [i_6] [11LL])))))));
            }
            var_63 = ((/* implicit */signed char) var_7);
            arr_69 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((((var_9) + (2147483647))) << (((((var_5) / (var_5))) - (1ULL)))));
        }
    }
    for (long long int i_23 = 0; i_23 < 20; i_23 += 2) 
    {
        arr_72 [i_23] = ((/* implicit */unsigned char) ((unsigned int) (+(((var_2) ? (arr_70 [7ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_23] [i_23] [i_23] [i_23] [i_23]))))))));
        var_64 = ((/* implicit */_Bool) ((arr_8 [i_23] [i_23] [i_23] [i_23]) << (((((unsigned int) max((arr_11 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]), (((/* implicit */unsigned short) var_1))))) - (65482U)))));
    }
    for (unsigned short i_24 = 1; i_24 < 18; i_24 += 3) 
    {
        var_65 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_24 - 1]))) * (var_3))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_24 + 1]))) - (14702193374987669402ULL))) - (3744550698721882204ULL)))));
        /* LoopNest 2 */
        for (long long int i_25 = 0; i_25 < 20; i_25 += 3) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 2) 
            {
                {
                    arr_84 [i_24 - 1] [i_24] [i_24] [i_24 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((14702193374987669387ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_26])) ? (((/* implicit */int) arr_1 [i_26])) : (((/* implicit */int) var_14)))))))) ? ((~(((/* implicit */int) arr_82 [i_24] [i_25] [i_26])))) : (((/* implicit */int) var_14))));
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 0; i_27 < 20; i_27 += 2) 
                    {
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            {
                                var_66 &= ((/* implicit */unsigned int) var_6);
                                arr_90 [i_24] [i_25] [0U] [i_27] [i_27] [i_27] [(signed char)15] = ((/* implicit */unsigned char) var_2);
                                var_67 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_77 [i_27])), (9223372036854775799LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_86 [i_24] [i_25] [i_26] [i_27]))))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_79 [i_24] [i_24 + 2] [i_24 + 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_79 [i_24] [9] [i_24 - 1])) || (((/* implicit */_Bool) arr_79 [i_24] [i_24] [i_24 + 1]))))) : (min((arr_79 [i_24] [i_24] [i_24 + 2]), (arr_79 [i_24] [i_24] [i_24 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
