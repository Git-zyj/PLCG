/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89604
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
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    var_14 = ((/* implicit */short) var_11);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (short)8939);
                    var_15 += ((/* implicit */int) (_Bool)1);
                }
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    arr_11 [(unsigned char)3] [i_1] [i_0] = ((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_1] [i_0]), (arr_3 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 9; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((/* implicit */int) (short)-8936)))))));
                                var_17 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_4 - 2] [i_4 + 2] [i_4 - 2] [5] [i_4 - 1] [8ULL]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)90))));
                }
                for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((arr_2 [i_8] [i_1] [i_0]), (((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_0] [i_0] [2ULL] [i_0])), (max((var_6), (var_6)))))))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)-8940))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */unsigned long long int) ((((unsigned long long int) ((((var_3) + (2147483647))) >> (((((/* implicit */int) var_4)) + (8146)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((8786900827865015141LL), (((/* implicit */long long int) (short)8954))))) ? (((/* implicit */int) arr_19 [i_6])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_21 [i_0] [0U] [i_6] [i_1])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_6] [i_1])))))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)210)), (var_1)))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)20)) != (((/* implicit */int) arr_25 [i_1] [i_1] [i_6] [i_0]))))), (max((((/* implicit */unsigned long long int) arr_24 [i_0] [i_1] [i_1] [i_6] [2ULL])), (var_9)))))));
                }
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                arr_38 [i_0] [i_1] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 536870911U)) && (((/* implicit */_Bool) max(((+(var_10))), (((/* implicit */unsigned long long int) var_8)))))));
                                arr_39 [i_11] [i_10] [(_Bool)1] [(short)3] [i_1] [i_0] [(short)5] = ((/* implicit */unsigned int) arr_4 [i_9] [i_9] [i_11]);
                            }
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((_Bool) (((+(var_7))) / (((/* implicit */int) (!(arr_19 [i_10]))))))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                            {
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-2021581739)))) ? (((unsigned long long int) arr_1 [i_10])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_0 [i_0])))))))))));
                                var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (536870924U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (3758096383U)))) : (((((/* implicit */_Bool) 14745134434336727709ULL)) ? (arr_37 [1ULL] [i_12]) : (((/* implicit */unsigned long long int) 434273953))))));
                            }
                            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_23 [i_1] [i_13 + 1] [i_13] [i_13] [i_13])))) ? (((/* implicit */int) ((short) arr_23 [i_10] [i_13 + 1] [10LL] [5U] [i_13]))) : (((/* implicit */int) (!((_Bool)1))))));
                                arr_45 [i_13] [i_10] [(short)0] = ((/* implicit */short) arr_10 [i_0] [(_Bool)1] [i_9] [i_10]);
                            }
                            /* vectorizable */
                            for (short i_14 = 2; i_14 < 10; i_14 += 4) 
                            {
                                arr_48 [i_0] [(unsigned char)2] [i_9] [i_10] [i_14] = (_Bool)1;
                                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (-(arr_4 [i_1] [i_14 + 1] [i_14 - 1]))))));
                                var_28 ^= ((arr_36 [i_14] [9] [i_14] [i_14 - 2] [(short)2] [i_14] [i_14 - 1]) && (((/* implicit */_Bool) ((long long int) var_5))));
                            }
                            for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                            {
                                var_29 = ((/* implicit */unsigned char) (_Bool)1);
                                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((arr_5 [i_15] [i_10] [i_9]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0] [(short)10] [i_9] [i_10] [i_15] [i_1])))))))) ? ((+(((/* implicit */int) arr_8 [i_1] [3])))) : (((/* implicit */int) (short)-8941)))))));
                            }
                            var_31 = ((/* implicit */unsigned int) arr_8 [i_10] [(unsigned char)2]);
                        }
                    } 
                } 
                var_32 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10084407379058548580ULL)) ? (-1022772139) : (((/* implicit */int) arr_44 [i_1] [i_1] [i_0]))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), (var_12)))))))), (((((long long int) arr_26 [(short)2] [i_1] [i_0] [i_0])) / (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 2) 
    {
        for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            for (unsigned char i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_24 [i_16 + 1] [i_16] [i_16] [i_17] [i_18])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 1; i_19 < 8; i_19 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) max((var_34), (((long long int) ((((((/* implicit */int) arr_46 [(_Bool)0] [i_17] [i_18])) + (2147483647))) >> (((var_3) + (612795348))))))));
                            arr_65 [(unsigned char)4] [i_16] = ((/* implicit */long long int) (~(arr_26 [i_16 - 1] [i_19 + 2] [i_19] [i_20 - 1])));
                            var_35 -= ((/* implicit */int) (-(((((/* implicit */_Bool) 10084407379058548581ULL)) ? (459243996U) : (var_8)))));
                            var_36 = ((/* implicit */unsigned char) ((arr_5 [4U] [i_20 - 1] [i_19 + 1]) ? (((/* implicit */int) arr_5 [i_20] [i_20 - 1] [i_19 + 1])) : (arr_32 [i_16 - 1])));
                            var_37 += ((/* implicit */unsigned long long int) (-(arr_60 [i_20 - 1] [i_19 + 2] [i_16 + 1])));
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (~(((/* implicit */int) (short)16967)))))));
                            var_39 |= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_2)) >> (((208057450) - (208057441))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_22 = 0; i_22 < 10; i_22 += 4) /* same iter space */
                        {
                            arr_73 [i_16] [i_16] [i_17] [i_18] [(unsigned char)9] [3ULL] [(short)3] = (+(var_8));
                            arr_74 [i_16 - 1] [i_17] [i_18] [i_19] [i_16] [i_22] = (!(arr_6 [i_16] [i_19 - 1] [i_16 + 1]));
                        }
                        for (int i_23 = 0; i_23 < 10; i_23 += 4) /* same iter space */
                        {
                            var_40 = ((/* implicit */short) var_10);
                            var_41 = ((/* implicit */_Bool) min((var_41), ((!(((/* implicit */_Bool) arr_9 [i_19 + 1] [i_16 - 1] [i_16 - 1]))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_24 = 0; i_24 < 10; i_24 += 3) 
                        {
                            var_42 = ((/* implicit */long long int) (!(arr_36 [i_16 + 1] [i_17] [7U] [(short)10] [i_24] [i_19 + 1] [i_17])));
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_18] [i_17] [0ULL]))) ? (((/* implicit */int) arr_72 [i_16] [i_16 - 1] [i_16] [i_16] [i_16 + 1] [i_19 + 1])) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (int i_25 = 0; i_25 < 10; i_25 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_16 - 1] [0LL] [i_18])) : (((/* implicit */int) arr_20 [i_16 - 1] [i_18] [1ULL])))))));
                            var_45 = ((/* implicit */_Bool) ((arr_26 [i_16] [(short)4] [i_16 - 1] [i_16 + 1]) >> (((arr_60 [i_16] [4ULL] [(_Bool)1]) - (1049568565)))));
                        }
                    }
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                    {
                        var_46 = ((/* implicit */short) ((int) (~(min((((/* implicit */int) (unsigned char)63)), (var_7))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_27 = 2; i_27 < 6; i_27 += 1) 
                        {
                            var_47 = ((/* implicit */int) (+(min((min((((/* implicit */long long int) 536870911U)), (arr_64 [i_16] [i_26] [6U] [6U] [i_16]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_53 [i_16] [i_16])))))))));
                            var_48 += ((/* implicit */unsigned long long int) arr_59 [i_18] [i_18]);
                        }
                        for (int i_28 = 0; i_28 < 10; i_28 += 4) 
                        {
                            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_5) != (((/* implicit */unsigned int) var_7)))) ? (min((((/* implicit */long long int) var_4)), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_16] [i_17] [i_18] [i_18] [i_26] [i_28])))))) ? (arr_82 [i_16 + 1] [i_16] [(_Bool)1] [i_26 - 1]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_58 [i_16 - 1])) != (arr_12 [7ULL] [i_26 - 1] [i_18] [i_16 - 1]))))));
                            var_50 = ((/* implicit */long long int) 3758096378U);
                        }
                        var_51 = ((unsigned char) ((((((/* implicit */_Bool) arr_71 [i_26] [8U] [i_16] [i_16] [i_16 + 1] [i_16])) ? (((/* implicit */int) arr_9 [3U] [i_18] [i_26])) : (((/* implicit */int) (_Bool)0)))) < (((/* implicit */int) max((((/* implicit */short) arr_19 [i_16])), (arr_21 [i_16] [(unsigned char)0] [i_16] [i_16]))))));
                    }
                }
            } 
        } 
    } 
    var_52 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned int) var_3)) : (((unsigned int) ((unsigned char) (unsigned char)194)))));
    /* LoopNest 2 */
    for (short i_29 = 0; i_29 < 16; i_29 += 3) 
    {
        for (unsigned int i_30 = 1; i_30 < 15; i_30 += 1) 
        {
            {
                var_53 *= ((/* implicit */unsigned char) 8362336694651003039ULL);
                var_54 = ((int) (+(var_8)));
                var_55 = ((/* implicit */unsigned long long int) ((((var_6) >> (((((/* implicit */int) arr_90 [i_30] [i_30 - 1])) - (156))))) < ((-(((/* implicit */int) var_11))))));
                var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) ((((/* implicit */int) arr_90 [i_30 + 1] [i_30])) >> (min((((/* implicit */int) (_Bool)1)), (33554431))))))));
                arr_95 [i_29] = ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned long long int) ((_Bool) arr_92 [7U]))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_92 [i_29]))))));
            }
        } 
    } 
}
