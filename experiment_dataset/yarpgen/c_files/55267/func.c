/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55267
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
    var_20 = ((/* implicit */unsigned char) min((max((var_3), (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) var_12))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_21 *= ((/* implicit */signed char) min((max(((~(arr_0 [i_0 + 1]))), (((/* implicit */long long int) ((short) var_3))))), (((/* implicit */long long int) (-((+(((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                var_22 -= ((/* implicit */_Bool) (unsigned short)10);
                arr_10 [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_23 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_8)), (max((var_7), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2] [i_1] [i_1])))))))));
            }
            var_24 += ((/* implicit */short) 79499183U);
        }
        for (short i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 2; i_4 < 13; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            arr_20 [i_0] [(signed char)8] [(signed char)12] [i_4 - 1] [i_4] [i_4 - 1] = ((/* implicit */unsigned long long int) (unsigned char)0);
                            var_25 = ((/* implicit */long long int) (unsigned char)255);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) arr_9 [3U] [(unsigned short)2]);
                            var_27 = ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_1 [i_0] [i_0 + 1])), ((+(((/* implicit */int) (short)-3384)))))), (var_4)));
                        }
                    } 
                } 
            } 
            arr_31 [0LL] [0LL] [0LL] |= ((/* implicit */unsigned int) var_1);
        }
        var_28 = ((/* implicit */unsigned char) ((short) max((((unsigned short) var_13)), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_6)), ((unsigned char)255)))))));
        arr_32 [i_0] = ((/* implicit */unsigned char) var_6);
        var_29 = ((/* implicit */unsigned short) arr_18 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]);
    }
    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 3; i_11 < 20; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)6022)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (short)2778))));
                    arr_41 [i_10] [i_11] [(unsigned short)8] = ((/* implicit */_Bool) ((long long int) min((arr_35 [i_11 - 1]), (((/* implicit */short) var_5)))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) var_13);
        arr_42 [i_10] [i_10] = ((/* implicit */signed char) max((((/* implicit */int) min((arr_37 [i_10] [i_10] [i_10]), (((/* implicit */unsigned short) (short)-17066))))), (max((((/* implicit */int) arr_37 [i_10] [i_10] [i_10])), (arr_33 [i_10])))));
        arr_43 [i_10] [20LL] = ((min((((/* implicit */unsigned long long int) arr_40 [i_10] [i_10] [i_10] [i_10])), (max((((/* implicit */unsigned long long int) arr_37 [i_10] [i_10] [i_10])), (15558011233306906397ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10] [i_10] [i_10]))));
        arr_44 [i_10] [i_10] = ((/* implicit */signed char) max((max((((/* implicit */long long int) min((var_0), (((/* implicit */int) arr_40 [(unsigned short)5] [i_10] [i_10] [17ULL]))))), (min((((/* implicit */long long int) var_4)), (2924473493231305879LL))))), (((/* implicit */long long int) max((4215468106U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_10] [i_10] [i_10] [i_10]))))))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
    {
        var_32 = ((/* implicit */short) min((var_10), (((/* implicit */unsigned long long int) var_5))));
        var_33 = min((((/* implicit */long long int) ((int) arr_16 [i_13] [i_13] [i_13] [i_13]))), (max((var_18), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)106))))))));
    }
    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                {
                    var_34 &= ((/* implicit */long long int) var_2);
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 4; i_18 < 13; i_18 += 4) 
                        {
                            {
                                var_35 &= ((/* implicit */_Bool) 2425562930895215912LL);
                                arr_59 [i_15] [2U] [i_18] [6LL] &= ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            arr_62 [i_19] [i_14] = var_0;
            arr_63 [i_14] [i_14] = ((/* implicit */short) max((((unsigned long long int) ((unsigned short) 2908064842707147367ULL))), (((/* implicit */unsigned long long int) var_8))));
        }
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (short i_21 = 3; i_21 < 11; i_21 += 3) 
            {
                for (int i_22 = 0; i_22 < 14; i_22 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_23 = 0; i_23 < 14; i_23 += 3) /* same iter space */
                        {
                            var_36 = ((/* implicit */long long int) arr_71 [i_23] [i_22] [i_22] [i_21] [(unsigned short)8] [i_14]);
                            var_37 = max((((/* implicit */short) (!(((/* implicit */_Bool) max((var_17), (arr_11 [(_Bool)1] [7] [i_21]))))))), (max((arr_17 [i_23] [i_22] [10ULL] [(signed char)13] [10ULL]), (((/* implicit */short) min(((unsigned char)1), (((/* implicit */unsigned char) var_16))))))));
                        }
                        for (signed char i_24 = 0; i_24 < 14; i_24 += 3) /* same iter space */
                        {
                            arr_76 [i_20] [i_22] [i_21] [(unsigned char)6] [i_24] [i_14] [(unsigned char)2] &= ((/* implicit */short) (~(max((79499183U), (((/* implicit */unsigned int) (short)17052))))));
                            arr_77 [13LL] [i_20 - 1] [12ULL] [13LL] [13ULL] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (unsigned char)61)))));
                        }
                        for (signed char i_25 = 0; i_25 < 14; i_25 += 3) /* same iter space */
                        {
                            arr_80 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */long long int) var_19);
                            arr_81 [i_14] [i_14] [i_14] [i_14] [(unsigned short)3] = (-(((/* implicit */int) arr_69 [i_14] [i_14] [i_20] [i_21] [i_21] [i_14])));
                            var_38 = ((/* implicit */unsigned short) (short)-2779);
                        }
                        var_39 = ((/* implicit */unsigned long long int) (+(((int) var_16))));
                        var_40 -= ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_74 [i_14]))))));
                        var_41 = ((/* implicit */unsigned char) arr_34 [i_14]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_26 = 1; i_26 < 12; i_26 += 3) 
            {
                for (short i_27 = 2; i_27 < 13; i_27 += 2) 
                {
                    {
                        arr_87 [i_26] [i_26 + 2] [i_26 + 1] [i_26] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)61594)), (1012276692405284402LL)));
                        var_42 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)7750)), (-1567452566)));
                        var_43 = ((/* implicit */short) (-(((/* implicit */int) arr_74 [i_27]))));
                        var_44 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_16))) ? ((~(((/* implicit */int) arr_84 [i_14] [i_14])))) : (((/* implicit */int) var_16))));
                        arr_88 [i_14] [i_14] [(unsigned short)2] [i_26] [i_14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_55 [i_20] [i_20] [i_14])), (arr_13 [i_14] [i_14] [i_14]))))) ^ ((~(824633720832ULL)))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (short)-27177))))));
                    }
                } 
            } 
        }
        for (long long int i_28 = 2; i_28 < 12; i_28 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_29 = 1; i_29 < 11; i_29 += 3) 
            {
                arr_96 [i_29 + 3] [i_28] [(signed char)0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)250))));
                arr_97 [i_28] [i_29] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-15063))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_30 = 2; i_30 < 12; i_30 += 4) 
            {
                var_45 = ((/* implicit */long long int) (short)2784);
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 14; i_31 += 2) 
                {
                    for (unsigned int i_32 = 0; i_32 < 14; i_32 += 1) 
                    {
                        {
                            arr_108 [i_14] [i_28 + 1] [i_28] [i_28 + 1] [i_32] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_2))) ? ((~(((/* implicit */int) (short)2977)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_36 [i_14])), (var_5))))))), (((unsigned int) min((var_5), ((unsigned char)144))))));
                            var_46 += ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)56)), ((+(((/* implicit */int) ((signed char) arr_95 [i_31] [i_28])))))));
                            arr_109 [i_28] [i_28] [i_28] [i_28] = ((/* implicit */int) ((unsigned short) (signed char)-101));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_33 = 0; i_33 < 14; i_33 += 4) 
            {
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 14; i_34 += 3) 
                {
                    for (unsigned long long int i_35 = 4; i_35 < 12; i_35 += 4) 
                    {
                        {
                            arr_120 [i_28] [i_33] [i_28] = ((/* implicit */short) max((((/* implicit */int) (short)-2782)), (((((/* implicit */_Bool) ((unsigned short) var_17))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_52 [(signed char)2] [i_34] [i_35])), (arr_84 [i_35] [i_14])))) : (((/* implicit */int) arr_40 [i_35] [i_33] [(_Bool)1] [i_14]))))));
                            var_47 = ((/* implicit */int) (~(3413912037U)));
                            var_48 += ((/* implicit */short) arr_5 [i_14] [i_14] [i_14]);
                            arr_121 [i_28] = ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
                var_49 &= ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) (unsigned short)18505)) ? (1857482150U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_98 [i_33] [i_28] [i_33] [(unsigned short)8])))))))));
                arr_122 [i_28] [i_28 - 1] [i_28 - 1] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (signed char)-127)), (832644069U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_14)))))))) || (((/* implicit */_Bool) arr_116 [i_14] [i_28] [i_14] [i_14] [i_14] [i_14] [(short)9]))));
            }
        }
    }
    for (unsigned char i_36 = 0; i_36 < 11; i_36 += 4) 
    {
        arr_125 [i_36] [3ULL] = ((/* implicit */long long int) max(((~(1857482150U))), (((/* implicit */unsigned int) ((signed char) (unsigned short)9733)))));
        arr_126 [(unsigned short)4] = ((/* implicit */int) arr_26 [i_36] [i_36] [i_36]);
        var_50 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_15 [1] [(short)2] [(unsigned short)13]), (((/* implicit */unsigned short) arr_35 [i_36]))))), (var_2)));
    }
    var_51 = var_7;
    var_52 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22804))) : (0ULL)))));
}
