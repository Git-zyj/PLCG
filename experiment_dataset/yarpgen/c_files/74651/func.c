/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74651
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
    var_11 = ((/* implicit */unsigned short) ((_Bool) var_9));
    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_3)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (9223372036854775807LL))))))), (((var_3) ^ (var_9)))));
    var_13 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)91))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_15 -= arr_7 [i_0] [i_0] [(unsigned char)8] [i_4];
                                var_16 = ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) : (arr_7 [i_0] [i_0] [i_3] [i_4]))) << (((((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) + (128))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2] [i_1] [i_2])) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (unsigned int i_6 = 4; i_6 < 12; i_6 += 2) 
            {
                {
                    arr_17 [i_6] [i_5] [i_6] [(unsigned short)4] = ((/* implicit */long long int) ((arr_15 [i_0] [i_5] [i_0]) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
                    var_18 = ((/* implicit */unsigned long long int) var_7);
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [i_7] [i_7]))) * (arr_6 [i_7] [i_7])));
        /* LoopSeq 2 */
        for (signed char i_8 = 3; i_8 < 13; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                for (long long int i_10 = 3; i_10 < 14; i_10 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) var_6);
                        var_21 = ((((/* implicit */_Bool) ((arr_22 [i_8 - 1] [i_9] [i_9]) ? (((/* implicit */long long int) max((arr_6 [i_8] [i_9]), (((/* implicit */unsigned int) var_7))))) : (max((var_4), (((/* implicit */long long int) var_2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            var_22 += ((/* implicit */short) var_1);
                            var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7] [5ULL] [i_7] [5ULL] [i_7])))))))), (((min((var_9), (((/* implicit */unsigned int) var_5)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_35 [i_7] [i_7])) : (((/* implicit */int) arr_29 [i_11] [i_13])))))))));
                        }
                    } 
                } 
                arr_36 [i_7] [(unsigned short)2] = min((((/* implicit */unsigned short) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7] [i_8] [i_8 - 3])))))), (arr_2 [(short)11] [(short)11] [i_8 - 3]));
                var_24 = ((/* implicit */short) (unsigned short)61284);
            }
            for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                var_25 -= ((/* implicit */unsigned char) 1616372166U);
                arr_40 [(signed char)7] [i_7] [i_8] [i_14] = ((/* implicit */unsigned long long int) var_10);
            }
            /* vectorizable */
            for (long long int i_15 = 1; i_15 < 12; i_15 += 3) 
            {
                arr_43 [i_7] = ((/* implicit */unsigned long long int) arr_34 [i_7] [i_7] [i_7] [i_8 - 1] [i_15 + 3]);
                var_26 = var_0;
                var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_7] [i_7])) - (((/* implicit */int) arr_10 [i_15 + 3] [(_Bool)1]))));
            }
            var_28 += ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)83))));
            var_29 += ((/* implicit */unsigned int) var_7);
            arr_44 [i_7] [i_7] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_33 [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_23 [0LL] [i_8]))))) / (((/* implicit */unsigned long long int) ((var_4) >> (((var_3) - (2024084429U))))))));
        }
        for (unsigned short i_16 = 3; i_16 < 14; i_16 += 4) 
        {
            arr_48 [i_16] [i_7] [i_16 - 3] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) var_6)), (arr_6 [(unsigned short)9] [i_16 - 3]))), (var_3)));
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_3)), (((18446744073709551609ULL) << (((max((((/* implicit */unsigned int) (unsigned short)48295)), (var_9))) - (2131646388U))))))))));
            var_31 += ((/* implicit */unsigned short) var_8);
            arr_49 [i_7] [i_16] [i_7] = ((/* implicit */unsigned char) ((16169279627212351787ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_7])))));
            arr_50 [i_7] [i_16] = ((/* implicit */long long int) var_1);
        }
        var_32 = ((((/* implicit */_Bool) (~(((/* implicit */int) max(((signed char)31), (var_7))))))) || (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (unsigned short)21633)), (arr_19 [i_7]))) ^ (((/* implicit */unsigned int) arr_27 [(signed char)4] [i_7] [i_7] [(signed char)4]))))));
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) arr_22 [(unsigned short)14] [i_7] [(unsigned short)14]))));
    }
    for (unsigned short i_17 = 1; i_17 < 9; i_17 += 4) 
    {
        arr_54 [i_17] = ((/* implicit */signed char) min((max((var_3), (((/* implicit */unsigned int) arr_24 [i_17 + 1] [i_17 + 1] [1U] [i_17 - 1])))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_6)) : (arr_53 [i_17] [i_17])))));
        /* LoopNest 3 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) 
                {
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (arr_5 [i_18] [i_18 + 1] [i_18])))) || (((/* implicit */_Bool) arr_14 [i_17] [i_17]))));
                        var_36 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (969558820U)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) arr_21 [i_17]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned long long int i_22 = 1; i_22 < 9; i_22 += 4) 
            {
                {
                    var_37 = ((/* implicit */long long int) min((((min((((/* implicit */unsigned long long int) var_9)), (18446744073709551612ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_56 [i_22] [i_21] [i_17 - 1]), (((/* implicit */short) var_0)))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_22 - 1] [i_22 - 1])), ((-(arr_58 [i_17] [i_17] [i_17] [i_22]))))))));
                    var_38 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_17 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 0; i_23 < 10; i_23 += 3) 
                    {
                        for (unsigned char i_24 = 1; i_24 < 8; i_24 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */short) min((((/* implicit */long long int) ((arr_24 [i_24 + 2] [i_22] [i_22 - 1] [i_17 + 1]) != (arr_24 [i_24 + 2] [i_23] [i_22 + 1] [i_17 - 1])))), (((long long int) arr_24 [i_24 - 1] [i_22] [i_22 - 1] [i_17 - 1]))));
                                var_40 = ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_27 [i_24] [i_24 + 2] [i_24] [i_24 - 1])))) || (((/* implicit */_Bool) arr_27 [i_24] [i_24 + 2] [i_24 + 2] [i_24 - 1])));
                                arr_75 [i_23] [i_23] [7LL] [i_23] [i_24] = arr_32 [i_22 + 1] [(unsigned short)0] [i_22];
                            }
                        } 
                    } 
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (_Bool)1))));
    }
    for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 4) 
    {
        arr_78 [i_25] = ((/* implicit */int) var_6);
        arr_79 [(unsigned short)8] = ((/* implicit */unsigned short) var_3);
    }
}
