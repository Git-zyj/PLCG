/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76027
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-516970541518399618LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_2 [i_0] [i_0]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */short) 516970541518399611LL);
                    arr_11 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_2]);
                }
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) arr_2 [i_1] [i_3]);
                    var_21 = arr_6 [i_0] [i_3];
                    /* LoopSeq 2 */
                    for (int i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [i_4]);
                        arr_18 [i_0] [i_1] [i_3] [i_0] [i_1] = ((/* implicit */long long int) min((arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1]), (((((/* implicit */_Bool) arr_14 [i_0] [(short)3] [i_3] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (1903265382U)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 516970541518399630LL)) ? (((((/* implicit */_Bool) arr_17 [i_3] [i_4 - 1] [i_4 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_17 [(signed char)0] [i_4 - 1] [i_4 - 1] [i_5 + 3])) : (((/* implicit */int) arr_17 [i_3] [i_4 - 1] [i_4 - 1] [i_5 + 1])))) : (((/* implicit */int) (unsigned char)206))));
                            arr_22 [i_0] [i_1] [i_0] [i_4] [i_5] = arr_19 [i_0] [i_1] [i_3] [i_4 + 1];
                        }
                        var_24 = ((/* implicit */unsigned int) (unsigned short)38224);
                    }
                    for (int i_6 = 1; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_25 -= ((((/* implicit */_Bool) arr_16 [i_6 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_6 + 1] [16U])) ? (((/* implicit */long long int) min((1709493494), (((/* implicit */int) (unsigned char)63))))) : (min((((/* implicit */long long int) arr_19 [i_0] [i_1] [i_3] [i_6])), (-516970541518399610LL))))) : (8LL));
                            var_26 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_6 + 1] [i_6] [i_6 - 1])) ? (((/* implicit */int) arr_13 [i_6 - 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_13 [i_6 + 1] [i_6] [i_6 - 1]))))), (((((/* implicit */_Bool) (signed char)-102)) ? (562949936644096LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30708)))))));
                            var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 562949936644096LL)) ? (((/* implicit */int) arr_17 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_17 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])))), (((/* implicit */int) min((arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1]), (arr_17 [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 1]))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_28 += ((/* implicit */long long int) arr_21 [i_1] [i_3] [i_6 - 1] [i_6] [10]);
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [4ULL] = ((/* implicit */unsigned int) 516970541518399627LL);
                            var_29 = ((/* implicit */unsigned short) arr_4 [i_6 + 1]);
                        }
                        var_30 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_3]);
                        var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_8 [i_6] [i_6 - 1] [i_6 + 1])), (min((arr_16 [i_6 + 1]), (((/* implicit */unsigned int) arr_3 [i_6 + 1] [i_1] [(_Bool)1]))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)9)), (arr_25 [9ULL] [i_1] [i_3] [i_6] [i_6 - 1])))) : (-1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 - 1] [19])) : (((/* implicit */int) (short)5))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_3] [(unsigned short)2])), (4294967295U)))) ? (6874834360254946889ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))));
                    }
                    var_33 = ((/* implicit */short) 3039132904U);
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_9] [i_1]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 1; i_11 < 19; i_11 += 3) 
                        {
                            var_35 = ((((/* implicit */_Bool) arr_25 [i_0] [i_11 - 1] [i_0] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [(signed char)10] [i_11 + 1] [16ULL] [i_10] [i_1]))) : (562949936644096LL));
                            arr_40 [i_0] [i_1] [i_9] [i_1] [16] [i_11] |= ((/* implicit */unsigned short) 0ULL);
                            var_36 = ((/* implicit */unsigned short) 1255834387U);
                        }
                        for (short i_12 = 1; i_12 < 17; i_12 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned int) (signed char)-27);
                            var_38 = ((/* implicit */signed char) arr_38 [i_12 + 3] [i_12] [i_12 + 3] [i_12 + 3] [i_12] [i_12 - 1]);
                            arr_44 [i_0] [i_10] [i_9] [i_10] [i_12] [4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 562949936644092LL)) ? (((/* implicit */int) arr_43 [i_0] [i_1] [i_1] [i_10] [i_12 + 1])) : (((/* implicit */int) arr_41 [i_12] [i_12] [i_12] [i_12 + 2] [i_12 + 3] [i_12]))));
                            var_39 = ((/* implicit */unsigned int) arr_42 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1]);
                        }
                        arr_45 [(short)2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1])) ? (arr_16 [i_10]) : (arr_16 [i_1])));
                        var_40 *= ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [(short)9] [i_10]);
                    }
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_9] [i_13] [i_1])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_9] [i_13])) : (((/* implicit */int) (short)29181)))))));
                        var_42 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_36 [i_0] [(_Bool)1] [i_9] [i_13] [i_1] [i_1])));
                        arr_49 [i_0] [i_1] [i_1] [i_9] [i_13] = ((/* implicit */long long int) (unsigned short)0);
                        arr_50 [i_0] [i_1] [i_9] [i_0] [i_13] [i_1] = ((/* implicit */signed char) (unsigned char)10);
                        var_43 = ((/* implicit */_Bool) arr_6 [i_0] [i_1]);
                    }
                    for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
                        {
                            arr_56 [i_0] [i_15] [i_0] [12] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9091)) ? (((/* implicit */int) (short)9091)) : (arr_42 [12U] [i_1] [i_9] [i_14] [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_1] [i_9] [i_14] [i_14] [i_15]))) : (1903265393U)));
                            arr_57 [i_0] [i_15] [i_9] = ((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_9] [i_14] [i_1]);
                            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) 1127794801)) ? (arr_28 [i_15]) : (((/* implicit */int) arr_52 [i_0] [i_1] [i_9] [i_0] [i_14] [i_0])))))));
                        }
                        for (int i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
                        {
                            arr_61 [i_0] [i_0] [i_0] [(signed char)6] [i_0] [i_0] = ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0]);
                            arr_62 [2U] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)65535);
                            var_45 = arr_35 [(signed char)2] [i_1] [i_9] [i_9] [i_14] [i_16];
                            var_46 = (short)29181;
                        }
                        /* LoopSeq 2 */
                        for (short i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            arr_67 [i_0] [i_1] [(_Bool)1] [i_14] [(_Bool)1] [i_17] [1LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1]))));
                            var_47 = ((/* implicit */unsigned short) arr_55 [i_0]);
                            var_48 = ((/* implicit */unsigned long long int) arr_55 [i_0]);
                            var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_17])) ? (((/* implicit */int) arr_7 [i_0] [(unsigned short)19] [(unsigned short)2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [9]))));
                        }
                        for (unsigned short i_18 = 1; i_18 < 19; i_18 += 2) 
                        {
                            arr_72 [(unsigned short)18] [i_14] [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_9] [i_14] [i_18 - 1])) ? (((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_14] [i_18 - 1] [i_18])) : (((/* implicit */int) arr_58 [i_0] [i_0] [i_9] [i_14] [i_18 - 1] [i_0]))));
                            var_50 = ((/* implicit */long long int) arr_27 [i_18] [i_1]);
                        }
                        arr_73 [i_14] [i_9] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) : (1048575U)));
                        /* LoopSeq 2 */
                        for (short i_19 = 0; i_19 < 20; i_19 += 3) 
                        {
                            arr_76 [i_0] [i_1] [i_0] [i_19] [i_19] = arr_58 [i_19] [i_19] [i_14] [10U] [i_1] [i_0];
                            var_51 = ((/* implicit */unsigned long long int) (unsigned short)0);
                            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_0] [i_14] [(signed char)0] [i_14] [i_19])) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) arr_46 [i_0] [(unsigned short)12])))))));
                        }
                        for (long long int i_20 = 0; i_20 < 20; i_20 += 2) 
                        {
                            var_53 = ((/* implicit */unsigned int) arr_46 [i_1] [i_20]);
                            arr_79 [i_0] [i_1] [i_9] [i_14] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_55 [i_0]))));
                            arr_80 [i_0] [10ULL] [i_9] [i_14] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) arr_68 [(_Bool)1] [i_14] [i_1] [i_9] [i_14] [i_20])) ? (3493098997U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41457)))));
                            var_54 = ((((/* implicit */_Bool) 281495666U)) ? (((/* implicit */unsigned long long int) 1738887634)) : (9215891324962035654ULL));
                        }
                        var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_0] [i_0])) ? (((/* implicit */int) arr_35 [i_0] [i_1] [i_9] [3LL] [i_9] [i_14])) : (((/* implicit */int) (unsigned short)57101))));
                    }
                }
                for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 1) /* same iter space */
                {
                    var_56 = ((/* implicit */int) arr_48 [i_0] [i_1] [i_21] [i_21]);
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 0; i_22 < 20; i_22 += 4) 
                    {
                        var_57 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_21] [i_22])) ? (((/* implicit */int) arr_19 [(short)14] [i_1] [i_1] [6U])) : (((/* implicit */int) arr_19 [i_1] [(short)3] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [(signed char)2] [i_22])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_21] [i_22])) : (((/* implicit */int) (_Bool)1))))));
                        var_58 += ((/* implicit */short) 1385170848U);
                        var_59 = ((/* implicit */unsigned short) min((min((arr_78 [i_0] [i_0] [i_1] [i_21] [i_21] [i_1] [i_22]), (min((11571909713454604746ULL), (arr_78 [i_0] [i_1] [i_0] [i_22] [i_0] [i_1] [8LL]))))), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_21] [i_1]))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_24 = 0; i_24 < 20; i_24 += 4) 
                        {
                            var_60 = ((/* implicit */unsigned short) min((801868298U), (((/* implicit */unsigned int) (unsigned short)34013))));
                            var_61 = ((/* implicit */long long int) arr_51 [(short)15] [i_24] [i_23] [i_21] [(unsigned short)15] [i_0]);
                            var_62 *= ((/* implicit */unsigned short) arr_82 [i_1]);
                            var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) arr_4 [i_0]))));
                        }
                        var_64 = ((/* implicit */long long int) 677786438U);
                        var_65 *= ((/* implicit */unsigned short) arr_59 [i_0] [2] [i_0] [i_0] [i_0]);
                        var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) min((arr_26 [i_0] [i_1] [i_21] [14LL] [i_0]), (min((0LL), (((/* implicit */long long int) arr_88 [i_0] [i_1] [i_1] [i_23])))))))));
                        var_67 += ((/* implicit */long long int) arr_47 [i_0] [i_0] [i_0]);
                    }
                    arr_91 [i_0] [18U] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)11285)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))) : (arr_16 [i_0])));
                }
                var_68 &= ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0] [i_0]);
                /* LoopNest 3 */
                for (long long int i_25 = 0; i_25 < 20; i_25 += 1) 
                {
                    for (long long int i_26 = 3; i_26 < 18; i_26 += 2) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 20; i_27 += 2) 
                        {
                            {
                                var_69 = ((/* implicit */_Bool) max((var_69), (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0]))));
                                arr_101 [i_25] [i_26] [i_25] [i_1] [i_25] = ((/* implicit */short) arr_33 [i_0] [i_26 + 1]);
                                var_70 = ((((/* implicit */_Bool) max((3878043119860155393ULL), (((/* implicit */unsigned long long int) arr_37 [i_26 + 2] [i_26] [i_26 + 2] [i_26 - 3]))))) ? (((/* implicit */int) min((arr_37 [i_26 + 2] [(_Bool)1] [i_26 + 2] [i_26 - 3]), (((/* implicit */signed char) arr_85 [i_26 + 2] [i_26 + 2] [i_26 + 2] [i_26 - 3]))))) : (((/* implicit */int) arr_37 [i_26 + 2] [i_26] [i_26 + 2] [i_26 - 3])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
