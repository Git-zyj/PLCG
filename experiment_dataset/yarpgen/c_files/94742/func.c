/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94742
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((((/* implicit */_Bool) var_12)) ? (max((var_16), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (max((((/* implicit */long long int) var_5)), (max((var_16), (((/* implicit */long long int) var_4)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_3 [i_0]);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_10 [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            arr_15 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 521466630152324772LL))))) : (((/* implicit */int) (unsigned short)9146))));
                            var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_4 + 3])), (arr_4 [i_0])))) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0])))))))) ? (((((/* implicit */_Bool) max((arr_11 [i_0]), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((int) arr_10 [(short)5]))) : (((unsigned long long int) var_16)))) : (min((((/* implicit */unsigned long long int) -521466630152324787LL)), (max((((/* implicit */unsigned long long int) 521466630152324772LL)), (0ULL)))))));
                        }
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [(signed char)12]))) : (arr_11 [i_0])))) : (min((((/* implicit */unsigned long long int) var_19)), (var_14)))))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max(((~(max((2711256484688767897ULL), (((/* implicit */unsigned long long int) (signed char)12)))))), (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) arr_8 [i_3] [i_0] [i_1] [i_0])), (var_16)))))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((((int) 521466630152324758LL)), (((/* implicit */int) var_13)))))));
                        var_24 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-58)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 521466630152324786LL))));
                        var_25 -= ((/* implicit */unsigned short) max((-521466630152324792LL), (((/* implicit */long long int) (short)22434))));
                    }
                }
                for (int i_6 = 3; i_6 < 9; i_6 += 1) 
                {
                    var_26 = ((arr_6 [i_0] [i_0] [i_1] [(signed char)9]) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)12)), ((unsigned short)34021)))), (min((-521466630152324735LL), (((/* implicit */long long int) (signed char)77)))))) : ((~(-521466630152324787LL))));
                    arr_21 [i_6 - 1] [i_6] [i_6] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_8 [(signed char)5] [i_0] [(signed char)5] [(signed char)5]), (arr_8 [i_0] [i_1] [i_0] [i_0]))))));
                }
                for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_27 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_20 [i_0] [i_1] [i_7])), (var_9)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((((/* implicit */short) arr_24 [i_0])), (var_12))))))), ((-(((unsigned long long int) (signed char)-2))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_6 [i_0] [i_7] [i_8] [i_9]);
                                arr_30 [i_9] [i_1] [i_7] = ((/* implicit */short) (-(min((((/* implicit */long long int) ((arr_20 [i_0] [i_8] [i_9]) ? (((/* implicit */int) arr_6 [i_7] [(unsigned short)4] [i_7] [i_8])) : (arr_8 [i_0] [i_0] [2] [(_Bool)1])))), (((((/* implicit */_Bool) arr_24 [i_9 - 1])) ? (((/* implicit */long long int) var_5)) : (arr_2 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-74))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        for (short i_11 = 3; i_11 < 9; i_11 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */int) max((max((((/* implicit */long long int) (-2147483647 - 1))), (-521466630152324787LL))), (((/* implicit */long long int) arr_1 [i_0]))));
                                var_29 = ((((/* implicit */_Bool) var_9)) ? (min((((((/* implicit */_Bool) arr_36 [i_0] [i_10] [i_7] [i_10] [i_11])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_1] [1] [i_10] [1]))))), (min((arr_11 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))) : (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_0] [i_1]))) : (arr_32 [i_0] [i_1] [i_7]))), (((/* implicit */long long int) max((var_5), (arr_34 [i_10] [i_10] [0])))))));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_27 [i_11 + 2] [i_11 - 2] [i_11 + 4] [i_11 + 2] [i_11 + 4])), (max((max((((/* implicit */long long int) (short)23)), (1849175699082806745LL))), (max((arr_3 [i_0]), (((/* implicit */long long int) var_17)))))))))));
                                arr_38 [i_0] [1] [i_7] [i_10] [9LL] [i_7] = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_17 [(short)8] [i_0] [i_7] [i_10] [i_10] [i_7])) : (arr_8 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_11 [(signed char)6])) ? (((/* implicit */long long int) arr_18 [i_11] [i_1] [i_7])) : (arr_37 [i_7] [i_1] [(short)3] [i_10] [i_11 - 3] [i_11]))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_11 - 2] [i_1] [(short)8] [i_10])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_7] [i_11 + 2])) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_7] [i_7] [i_11]))))), (var_19)))));
                                var_31 |= ((/* implicit */signed char) arr_20 [i_0] [i_1] [i_7]);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -521466630152324773LL)) ? (-521466630152324772LL) : (6387066940373673557LL))), (max((arr_11 [i_0]), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_7]))))))) ? (((/* implicit */int) min((((/* implicit */short) min((arr_24 [i_0]), (arr_35 [i_0])))), (max((((/* implicit */short) arr_13 [i_0] [i_1] [i_1] [i_0] [i_7])), (var_13)))))) : (max((((/* implicit */int) (_Bool)0)), (473358037)))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
    {
        arr_42 [i_12] [i_12] = max((((((/* implicit */_Bool) (-(arr_41 [i_12])))) ? (min((((/* implicit */long long int) arr_40 [4LL] [i_12])), (arr_41 [12]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_12]))))))), (((arr_39 [i_12]) ? (max((arr_41 [i_12]), (((/* implicit */long long int) arr_40 [i_12] [i_12])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)34021)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            var_33 = ((/* implicit */unsigned short) max((min((arr_44 [i_12] [i_13] [i_13]), (((/* implicit */short) arr_43 [i_12] [i_13] [i_13])))), (max((arr_44 [i_12] [i_13] [i_12]), (var_17)))));
            var_34 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_45 [(unsigned short)13])) ? (max((((/* implicit */long long int) arr_40 [i_12] [i_12])), (arr_41 [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12] [i_12] [i_13])))))));
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                var_35 *= ((/* implicit */short) max(((((!(((/* implicit */_Bool) arr_41 [i_13])))) ? (((((/* implicit */_Bool) arr_40 [i_13] [i_14])) ? (((/* implicit */int) arr_44 [i_12] [i_13] [i_14])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_47 [i_12] [i_12] [i_12])))), (((/* implicit */int) max((arr_43 [i_12] [i_13] [i_14]), (arr_43 [i_12] [i_13] [i_14]))))));
                arr_48 [i_13] [(short)11] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(arr_40 [i_12] [i_14]))), (((/* implicit */int) arr_44 [i_12] [i_13] [i_14]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [8] [i_13] [i_13]))) : (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) arr_46 [11] [i_13] [i_14] [i_14])) ? (((/* implicit */int) arr_43 [(short)12] [5] [i_14])) : (((/* implicit */int) arr_43 [i_12] [i_12] [i_12])))))) : (min((arr_40 [i_13] [i_13]), (max((arr_40 [i_12] [i_13]), (((/* implicit */int) arr_43 [i_12] [i_12] [i_12]))))))));
                arr_49 [i_12] [3] [3] = arr_40 [i_12] [i_12];
            }
            var_36 = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_41 [i_12])) ? (arr_41 [i_13]) : (((/* implicit */long long int) arr_40 [i_13] [i_13])))), (((/* implicit */long long int) (~(arr_40 [i_12] [i_13])))))), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
        }
        for (signed char i_15 = 4; i_15 < 14; i_15 += 1) 
        {
            var_37 = ((/* implicit */long long int) ((max(((_Bool)0), ((_Bool)0))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_40 [i_12] [i_12])) ? (((/* implicit */int) arr_44 [i_12] [(signed char)12] [i_12])) : (((/* implicit */int) var_4))))))) : ((~(arr_52 [i_12] [i_12] [i_15 - 4])))));
            arr_53 [i_12] = ((/* implicit */unsigned short) arr_41 [i_12]);
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
    {
        arr_57 [i_16] [i_16] = ((/* implicit */long long int) (~(((/* implicit */int) arr_44 [i_16] [i_16] [i_16]))));
        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) arr_39 [i_16]))));
        arr_58 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_47 [i_16] [(unsigned short)7] [i_16]))))) ? (((/* implicit */int) arr_44 [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_43 [i_16] [i_16] [i_16]))));
        var_39 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */long long int) arr_40 [i_16] [i_16]))))) ? (arr_46 [i_16] [i_16] [i_16] [i_16]) : ((~(arr_40 [0] [i_16])))));
    }
    for (int i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
    {
        var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) min((max((((/* implicit */short) arr_56 [4])), (var_2))), (((/* implicit */short) arr_39 [i_17])))))));
        var_41 = min((arr_46 [i_17] [7] [i_17] [i_17]), (((((/* implicit */_Bool) arr_60 [i_17])) ? (((/* implicit */int) arr_56 [i_17])) : (arr_60 [i_17]))));
        var_42 = ((/* implicit */_Bool) arr_44 [i_17] [i_17] [i_17]);
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 3; i_18 < 23; i_18 += 2) 
    {
        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) var_9))));
        arr_64 [i_18] [i_18] = ((/* implicit */unsigned long long int) arr_63 [i_18]);
    }
    var_44 = ((/* implicit */_Bool) var_14);
    var_45 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned long long int) var_16)), (var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_7)));
}
