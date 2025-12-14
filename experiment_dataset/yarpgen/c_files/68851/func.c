/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68851
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((var_6) | (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? ((-(var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_5))))), (max((var_10), (((/* implicit */unsigned char) var_12))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) != (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 3])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) & (((/* implicit */int) arr_2 [i_0] [i_0 - 3]))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 1])))));
        var_22 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_6))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 3] [i_0]))))) + (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 3])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 3] [i_0 + 2])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (arr_1 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_2 [i_0] [i_1]))) - (((/* implicit */int) arr_3 [i_1] [i_0 - 2] [i_0 - 1]))))) : (((((arr_6 [i_0 - 2] [i_0 - 3]) + (9223372036854775807LL))) >> (((arr_1 [i_0 - 1]) - (3580147843U)))))));
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_23 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1]))))))) ^ (((((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_1] [(_Bool)1])) + (2147483647))) << (((((/* implicit */int) arr_10 [19U] [i_1])) - (1)))))) & ((-(var_19)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1]))))))) ^ (((((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_1] [(_Bool)1])) + (2147483647))) << (((((((((/* implicit */int) arr_10 [19U] [i_1])) - (1))) + (28))) - (27)))))) & ((-(var_19))))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_3])))))) + (arr_11 [i_0 - 3] [i_0] [i_1] [i_0] [(_Bool)1])));
                    }
                } 
            } 
        }
        arr_13 [i_0] = ((/* implicit */signed char) var_17);
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [(signed char)9] [i_0])), (arr_11 [i_0] [i_0 - 2] [(_Bool)1] [16] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((arr_10 [i_0] [8U]) ? (((/* implicit */int) arr_10 [i_0 + 2] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0 - 2] [(short)2] [i_0 - 3]))))) : ((+(arr_11 [i_0 - 1] [i_0 + 2] [0U] [i_0 - 1] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])) ? ((~(arr_11 [(short)0] [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((arr_16 [(unsigned char)14]) ? (arr_6 [(signed char)1] [6U]) : (((/* implicit */long long int) arr_9 [i_4])))))));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                arr_27 [(signed char)1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_11 [12] [2U] [i_4] [(signed char)1] [i_8]) >= (arr_12 [i_4] [i_5] [i_7] [i_8])))) - ((-(((/* implicit */int) arr_16 [i_8]))))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [2ULL] [i_4]))) != (arr_8 [i_4]))))) == (((arr_23 [(signed char)11] [i_5]) ? (arr_6 [i_4] [i_7]) : (((/* implicit */long long int) arr_14 [(_Bool)1] [i_4]))))));
                                arr_28 [i_4] [i_4] [3] [i_7] [i_8] [15U] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [(_Bool)1] [i_4]))))) ? (arr_15 [13U]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_25 [i_6] [8U] [i_5] [i_4])))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5] [i_6] [i_6 - 2]))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 1; i_9 < 10; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (short i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            for (unsigned int i_11 = 2; i_11 < 11; i_11 += 4) 
            {
                for (short i_12 = 1; i_12 < 10; i_12 += 2) 
                {
                    {
                        var_28 = ((arr_16 [i_9 + 1]) ? (((arr_37 [i_10] [i_11 - 1] [i_12 - 1]) / (arr_37 [i_10] [i_11 - 2] [i_12 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) | (((/* implicit */int) arr_16 [i_9 + 1]))))));
                        var_29 = ((/* implicit */_Bool) ((((var_8) ? (((/* implicit */int) ((short) var_18))) : (((/* implicit */int) var_10)))) & ((+(((/* implicit */int) arr_23 [i_9 + 2] [i_10 - 1]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_40 [6U] [i_13] [i_13] = (~(arr_39 [i_9 + 2] [i_13]));
            var_30 = ((/* implicit */short) arr_15 [i_9 - 1]);
        }
        for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                var_31 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (arr_37 [0U] [i_9 + 1] [i_9 - 1]) : (arr_37 [(_Bool)1] [i_9 - 1] [i_9 + 1])))));
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_21 [i_9 - 1] [i_14] [4U] [(_Bool)1])))) ? (((((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9 + 2] [i_9 + 1])) ? (arr_21 [i_9 - 1] [20LL] [i_15] [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9 + 1]))))) : (min((arr_21 [i_9 + 2] [i_14] [i_15] [0U]), (((/* implicit */unsigned int) arr_20 [17] [i_9] [i_9 + 1] [i_9 + 1]))))));
                var_33 = ((/* implicit */short) max((min((arr_44 [7LL] [(short)5] [i_9]), (((arr_16 [17]) ? (arr_1 [1U]) : (arr_44 [i_9] [(signed char)0] [i_15]))))), (((((/* implicit */_Bool) arr_44 [i_9 + 2] [i_9 + 1] [(signed char)8])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_9] [(_Bool)1]))) + (arr_44 [i_9] [i_14] [i_15]))) : (arr_29 [i_14])))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_16 = 1; i_16 < 11; i_16 += 4) 
            {
                var_34 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_9] [i_14])) ? (arr_33 [(unsigned char)2] [i_14] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_14] [i_14]))))), (((/* implicit */unsigned int) var_17))))) ? (((arr_24 [8U] [i_16 + 1] [i_16] [8LL]) & (min((var_1), (((/* implicit */unsigned int) arr_46 [i_9] [i_14] [i_16])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    for (signed char i_18 = 2; i_18 < 11; i_18 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_43 [i_16 - 1] [i_16 - 1]) ? (((/* implicit */unsigned long long int) arr_20 [i_9] [i_14] [i_16] [i_18])) : (arr_36 [i_9 - 1] [i_16 - 1] [i_17 - 1] [i_18 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_9] [i_9 + 2] [2U] [i_18 + 1])) || (((/* implicit */_Bool) arr_38 [i_9 - 1] [i_18 + 1]))))) : ((~(((/* implicit */int) arr_3 [(signed char)22] [i_16 + 1] [i_18 - 2]))))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_9 - 1] [i_17 - 1] [i_17])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9] [(_Bool)1]))) + (arr_49 [i_9] [i_18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_9] [i_14]) >= (((/* implicit */long long int) ((/* implicit */int) var_18)))))))))) ? (((/* implicit */unsigned int) ((arr_22 [i_16] [5U] [7U] [i_16 + 1] [i_17]) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_9] [(_Bool)1] [14U] [i_17] [(short)8])) && (((/* implicit */_Bool) arr_36 [i_9] [i_16] [i_17] [i_18]))))) : (((/* implicit */int) arr_23 [i_18] [17U]))))) : (((((/* implicit */_Bool) arr_9 [i_9 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_9 [i_9 + 2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    for (int i_20 = 2; i_20 < 10; i_20 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) arr_10 [i_9] [i_19])))) : (((((/* implicit */_Bool) arr_5 [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_52 [i_9] [i_14] [i_14] [i_16] [i_19] [i_20])) : (((/* implicit */int) var_13))))))));
                            var_38 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_20 + 2]))) <= (arr_36 [i_20 + 2] [i_20] [i_20] [i_20]))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_19] [(_Bool)1] [i_16]))) * (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_20] [i_19] [i_20])))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                for (short i_22 = 0; i_22 < 12; i_22 += 4) 
                {
                    {
                        var_39 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(arr_26 [i_21] [i_9 + 1] [i_14] [i_21])))), (((((/* implicit */_Bool) ((long long int) var_18))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)7])) ? (((/* implicit */int) arr_19 [i_9] [i_21])) : (arr_39 [i_9] [(signed char)4])))) : (arr_12 [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9 + 2])))));
                        var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_50 [i_9 + 2] [i_9 - 1] [i_9 - 1]))))));
                        var_41 = ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
            arr_67 [11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_36 [i_9 - 1] [i_14] [i_9] [i_14])) || (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) arr_36 [i_9 + 2] [11ULL] [i_14] [i_14])) ? (arr_36 [i_9 + 1] [(_Bool)1] [i_9] [(signed char)4]) : (arr_36 [i_9 + 2] [(signed char)6] [i_9] [(short)5]))) : ((~(arr_36 [i_9 + 2] [(_Bool)1] [(_Bool)1] [i_9])))));
        }
        for (short i_23 = 2; i_23 < 9; i_23 += 2) 
        {
            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_23])), (arr_66 [i_9] [i_23] [i_23] [3U])))) ? (arr_55 [i_9] [i_23] [i_23] [10LL] [i_23]) : (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) arr_65 [(signed char)1] [(short)10] [(short)2] [9U] [0U] [i_23])) : (((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_38 [i_9] [i_23])), (arr_8 [i_9])))) ? (arr_68 [i_23 + 1] [i_23] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) arr_43 [(signed char)3] [i_23])), (arr_46 [(short)7] [10U] [(_Bool)1]))))))));
            arr_72 [(short)5] [10U] [i_23] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_35 [i_23] [10U] [i_23 - 2])))), (((((/* implicit */_Bool) arr_35 [i_23] [i_23] [i_23 + 3])) ? (((/* implicit */int) arr_35 [i_23] [i_23 - 1] [i_23 - 1])) : (((/* implicit */int) arr_35 [i_23] [i_23 + 1] [i_9]))))));
        }
    }
    var_43 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)))))))));
}
