/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67766
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */short) arr_1 [i_0]))))) ? (((unsigned long long int) -1702354508)) : (min((((unsigned long long int) (unsigned char)0)), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
                    var_12 = ((/* implicit */unsigned char) ((unsigned short) 220915786));
                }
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_4] [0U] |= ((int) var_6);
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_6)))))) ? (((unsigned int) (signed char)39)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))), (arr_11 [i_5] [i_4] [i_4] [i_3] [i_4] [i_0])))))));
                                var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((arr_9 [i_1] [i_1] [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [4ULL])) != (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_3] [i_4] [i_3])) < (220915783))))))) : (((/* implicit */int) var_1))));
                                var_15 -= ((int) (!(((/* implicit */_Bool) ((short) 2047U)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_10 [i_1] [i_3]) != (arr_10 [i_1] [i_0])))) << (((3627713890320959514ULL) - (3627713890320959511ULL))))))));
                    arr_16 [i_0] [i_1] [i_3] |= ((/* implicit */int) arr_5 [i_0] [i_3] [i_3]);
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((arr_10 [i_0] [(signed char)7]) - (10749801774719797959ULL)))))) - (arr_12 [i_0] [i_0] [i_0] [i_0])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_25 [i_6] [i_1] [i_1] [(signed char)1] [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) | (2069U));
                                arr_26 [i_6] [i_1] [i_6] [i_7] [i_8] = ((/* implicit */signed char) (+(((unsigned long long int) 2047U))));
                                var_18 *= ((/* implicit */_Bool) ((arr_5 [14U] [i_1] [i_6]) ? (((/* implicit */int) arr_5 [i_8] [(signed char)7] [i_0])) : (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) var_9);
                }
                for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    var_20 = ((/* implicit */int) ((((((long long int) 5287311079350087172ULL)) <= (((/* implicit */long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))) : (3627713890320959516ULL)));
                    arr_31 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_9] [(signed char)13])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14819030183388592079ULL)) && (((/* implicit */_Bool) (signed char)-1)))))) : (((((/* implicit */_Bool) arr_13 [i_9])) ? (((/* implicit */long long int) arr_19 [i_9] [i_9] [i_9] [i_9])) : (var_2)))));
                    var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */int) arr_20 [i_9] [i_0] [i_0] [i_0] [i_9])), (((arr_5 [i_0] [i_1] [i_1]) ? (((/* implicit */int) arr_29 [5U] [5U] [i_0])) : (((/* implicit */int) var_5))))))), (max((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)81)), (arr_21 [6] [i_1] [i_1] [i_1] [i_9] [i_1])))), (((((var_2) + (9223372036854775807LL))) << (((/* implicit */int) var_1))))))));
                }
                var_22 = (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (var_0))))));
                /* LoopSeq 4 */
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
                        {
                            {
                                arr_43 [i_0] [i_0] [i_0] [i_10] [i_11] [i_11] [(signed char)9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_10))))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_11] [i_0]), (((/* implicit */signed char) var_1))))) ? (220915786) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [13U])) || (((/* implicit */_Bool) var_8)))))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (((((/* implicit */unsigned long long int) 2047U)) + (14819030183388592099ULL)))))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((636613908U), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)12] [i_1] [i_1] [i_1]))) | (var_0)))))))))));
                            }
                        } 
                    } 
                    arr_44 [i_10] [(signed char)5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -942025198))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_0))));
                }
                for (short i_13 = 2; i_13 < 13; i_13 += 1) 
                {
                    arr_49 [i_0] [i_13] [i_13] [i_13] = ((/* implicit */long long int) (((-((-(-220915800))))) / (max((max((arr_47 [i_1] [i_13]), (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) 14819030183388592099ULL)) ? (((/* implicit */int) (short)32256)) : (((/* implicit */int) (_Bool)0))))))));
                    var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) arr_21 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13] [i_13] [i_13])))))) < (arr_23 [(unsigned char)6] [i_1] [(short)6] [i_13 + 1] [i_1])));
                    /* LoopSeq 1 */
                    for (short i_14 = 1; i_14 < 12; i_14 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (+((+(arr_32 [i_14 - 1] [i_1] [i_1] [i_13 - 2]))))))));
                        arr_53 [i_0] [i_0] [0ULL] [i_13] [i_0] = ((/* implicit */signed char) (+(min((9223372036854775807LL), (((/* implicit */long long int) (signed char)100))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        for (long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((signed char) min((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))))), (max((((/* implicit */unsigned long long int) var_9)), (14819030183388592079ULL))))));
                                arr_58 [i_13] = ((/* implicit */_Bool) arr_22 [i_15] [i_0]);
                                arr_59 [i_15] [i_1] [i_1] [i_15] [i_15] [i_13] [i_16] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((short) (unsigned char)19))), (min((((/* implicit */unsigned long long int) (signed char)-10)), (3780179532306222019ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_34 [i_13]))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -220915786)) ? (((/* implicit */unsigned long long int) 4171814074U)) : (14819030183388592066ULL)))))) <= (min((((/* implicit */unsigned long long int) var_3)), (var_7))))))));
                            }
                        } 
                    } 
                    arr_60 [i_13] [i_1] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (((long long int) var_9))))) ? (((unsigned long long int) 4914626281597356008ULL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) / (865571128632360347ULL)))));
                }
                for (signed char i_17 = 0; i_17 < 15; i_17 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_9)) >= (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_10)) - (182)))))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) min((max((((/* implicit */int) var_3)), (arr_46 [i_1]))), (((/* implicit */int) (!(((/* implicit */_Bool) 3636394312U)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_19 = 0; i_19 < 15; i_19 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((3627713890320959492ULL) >> ((((+(((/* implicit */int) var_10)))) - (130)))));
                            var_32 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) != (((((/* implicit */_Bool) var_10)) ? (14819030183388592079ULL) : (((/* implicit */unsigned long long int) var_2))))));
                            var_33 = ((/* implicit */int) ((arr_10 [i_17] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        }
                        /* vectorizable */
                        for (short i_20 = 0; i_20 < 15; i_20 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned char) ((((4294965249U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)22444))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_18] [i_18] [i_17] [i_18] [(signed char)8])))));
                            arr_71 [i_1] [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)65515)))))));
                        }
                        for (short i_21 = 0; i_21 < 15; i_21 += 2) /* same iter space */
                        {
                            var_35 += ((/* implicit */long long int) ((min(((!(((/* implicit */_Bool) var_2)))), (((_Bool) 14819030183388592105ULL)))) ? (((/* implicit */int) ((unsigned char) (!(arr_48 [(_Bool)1]))))) : (((int) ((arr_50 [i_0] [i_1] [i_17] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [i_1] [i_18] [(_Bool)0]))))))));
                            var_36 ^= ((/* implicit */short) ((((/* implicit */int) max((arr_63 [i_0] [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) 14819030183388592074ULL)))))))) >> (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_8))))) >= ((((-2147483647 - 1)) - (((/* implicit */int) var_4)))))))));
                        }
                        var_37 = ((/* implicit */_Bool) var_9);
                    }
                }
                for (signed char i_22 = 0; i_22 < 15; i_22 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) ((((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_0] [i_0] [i_1] [i_22]))))) : (((/* implicit */int) ((unsigned char) var_2)))));
                    arr_77 [i_22] [i_1] [(unsigned char)10] = ((/* implicit */signed char) ((unsigned char) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */int) var_10)) | (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                    var_39 = ((/* implicit */signed char) arr_67 [i_0] [i_1] [(unsigned char)1] [i_22] [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_23 = 0; i_23 < 15; i_23 += 1) 
                    {
                        arr_80 [i_0] [i_0] [i_22] = ((/* implicit */int) ((3627713890320959557ULL) | (10ULL)));
                        arr_81 [i_22] = ((/* implicit */int) ((arr_9 [i_0] [i_0] [i_0] [i_0]) << (((((/* implicit */int) var_10)) - (180)))));
                        arr_82 [(unsigned short)14] [i_22] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_10))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 15; i_24 += 2) 
                    {
                        for (int i_25 = 0; i_25 < 15; i_25 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) -1))) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (unsigned short)38556)))))));
                                var_41 = ((/* implicit */long long int) max((var_41), (((min((((((/* implicit */_Bool) arr_13 [i_1])) ? (arr_28 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)32765))))), (var_2))) / ((-(var_2)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_42 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_2)));
}
