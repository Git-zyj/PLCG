/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77258
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_10 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65526))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_17 [(unsigned char)3] [(short)10] [i_2] [i_3] [(unsigned short)9] = ((/* implicit */_Bool) (((!(((_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (131071)));
                                var_13 = ((/* implicit */int) ((unsigned long long int) ((unsigned short) 2081043717)));
                                var_14 = ((/* implicit */unsigned int) (-(2081043717)));
                            }
                        } 
                    } 
                    arr_18 [i_0] [(_Bool)1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)239)))))) : ((-(-9078630594127778740LL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_25 [i_0] [(unsigned short)8] [i_2] [i_6] [i_6] [i_5 + 1] = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
                                arr_26 [i_0] [i_0] [i_0] [i_2] [i_5 + 3] [i_5 + 3] [i_6] |= ((/* implicit */signed char) ((16948826156459916964ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))));
                                var_15 = ((/* implicit */int) ((signed char) (+(131080))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 4) 
                {
                    var_16 = (-(var_7));
                    arr_29 [i_0] [9LL] [i_7] = ((/* implicit */unsigned short) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [(short)9] [i_0] [i_0] [i_7] [3ULL])))));
                    arr_30 [i_1] = (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967293U))))) : (((/* implicit */int) arr_3 [i_0])));
                }
                for (short i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 4; i_9 < 10; i_9 += 1) 
                    {
                        arr_36 [i_9] [i_8 - 1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) arr_8 [i_8 + 1] [i_1])));
                        arr_37 [(unsigned short)7] [i_8] [i_1] [i_1] [(short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)6940), (((/* implicit */unsigned short) ((short) 16383ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((12154128007231841167ULL), (((/* implicit */unsigned long long int) (unsigned char)13))))) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_10))));
                    }
                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 7; i_10 += 4) 
                    {
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned char)20))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))))))));
                        arr_42 [i_0] [i_1] [i_0] = (~(((((/* implicit */int) (unsigned char)13)) ^ (((/* implicit */int) (unsigned char)233)))));
                        arr_43 [i_0] [i_1] [i_8 - 1] [i_10 - 4] = ((/* implicit */signed char) ((((long long int) arr_1 [i_1] [6ULL])) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1577537320))))))));
                    }
                    var_18 = ((/* implicit */unsigned long long int) arr_12 [i_8 - 1] [i_8] [i_8] [i_8 + 1] [(unsigned short)7]);
                    arr_44 [i_0] [(unsigned char)4] [i_8] = ((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) var_10))))));
                    arr_45 [i_0] [i_1] [i_8 - 1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]))))));
                }
                arr_46 [i_1] [i_0] = ((/* implicit */long long int) (unsigned short)46670);
                arr_47 [i_0] &= ((/* implicit */_Bool) arr_15 [7ULL] [i_1] [i_1] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_11 = 2; i_11 < 10; i_11 += 4) 
    {
        var_19 = 4220943656931032890ULL;
        /* LoopSeq 2 */
        for (short i_12 = 2; i_12 < 11; i_12 += 3) 
        {
            var_20 += ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */_Bool) 0ULL)) ? (4877263248543053378ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))))) <= (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */long long int) arr_51 [i_12] [i_11 - 2]))))))));
            var_21 = ((/* implicit */long long int) ((unsigned int) (signed char)38));
            var_22 = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_52 [i_11] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)8)))))) | (((int) min((((/* implicit */unsigned int) var_10)), (var_2))))));
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            arr_57 [i_11] = ((/* implicit */int) var_9);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_14 = 2; i_14 < 10; i_14 += 4) 
            {
                arr_60 [i_11] [i_11] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)182)) ? (-202526980) : (((/* implicit */int) arr_53 [i_14 + 2] [i_11 + 1] [i_13 + 1]))));
                arr_61 [i_11] = ((/* implicit */unsigned char) -1736170399);
                var_23 &= (unsigned short)43596;
                var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)74)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            }
            for (unsigned char i_15 = 2; i_15 < 11; i_15 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)18866))) ? (max((((/* implicit */long long int) (short)-1)), (arr_52 [i_15 + 1] [i_16] [i_15]))) : (min((((/* implicit */long long int) var_5)), (arr_52 [i_15 - 1] [0ULL] [i_13])))));
                    arr_68 [(short)0] [i_13] [i_15] [i_15] = ((/* implicit */signed char) arr_64 [i_13]);
                    /* LoopSeq 2 */
                    for (long long int i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
                    {
                        arr_71 [i_11] [i_13] [12U] [(_Bool)1] [(signed char)9] [(unsigned short)5] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1147774352)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_11] [i_13 + 1]))) / (var_2)))) ? (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) arr_64 [i_11])) : (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_11 - 1] [10U] [10U] [i_17]))))))) : (((/* implicit */int) ((unsigned short) (unsigned char)0)))));
                        arr_72 [i_11] [i_11 - 1] [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 15000034128042131727ULL)))))));
                    }
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) arr_51 [i_11] [i_13 + 1]);
                        var_27 = ((/* implicit */_Bool) 0U);
                        var_28 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_64 [i_15 - 1])) : (((/* implicit */int) arr_59 [i_11 + 1] [i_13 + 1] [i_15 - 1])))));
                    }
                    arr_77 [(short)5] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_66 [i_11] [i_11 + 2] [i_15 - 1] [2U] [5ULL] [i_16]) <= (536870911U)))), (var_12)));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)14)))));
                }
                /* vectorizable */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_80 [i_11] [i_11 + 2] [i_11] [i_11] = arr_66 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_15] [i_15] [(unsigned char)6];
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) (+(((/* implicit */int) arr_65 [i_13] [i_13]))));
                        var_31 += ((unsigned int) 18446744073709551615ULL);
                        var_32 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_74 [i_15 - 1] [i_15] [i_15 - 1]))) + (var_3)));
                    }
                    for (unsigned long long int i_21 = 4; i_21 < 9; i_21 += 3) 
                    {
                        var_33 &= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_11 - 1] [i_11 + 1] [i_11 + 2]))) : (-8862981580724336571LL));
                        var_34 += ((/* implicit */long long int) (_Bool)0);
                    }
                }
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (((unsigned int) (short)-26682)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)254)), (var_4))))))))));
            }
            for (int i_22 = 0; i_22 < 13; i_22 += 4) 
            {
                var_36 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)24312)), (-4966980644973571953LL)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_23 = 2; i_23 < 12; i_23 += 4) 
                {
                    var_37 = ((long long int) (unsigned short)50864);
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) arr_86 [i_23] [i_22] [i_13]))));
                }
                for (short i_24 = 1; i_24 < 12; i_24 += 4) 
                {
                    arr_93 [i_11] [i_11] [i_11] [i_11 + 2] [i_11] = ((/* implicit */int) min((((((/* implicit */_Bool) 9072334993950704117ULL)) ? (4125372933607973568ULL) : (((/* implicit */unsigned long long int) -4966980644973571958LL)))), ((((!(((/* implicit */_Bool) 292879274)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-4966980644973571953LL)))) : (((((/* implicit */_Bool) (short)8)) ? (4147017665245596412ULL) : (15566704192271144937ULL)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_25 = 3; i_25 < 11; i_25 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) var_5);
                        var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-7550))));
                    }
                }
                arr_97 [i_22] [8U] [(_Bool)1] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-39))))), ((-(var_6))))), (((/* implicit */long long int) var_8))));
            }
        }
    }
    /* LoopSeq 2 */
    for (short i_26 = 0; i_26 < 25; i_26 += 3) 
    {
        var_41 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 0U)) : (14379423167260177883ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((((/* implicit */_Bool) arr_98 [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9))) : (9072334993950704117ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_42 = (-(((((/* implicit */_Bool) var_4)) ? (min((var_1), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((494248602U) <= (4294967289U))))))));
    }
    /* vectorizable */
    for (signed char i_27 = 3; i_27 < 9; i_27 += 2) 
    {
        var_43 = ((/* implicit */unsigned char) (~(var_8)));
        var_44 &= ((/* implicit */short) arr_50 [i_27] [i_27 + 2] [(short)8]);
        /* LoopNest 3 */
        for (unsigned long long int i_28 = 2; i_28 < 9; i_28 += 2) 
        {
            for (short i_29 = 2; i_29 < 10; i_29 += 3) 
            {
                for (unsigned char i_30 = 4; i_30 < 10; i_30 += 1) 
                {
                    {
                        arr_114 [i_27] [i_27] [i_29] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (short)0))))));
                        var_45 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)11))))));
                    }
                } 
            } 
        } 
        var_46 -= ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_27 - 3] [i_27 - 2]))));
    }
}
