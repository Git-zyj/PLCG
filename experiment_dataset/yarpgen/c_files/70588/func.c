/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70588
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
    var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */int) var_14)) + (((/* implicit */int) var_14))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (arr_0 [i_0]))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))));
        var_19 = ((/* implicit */int) max((var_19), (((int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((min((arr_0 [i_0]), (((/* implicit */long long int) (_Bool)1)))) / (arr_0 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((_Bool) var_6)) || (((/* implicit */_Bool) arr_4 [i_1 + 1])))))));
        arr_5 [i_1] [i_1 - 1] = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (arr_3 [i_1 - 1])))) : (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (var_1) : (((/* implicit */long long int) 702919762U))))));
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */short) var_2)), (arr_4 [i_1 + 1])));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) var_16)))));
                    arr_14 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_4 [i_2])))) >> (((((long long int) arr_1 [i_2])) - (25178LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_23 += ((((/* implicit */int) ((signed char) 702919753U))) <= (883254534));
                                arr_20 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_3])) ? (((((arr_0 [i_5 - 1]) + (9223372036854775807LL))) >> (((((int) 702919775U)) - (702919728))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_16 [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6 - 2]), (arr_17 [0LL] [i_5] [i_5 + 1] [i_6 - 1])))))));
                                var_24 = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_2])))) : (((/* implicit */int) max((arr_4 [i_4]), (arr_4 [i_3])))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_16 [i_2] [i_2] [(signed char)1] [i_2])) : (((/* implicit */int) var_6)))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2])) || (((/* implicit */_Bool) (signed char)69))))))))));
    }
    for (unsigned int i_7 = 2; i_7 < 12; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (short i_8 = 1; i_8 < 14; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) arr_16 [1LL] [1LL] [1LL] [1LL]);
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 3; i_10 < 15; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) max((arr_3 [i_10 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_8]))) ? (((/* implicit */int) arr_7 [i_8 - 1])) : (((/* implicit */int) var_16)))))));
                                var_29 -= ((/* implicit */_Bool) ((((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (arr_21 [i_11] [i_10]))))))) ? (((long long int) 3592047534U)) : (((/* implicit */long long int) ((/* implicit */int) (short)12361)))));
                            }
                        } 
                    } 
                    arr_35 [i_7] [i_8] [i_7] |= ((/* implicit */int) ((_Bool) ((((/* implicit */int) ((short) (_Bool)1))) + (((/* implicit */int) arr_27 [i_7])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                for (signed char i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_15 = 3; i_15 < 14; i_15 += 4) 
                        {
                            var_30 = ((/* implicit */short) ((max((arr_27 [i_7 + 1]), (arr_27 [i_7 - 1]))) ? (min((((unsigned int) arr_1 [i_7])), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) arr_22 [i_13]))))) && (((((/* implicit */int) arr_15 [i_12])) >= (-32)))))))));
                            var_31 *= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_13))))) ? (arr_3 [i_7 + 3]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)230))))))));
                        }
                        for (int i_16 = 1; i_16 < 14; i_16 += 4) 
                        {
                            arr_49 [i_7 + 2] [i_12] [i_12] [i_12] [(_Bool)1] [i_16] [i_14] = (-(((((/* implicit */_Bool) 702919762U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (9223372036854775807LL))));
                            var_32 = ((/* implicit */long long int) var_3);
                        }
                        for (long long int i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */long long int) (+(max((arr_44 [i_12] [i_7 - 2] [i_7 + 2] [i_12]), (((/* implicit */int) arr_31 [i_7] [i_7] [i_13] [i_7 + 1]))))));
                            var_34 = arr_47 [i_7 + 3] [i_7 + 3] [i_7] [i_7 + 3];
                            var_35 = (_Bool)1;
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */int) (_Bool)1)), (-10))) : (((arr_6 [i_13] [i_13]) / (((/* implicit */int) (unsigned short)50823))))))) >= ((+(max((0U), (3592047534U))))))))));
                            var_37 = ((/* implicit */unsigned int) min((var_37), (arr_3 [i_7])));
                        }
                        for (long long int i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                        {
                            var_38 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_8 [i_13])) != (((/* implicit */int) arr_42 [i_7 + 1] [i_14] [i_13] [i_12])))));
                            var_39 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) min((arr_42 [i_18] [i_7] [i_13] [i_7]), (arr_43 [i_7] [i_12] [i_7] [i_14]))))))));
                            var_40 = ((/* implicit */long long int) arr_33 [i_18] [i_12] [i_12] [i_7 + 4] [i_7 + 4]);
                        }
                        var_41 = ((/* implicit */short) ((min((arr_29 [i_7 - 1] [i_7] [i_7] [i_7 + 3]), (((/* implicit */long long int) (+(arr_3 [i_14])))))) >= (((/* implicit */long long int) ((arr_7 [i_7 - 1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_7 + 4])))))));
                        arr_54 [i_12] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned char) max(((((((_Bool)1) ? (((/* implicit */int) arr_45 [i_7] [i_12] [i_13] [i_14])) : (((/* implicit */int) arr_41 [i_12])))) / (((/* implicit */int) var_2)))), (((/* implicit */int) (short)-9679))));
                        arr_55 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) arr_25 [i_7] [i_12] [i_7]);
                        var_42 *= ((/* implicit */_Bool) arr_22 [i_13]);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (short i_19 = 2; i_19 < 20; i_19 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_21 = 0; i_21 < 21; i_21 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1058696885)))))));
                    var_44 -= ((/* implicit */short) ((((/* implicit */_Bool) 2147483642)) ? (0LL) : (((/* implicit */long long int) 15U))));
                    arr_67 [i_19] [i_19] [i_21] [i_22] [i_19 + 1] [i_19 - 2] = ((/* implicit */signed char) ((var_0) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 26LL)) ? (((/* implicit */int) (short)23693)) : (((/* implicit */int) arr_4 [i_19])))))));
                }
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    for (short i_24 = 1; i_24 < 17; i_24 += 1) 
                    {
                        {
                            arr_73 [i_21] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_60 [i_19] [i_24 - 1] [i_19 + 1]))));
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_72 [i_19 + 1] [i_20] [i_21] [i_21] [i_20] [i_24 + 1])) ? (-6434844501538733649LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 14U)) ? (((/* implicit */int) arr_70 [i_24] [i_23] [i_21] [18] [i_19])) : (((/* implicit */int) var_6)))))));
                            arr_74 [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_24 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_19 + 1] [i_24 + 4] [i_24 + 4] [i_24 - 1]))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32761))) : (arr_3 [i_19])))));
                            var_46 = ((/* implicit */int) arr_65 [i_19] [i_19] [i_19] [i_19 + 1]);
                        }
                    } 
                } 
            }
            for (long long int i_25 = 0; i_25 < 21; i_25 += 2) /* same iter space */
            {
                var_47 = ((/* implicit */short) ((int) max((((/* implicit */unsigned int) (short)-31983)), (0U))));
                arr_78 [i_19] [i_19 - 2] [i_19] [i_19 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_19 - 2] [i_20] [i_19 - 2])) ? (max((((/* implicit */unsigned int) arr_63 [i_19 + 1] [i_19 - 2] [i_19 - 1])), (arr_57 [i_25] [i_25]))) : (max((arr_57 [i_19 - 2] [i_19 - 1]), (((/* implicit */unsigned int) arr_63 [i_19 - 2] [i_19 - 1] [i_19]))))));
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                arr_81 [i_19] [i_26] [i_19] = ((signed char) (-(4294967295U)));
                arr_82 [i_19] [i_26] [i_20] [i_26] = max((((/* implicit */long long int) ((((/* implicit */_Bool) 3592047529U)) && (((/* implicit */_Bool) ((long long int) -32)))))), (((arr_79 [i_19 - 1] [i_26]) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) -1527772448)) ? (-327876205930262566LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)106))))))));
                var_48 += ((/* implicit */_Bool) (short)31991);
                var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) ((signed char) min((((/* implicit */short) var_6)), ((short)-31983))))))))));
            }
            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((unsigned short) -327876205930262576LL)))));
        }
        var_51 += ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (min((arr_66 [i_19 + 1]), (arr_66 [i_19 - 1])))));
    }
    for (int i_27 = 0; i_27 < 17; i_27 += 3) 
    {
        var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_1 [6]))) != (arr_66 [i_27])))))) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
        /* LoopNest 2 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            for (int i_29 = 0; i_29 < 17; i_29 += 1) 
            {
                {
                    arr_91 [i_29] [i_28] [i_29] = (-(((((/* implicit */_Bool) arr_75 [i_28])) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((int) (_Bool)0))))));
                    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) max((((arr_3 [i_28]) < (arr_84 [i_29]))), (((-5244598643097716988LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)110))))))))));
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_27] [i_27] [i_28] [i_27] [i_29] [i_29] [i_27])))))) : (((((/* implicit */_Bool) (short)32767)) ? (995880014U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70)))))));
                    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) arr_19 [(signed char)10]))));
                }
            } 
        } 
        arr_92 [i_27] = ((/* implicit */unsigned short) var_1);
        arr_93 [i_27] = (-(((/* implicit */int) (_Bool)1)));
    }
    var_56 = ((/* implicit */int) var_9);
}
