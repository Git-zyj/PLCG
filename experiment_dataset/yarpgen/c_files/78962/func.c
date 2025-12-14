/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78962
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_9 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */short) ((arr_4 [i_0] [i_1]) == (arr_4 [i_1] [i_2])));
                            var_16 = ((((481990419U) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)127))) && (var_12)));
                            var_18 = ((/* implicit */unsigned long long int) arr_6 [5ULL] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_1] [i_0])) | (267527310)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (var_3)));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((17725465534195283908ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_5] [i_5])))))) ? (arr_11 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    arr_25 [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) var_3);
                    arr_26 [i_6] [i_6 - 1] [i_7] [i_8] = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */short) max((((((/* implicit */int) (signed char)-103)) >= (((/* implicit */int) arr_19 [i_7])))), ((!(((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_6] [i_6 - 1])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) 15913097571804663003ULL))));
                        var_22 = ((/* implicit */unsigned int) var_8);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            arr_33 [i_6] [i_7] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_28 [i_6] [i_6] [(unsigned char)5] [i_8] [i_9] [i_10]);
                            var_23 = ((/* implicit */int) arr_17 [i_10]);
                            arr_34 [i_9] [i_10] = ((((((/* implicit */_Bool) arr_30 [i_8] [i_6 - 1] [i_8] [i_7 - 1])) ? (arr_30 [i_8] [i_6 - 1] [i_8] [i_7 + 2]) : (arr_30 [9ULL] [i_6 + 1] [i_8] [i_7 + 1]))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_6 - 1] [i_6 + 1]))))));
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        arr_39 [i_6] [i_7] [i_8] [i_11] = ((/* implicit */unsigned char) arr_18 [(unsigned char)12] [i_7 - 1]);
                        arr_40 [i_11] [i_7 + 2] [i_8] [i_11] [i_7] [i_11] = ((/* implicit */int) var_7);
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_6] [i_7] [i_7]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_36 [i_6] [i_8] [i_11]))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_37 [i_6] [i_7] [i_6] [i_11])) < (((/* implicit */int) arr_31 [i_6] [i_7] [i_8])))))) % (arr_29 [i_7 + 1]))))))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        arr_45 [i_6] [i_7] [i_8] [i_12] = ((/* implicit */unsigned long long int) arr_24 [i_6]);
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            arr_48 [i_13] = arr_47 [i_7 + 2] [i_7] [i_12] [i_6 + 1] [i_6 + 1] [i_13] [i_13];
                            var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_8] [i_8]))));
                            arr_49 [i_6 - 1] [6ULL] [i_6] [i_6] [i_13] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(11554415765414160893ULL)))) && (((/* implicit */_Bool) -2724897290714203984LL))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_52 [i_14] = ((/* implicit */signed char) ((6892328308295390749ULL) | (((/* implicit */unsigned long long int) ((6878994731554910551LL) & (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_47 [i_8] [i_7] [i_14] [(signed char)6] [i_14] [i_8] [i_7 - 1])))))));
                            var_28 += ((/* implicit */unsigned char) var_1);
                        }
                        arr_53 [i_12] [i_8] [i_7] [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7 + 1]))) == (6892328308295390708ULL));
                    }
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_8))));
                    /* LoopSeq 1 */
                    for (short i_15 = 1; i_15 < 23; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_35 [i_7 - 1] [i_7 + 1] [i_7 + 1])) : ((+(var_6)))))))));
                        arr_56 [i_6] [i_8] [i_6] [i_15] [i_8] [i_7] = ((/* implicit */unsigned char) var_6);
                    }
                }
            } 
        } 
        arr_57 [i_6 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_36 [i_6] [i_6] [i_6]))));
        arr_58 [i_6] = var_10;
        var_31 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_54 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1])), (var_3)));
    }
    for (short i_16 = 1; i_16 < 14; i_16 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_31 [i_16 + 4] [i_16 + 1] [i_16])) - (17113)))));
        arr_61 [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 51230416)) ? (min((arr_32 [i_16 + 3] [i_16] [i_16] [i_16 + 3] [i_16]), (((/* implicit */int) arr_23 [i_16 - 1] [i_16] [i_16])))) : (((/* implicit */int) arr_23 [i_16 - 1] [i_16] [i_16]))));
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            for (int i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                {
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_16 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), ((unsigned char)138)))) && (arr_44 [i_16 + 2] [i_17] [i_18] [i_16]))))) : (((((-6878994731554910536LL) ^ (((/* implicit */long long int) arr_12 [i_17])))) << (((((/* implicit */int) arr_54 [i_16] [i_16 + 3] [i_16] [i_16 - 1])) - (47275))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        arr_70 [i_16 + 3] [i_18] [i_18] [i_19] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(arr_64 [i_16] [i_17] [i_18] [(unsigned short)1]))), (arr_41 [i_16 + 2] [i_17] [i_18])))) && (((/* implicit */_Bool) ((unsigned long long int) 1370920791U)))));
                        arr_71 [i_18] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_16] [i_16] [i_18]))) | (((((9223372036854775808ULL) >> (((((/* implicit */int) arr_55 [i_16] [i_17] [i_18] [i_19])) + (48))))) >> (((/* implicit */int) var_11)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 18; i_21 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) ((((int) arr_67 [i_16 + 4] [i_16 + 1] [i_16 + 1])) - (((/* implicit */int) arr_31 [i_16] [i_16 + 1] [i_16]))));
                                var_35 = ((/* implicit */long long int) arr_60 [i_18] [i_20]);
                                var_36 = arr_31 [i_18] [(unsigned short)23] [i_16];
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */_Bool) arr_51 [i_16 + 4] [i_16] [i_17] [i_18] [i_18]);
                }
            } 
        } 
    }
    for (short i_22 = 1; i_22 < 14; i_22 += 4) /* same iter space */
    {
        arr_79 [i_22] = ((/* implicit */unsigned short) var_5);
        var_38 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_22])) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_54 [i_22] [i_22] [i_22] [i_22])) + (((/* implicit */int) var_10))))))) + (min((((/* implicit */long long int) (unsigned char)228)), (arr_17 [i_22 + 2]))));
        /* LoopSeq 2 */
        for (signed char i_23 = 0; i_23 < 18; i_23 += 1) 
        {
            arr_82 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_22] [i_22 - 1] [i_23])) ? (((((/* implicit */_Bool) arr_38 [i_22 + 1] [i_22] [i_22 + 1] [i_22 + 3])) ? (((/* implicit */unsigned long long int) 18)) : (arr_38 [i_22 + 3] [i_22] [i_22 + 2] [i_22 - 1]))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_22] [i_23] [i_22] [i_22] [i_23] [i_23]))) / (var_4))))))));
            arr_83 [i_22] [i_23] = ((/* implicit */unsigned char) -6878994731554910552LL);
        }
        /* vectorizable */
        for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 2) 
        {
            var_39 = ((/* implicit */short) ((((/* implicit */int) arr_85 [i_22 + 1])) + (((/* implicit */int) arr_85 [i_22 + 4]))));
            /* LoopNest 2 */
            for (unsigned char i_25 = 0; i_25 < 18; i_25 += 2) 
            {
                for (long long int i_26 = 0; i_26 < 18; i_26 += 2) 
                {
                    {
                        var_40 = ((/* implicit */long long int) arr_37 [i_22] [i_24] [5U] [i_26]);
                        arr_91 [i_22] [i_22] [i_22] [i_22 + 3] [i_22] [i_22] = ((/* implicit */unsigned char) (((~(var_1))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52499)))));
                        var_41 = ((/* implicit */int) arr_55 [i_22 - 1] [i_24] [i_24] [i_26]);
                        var_42 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_85 [i_22 + 4]))))) ? (((arr_89 [i_24] [i_24] [i_25] [i_26] [i_26]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_22] [i_25]))))) : (var_6));
                        arr_92 [i_26] = ((/* implicit */long long int) arr_31 [i_22 + 3] [i_24] [i_22 + 2]);
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)36559)) - (((/* implicit */int) arr_73 [i_22] [i_24] [i_24] [i_24]))));
        }
        var_44 = ((/* implicit */unsigned int) (+(max((18014329790005248ULL), (6892328308295390722ULL)))));
    }
}
