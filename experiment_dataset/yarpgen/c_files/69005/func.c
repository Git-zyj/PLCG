/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69005
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = max((((/* implicit */unsigned long long int) (-(((arr_3 [i_0] [i_1]) ? (3972695597U) : (((/* implicit */unsigned int) var_8))))))), (((unsigned long long int) min((var_6), (((/* implicit */unsigned long long int) arr_1 [17ULL]))))));
            var_20 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
            var_21 = ((/* implicit */unsigned char) 13938196961227444588ULL);
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1498770443412437487ULL)))) ? (arr_0 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (arr_2 [i_0] [i_1]) : (((var_4) >> (((arr_5 [i_0] [i_0] [i_2]) + (27436576))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? ((-(var_17))) : (((/* implicit */unsigned long long int) var_0))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_22 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_3] [9ULL])) ? (((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */unsigned int) arr_9 [i_0] [i_1]))))) < (((((/* implicit */_Bool) ((int) arr_3 [i_0] [(unsigned char)9]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)147), (var_5))))) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))));
                            var_23 = ((((/* implicit */_Bool) min((((int) arr_2 [i_1] [i_1])), ((+(((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_17)))))) : (var_0));
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((((/* implicit */_Bool) (+(arr_2 [i_3] [2U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) : (((((/* implicit */_Bool) ((unsigned long long int) 2251799813685247ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13339390105947486139ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2558158036U)))) : (((((/* implicit */_Bool) var_2)) ? (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (var_6))))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (13339390105947486153ULL)));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_2))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_1] [(unsigned char)13] [i_2])) ? ((-(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                arr_17 [i_1] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) min((13938196961227444608ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -398623246)) ? (1736809260U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            arr_23 [i_0] = arr_2 [i_5] [i_6];
                            var_27 = ((/* implicit */unsigned int) max((arr_2 [i_1] [i_6]), (((/* implicit */unsigned long long int) ((var_2) > (((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                            var_28 = ((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_5] [i_6] [i_6 - 1] [i_7])) ? (arr_12 [i_1] [i_1] [i_5] [i_7] [i_6 - 1] [i_7]) : (arr_12 [i_0] [i_1] [i_0] [i_6] [i_6 - 1] [i_0]))))));
                        }
                    } 
                } 
            }
            var_29 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [17U] [2U] [2U] [i_0]))));
        }
        arr_24 [i_0] [i_0] = ((/* implicit */_Bool) 11222379335256003816ULL);
    }
    for (int i_8 = 1; i_8 < 23; i_8 += 3) 
    {
        arr_28 [i_8 + 1] [i_8] = ((/* implicit */unsigned char) ((_Bool) arr_27 [i_8 - 1] [i_8]));
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    {
                        var_30 = ((unsigned long long int) arr_31 [i_10] [i_8 + 1]);
                        var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_35 [i_8] [i_9] [i_10] [11ULL])), (arr_29 [i_8]))), (((/* implicit */unsigned long long int) arr_30 [i_10] [i_8 - 1]))))) ? ((-(var_16))) : (var_15)));
                        var_32 -= var_2;
                        arr_36 [i_8] [i_8] [i_10] = ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        } 
        arr_37 [i_8] &= ((/* implicit */int) ((max((var_3), (arr_26 [i_8 + 1]))) < (((/* implicit */int) var_9))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 4) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            {
                var_33 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (var_4) : (var_17)))))) ? (var_11) : (var_6));
                var_34 |= (+((+(((/* implicit */int) arr_4 [i_12 - 1] [i_12 - 1])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
    {
        arr_48 [i_14] [(_Bool)1] = arr_46 [i_14] [i_14];
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 24; i_15 += 4) 
        {
            for (unsigned long long int i_16 = 4; i_16 < 23; i_16 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned char) min((var_35), ((unsigned char)244)));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                        {
                            {
                                arr_60 [i_15] &= arr_59 [i_18] [i_17] [i_17 - 1] [i_16 - 1] [i_15] [i_15] [i_14];
                                var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_35 [i_16] [i_16 - 3] [i_16] [i_17 - 1])) + (((/* implicit */int) arr_35 [i_15] [i_16 - 3] [i_17] [i_17 - 1]))));
                                arr_61 [i_15] [i_16] [i_16 - 1] [i_16] [i_15] [i_15] |= ((/* implicit */int) arr_49 [i_14] [i_16] [i_16]);
                                var_37 *= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_53 [i_15] [i_15])) ? (arr_53 [i_18] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [9] [i_16 - 4] [i_17] [i_18]))))));
                                var_38 = ((/* implicit */int) max((var_38), (((((/* implicit */int) (!(arr_57 [(_Bool)1] [i_15] [i_18])))) << (((arr_33 [i_17 - 1] [i_17 - 1] [i_16 + 1] [i_16 - 4]) + (715070368)))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) var_1))));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned long long int) 16383U);
        arr_62 [i_14] = var_0;
        /* LoopNest 3 */
        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 4) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 1) 
                {
                    {
                        arr_70 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_14] [i_21] [i_14]))) + (arr_53 [i_21] [13ULL])));
                        var_41 = ((/* implicit */int) max((var_41), (((((/* implicit */_Bool) arr_53 [i_19] [i_19])) ? (((/* implicit */int) (_Bool)1)) : (var_8)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_23 = 0; i_23 < 24; i_23 += 1) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (unsigned int i_25 = 0; i_25 < 24; i_25 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_26 = 0; i_26 < 24; i_26 += 3) 
                        {
                            var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_6))))))));
                            var_43 = ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_22])) ? (((/* implicit */unsigned long long int) arr_64 [i_22] [i_22])) : (3979587064590334009ULL))))));
                        }
                        arr_84 [i_24] = ((/* implicit */unsigned char) arr_25 [i_25]);
                        arr_85 [i_24] = ((/* implicit */int) (+(((((/* implicit */_Bool) 2506919180U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_24] [i_23]))) : (var_16)))));
                        var_44 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned long long int) var_1))));
                    }
                } 
            } 
        } 
        var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) arr_74 [i_22])) : (((((/* implicit */unsigned long long int) 3324135295U)) + (12281559784056247106ULL))))))));
        arr_86 [i_22] &= arr_79 [i_22] [(unsigned char)14] [22U];
        arr_87 [i_22] [i_22] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_22])) ? (arr_50 [i_22] [i_22] [i_22]) : (arr_33 [i_22] [i_22] [i_22] [i_22])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((13938196961227444588ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (unsigned char i_27 = 0; i_27 < 24; i_27 += 4) 
        {
            var_46 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) - (((arr_75 [(_Bool)1] [i_27] [i_27]) / (((((/* implicit */unsigned long long int) 3411055202U)) * (var_7))))));
            var_47 = ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_1))) & (arr_69 [i_22] [i_27] [i_27] [i_27] [i_27] [i_22])))) ? (var_0) : (var_13));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            arr_93 [i_28] = ((/* implicit */_Bool) 5107353967762065476ULL);
            /* LoopNest 2 */
            for (unsigned int i_29 = 1; i_29 < 20; i_29 += 1) 
            {
                for (unsigned char i_30 = 3; i_30 < 22; i_30 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_31 = 1; i_31 < 20; i_31 += 4) /* same iter space */
                        {
                            var_48 = ((unsigned long long int) 5420658632550331308ULL);
                            var_49 = arr_53 [i_28] [i_28];
                        }
                        for (int i_32 = 1; i_32 < 20; i_32 += 4) /* same iter space */
                        {
                            arr_102 [i_22] [i_28] [i_28] [i_30 + 2] [i_32] = var_0;
                            var_50 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                        }
                        var_51 *= ((/* implicit */unsigned long long int) arr_63 [i_22]);
                        arr_103 [6ULL] [6ULL] [i_22] &= ((/* implicit */unsigned long long int) ((arr_65 [i_29] [i_30 - 1]) >> (((arr_91 [i_29 - 1]) - (623607209U)))));
                    }
                } 
            } 
            var_52 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) arr_69 [i_22] [16ULL] [i_28] [i_28] [22] [2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [(unsigned char)14] [i_28] [8] [0ULL])) || (((/* implicit */_Bool) arr_53 [12ULL] [i_28])))))))) ? (var_4) : (((unsigned long long int) max((arr_31 [i_28] [i_22]), (0ULL))))));
            /* LoopNest 2 */
            for (unsigned long long int i_33 = 0; i_33 < 24; i_33 += 4) 
            {
                for (unsigned int i_34 = 1; i_34 < 22; i_34 += 4) 
                {
                    {
                        var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) ((unsigned long long int) (-(min((((/* implicit */unsigned long long int) 2961812977U)), (0ULL)))))))));
                        var_54 = min((max((((/* implicit */unsigned long long int) (-(var_13)))), (arr_83 [i_34 + 1] [i_28] [20] [i_34] [i_22] [(_Bool)1] [(_Bool)1]))), (((/* implicit */unsigned long long int) arr_51 [i_28])));
                    }
                } 
            } 
        }
    }
}
