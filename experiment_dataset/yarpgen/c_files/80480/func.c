/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80480
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
    var_16 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */unsigned long long int) var_7)) ^ (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (402803174))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_17 |= ((/* implicit */unsigned short) arr_3 [i_1] [i_0] [i_0 - 4]);
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0 + 2]);
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) 831718486568210283LL);
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3072)) & (arr_0 [i_0 - 3])))) ? ((((-(arr_5 [i_0] [i_2]))) >> (((arr_5 [i_0] [i_2]) - (2865680196U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
        var_20 = arr_1 [i_0];
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        var_21 ^= ((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_0] [i_4] [i_5]), (arr_10 [i_0] [i_3] [i_3] [i_5])));
                        arr_13 [i_0] [i_3] [i_4] [7] [i_5 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)249)))), (max((((/* implicit */int) var_4)), (var_0)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(var_0)))), (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_3] [i_4]) : (((/* implicit */unsigned int) arr_11 [i_0] [i_3 + 2] [i_3 + 2] [i_0] [2ULL] [i_0])))))))));
                        var_22 = ((/* implicit */long long int) (~(115390749U)));
                    }
                    var_23 ^= ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_3 [i_3 + 2] [i_3] [i_3 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((unsigned short) var_11));
                                var_25 ^= ((/* implicit */unsigned long long int) (+(arr_5 [i_4] [i_4])));
                                var_26 = ((/* implicit */unsigned long long int) (-(max((arr_15 [i_0 - 3] [i_3 - 1] [i_6 - 3] [i_6 - 3]), (arr_15 [i_0 - 2] [i_3 + 1] [i_6 - 2] [i_6 - 2])))));
                                var_27 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_3] [i_4] [i_7])) ? (arr_14 [i_7]) : (arr_14 [i_0]))), (((((((/* implicit */int) var_8)) < (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((-665559117) <= (((/* implicit */int) var_6))))) : (((/* implicit */int) max((var_14), (arr_17 [10LL] [10LL] [i_0 + 3] [i_0] [i_4] [(unsigned char)10]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_0 - 1])) <= ((~(var_10))))))) ^ (((((/* implicit */_Bool) arr_15 [i_0] [3] [4U] [4U])) ? (((/* implicit */unsigned int) ((int) arr_18 [i_4] [8ULL] [i_8] [i_4] [i_3] [0] [i_4]))) : (max((((/* implicit */unsigned int) var_14)), (var_13)))))));
                            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 10977328885391129793ULL)) ? (((/* implicit */int) arr_23 [i_9] [10LL] [i_4] [i_3] [i_0])) : (((/* implicit */int) var_4))))) >= ((~(arr_6 [i_0] [5ULL]))))))));
                            arr_26 [i_9] [i_8] [i_4] [i_3] = ((/* implicit */unsigned char) var_2);
                            var_30 = ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0 - 3] [i_4]) : (((/* implicit */unsigned int) arr_11 [i_0] [1] [6] [i_8] [i_8] [i_9])))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) ^ (arr_1 [(unsigned char)9]));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                        {
                            arr_29 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0])) ? (arr_6 [i_0 + 2] [0ULL]) : (arr_6 [i_0 + 3] [i_0])));
                            var_31 = ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_6))));
                            arr_30 [4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1920)) ? ((+(-74834921))) : (74834920)));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 3) 
                        {
                            arr_34 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 853440788U)))))) < (((unsigned int) (unsigned char)163))));
                            var_32 = ((/* implicit */long long int) var_6);
                            var_33 = ((/* implicit */int) ((((2269814212194729984ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_12 [i_11 + 2])) : (var_9)))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            var_34 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((arr_12 [(unsigned short)8]) + (-74834921)))) : (((((/* implicit */_Bool) 13724010883006139930ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) : (arr_28 [i_8] [i_8])))))) ? (((/* implicit */int) ((arr_22 [i_12] [i_3] [i_4] [i_12] [i_12] [9]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254)))))) : ((+(max((-671442788), (((/* implicit */int) var_6)))))));
                            var_35 |= ((/* implicit */long long int) arr_33 [i_0] [i_0] [i_4] [i_12] [i_4]);
                            arr_37 [i_0] [i_3] [i_4] [i_4] [i_4] [i_0] [i_12] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) -397936445)), (1786510861601744613ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_11 [i_0 + 3] [i_3 + 2] [(unsigned char)3] [i_3 + 2] [i_12] [i_12]))))))));
                        }
                        var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_3] [i_3] [i_3] [i_4] [i_8] [i_8])) ? (1744540192U) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_11 [(unsigned char)7] [(unsigned char)7] [(unsigned char)0] [5] [i_3] [i_0])) : (var_15)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3] [i_3 - 1])) && (((/* implicit */_Bool) arr_18 [i_0] [i_3 + 1] [i_4] [(unsigned char)2] [i_0] [(unsigned char)2] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_33 [i_0 + 3] [i_3] [4] [i_3] [i_8]) + (((/* implicit */int) (unsigned char)249))))))))));
                    }
                    for (int i_13 = 2; i_13 < 11; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned char) ((min((arr_18 [i_14] [i_14] [i_14] [6ULL] [i_14] [i_14] [i_4]), (arr_18 [i_0 - 4] [i_0 - 4] [i_3 + 2] [i_4] [i_3 + 2] [i_0 - 4] [i_14]))) > (((((/* implicit */_Bool) arr_12 [i_0 - 1])) ? (arr_18 [i_0] [i_0] [i_4] [i_14] [i_14] [i_14] [i_4]) : (((/* implicit */unsigned long long int) arr_12 [i_0 - 3]))))));
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 11528310785586432917ULL)) && (((/* implicit */_Bool) 63))))), (arr_8 [i_0 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) 1073741824U))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (arr_1 [i_4])))) : ((-(3560334235137845871ULL)))))));
                            var_39 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((922233102U), (((/* implicit */unsigned int) 235631963)))))));
                            var_40 = ((/* implicit */unsigned short) arr_39 [i_0] [i_0]);
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11649357950579590762ULL)) ? (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0] [i_0 + 1])) : (arr_6 [i_4] [i_14])))), (((0ULL) / (((/* implicit */unsigned long long int) arr_28 [10ULL] [i_4]))))))) ? (((15989471078576622866ULL) + (((/* implicit */unsigned long long int) 1744540199U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [10] [(unsigned char)1] [i_4])) ? (((/* implicit */int) var_14)) : (var_7)))) ? (max((((/* implicit */long long int) (unsigned char)15)), (arr_6 [i_0] [i_3 + 2]))) : (((/* implicit */long long int) min((arr_38 [i_13]), (((/* implicit */int) arr_41 [i_0] [8] [i_0] [i_0] [i_0] [i_0] [8]))))))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned short) (~(arr_1 [i_0])));
                            arr_46 [i_4] [i_3] [i_4] [i_13] [i_15] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_35 [i_4] [12] [i_4] [i_4] [12] [i_4] [6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_40 [(unsigned short)10]))) % (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) / (arr_6 [i_13 - 1] [i_3 + 2]))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) & (((long long int) 2147483647)))));
                        }
                        var_43 = min((var_10), ((-(arr_22 [12] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]))));
                        var_44 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_13] [5] [i_3] [i_0 - 2] [5])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_4] [i_13 + 2] [i_4] [i_13 + 1]))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18221284882105040054ULL)) ? (((int) arr_16 [i_0] [i_4] [6LL] [i_13] [2ULL] [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) 7586840560498228405LL))))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_16 = 4; i_16 < 10; i_16 += 3) /* same iter space */
    {
        arr_49 [i_16] [i_16] = ((/* implicit */unsigned char) ((max((14491720431286804688ULL), (((/* implicit */unsigned long long int) arr_11 [i_16] [i_16 - 1] [i_16 + 2] [i_16 - 4] [i_16] [i_16 - 2])))) & (min((((/* implicit */unsigned long long int) (-(arr_2 [i_16])))), (13790910231062743322ULL)))));
        arr_50 [i_16] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_3 [i_16 - 2] [i_16 - 1] [i_16 - 2])) * (((/* implicit */int) arr_3 [i_16 - 4] [i_16 - 4] [i_16 - 1])))), ((+(2147483642)))));
    }
    for (unsigned long long int i_17 = 4; i_17 < 10; i_17 += 3) /* same iter space */
    {
        var_45 = 74834920;
        var_46 = ((/* implicit */unsigned short) arr_21 [i_17] [i_17] [i_17]);
        /* LoopSeq 1 */
        for (unsigned char i_18 = 2; i_18 < 11; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_19 = 2; i_19 < 12; i_19 += 3) 
            {
                arr_58 [i_17] [i_17] [i_19] [i_17] = ((unsigned long long int) arr_38 [i_17]);
                var_47 = ((((/* implicit */_Bool) ((int) max((2550427104U), (((/* implicit */unsigned int) 1986471904)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_17 - 4] [i_17 - 4] [i_18 + 1] [i_19] [i_19 + 1]))))) : (var_10));
            }
            for (unsigned int i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 1; i_21 < 11; i_21 += 4) 
                {
                    for (int i_22 = 3; i_22 < 9; i_22 += 4) 
                    {
                        {
                            var_48 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? ((-(((((/* implicit */_Bool) 4579663585868753897ULL)) ? (((/* implicit */int) (unsigned short)34984)) : (arr_42 [i_17] [i_22] [i_20] [i_20] [3]))))) : ((~(arr_12 [i_17])))));
                            var_49 = (+(((13867080487840797719ULL) / (((/* implicit */unsigned long long int) arr_53 [i_17 - 3] [i_18 + 2])))));
                            var_50 = ((((/* implicit */_Bool) ((int) arr_27 [i_21] [i_21] [i_21] [i_21] [i_21 - 1] [i_22]))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_24 [i_17] [i_18] [i_18] [i_18] [7ULL] [i_20] [i_20])) ? (14149538036590157324ULL) : (((/* implicit */unsigned long long int) arr_2 [i_21])))))) : (((arr_12 [i_17 - 1]) / (arr_12 [i_17 - 3]))));
                            var_51 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_48 [i_17 - 1])), (arr_36 [i_17] [i_17 + 1] [i_21 + 2])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)48668)), (798790143U)))) : (max((arr_36 [i_17] [i_17 - 3] [i_21 + 2]), (((/* implicit */long long int) arr_48 [i_17 + 1]))))));
                        }
                    } 
                } 
                var_52 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_48 [i_20]))));
                var_53 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (arr_21 [i_20] [i_20] [i_20])))) ? (arr_63 [i_17 - 3] [i_17] [10U] [i_18 + 1]) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [(unsigned char)9])) : (((/* implicit */int) (unsigned short)0))))))) > (max((((var_3) & (((/* implicit */unsigned int) arr_15 [(unsigned short)7] [i_18] [(unsigned short)7] [i_18 + 2])))), (var_13)))));
            }
            arr_67 [6U] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_17])) ? (arr_21 [i_17 - 1] [i_18 + 2] [(unsigned short)1]) : (((/* implicit */long long int) 2030904791))))), (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_55 [i_17]))))))));
        }
    }
}
