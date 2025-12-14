/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56091
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_11 = ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8)));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_9))));
        var_13 = ((/* implicit */unsigned short) var_10);
        var_14 = ((/* implicit */unsigned long long int) var_8);
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned short) (~(var_1)));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((short) arr_11 [i_1] [i_1 - 1] [i_1 + 1])))));
                            arr_18 [16ULL] [i_1] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_17 [(unsigned short)6] [i_2] [i_3] [i_4] [(unsigned short)7] [i_5] [i_5])))) ? (((/* implicit */int) arr_9 [i_2 + 3])) : (((/* implicit */int) var_7))));
                            arr_19 [11ULL] [i_2] [i_4] = ((/* implicit */_Bool) var_5);
                            arr_20 [i_2] = ((/* implicit */signed char) arr_12 [i_2 + 2] [i_1 + 1]);
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            arr_25 [i_1 - 4] [i_2] [i_3] [i_2] [i_6] [i_3] [i_6] = ((/* implicit */long long int) arr_7 [(unsigned short)19] [i_1]);
                            arr_26 [i_1 - 4] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 4])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            arr_31 [i_1] [i_2] [i_2] [i_4] [i_7] = (~(((/* implicit */int) var_7)));
                            arr_32 [i_2] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) var_1);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_35 [i_1 - 3] [i_2] [i_1 - 4] [i_1 - 3] [i_2] [i_2] [i_3] = ((/* implicit */short) var_6);
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (arr_12 [i_1 - 2] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)1] [i_2])))));
                            var_17 = (~(((/* implicit */int) var_4)));
                        }
                        arr_36 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1 - 2] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4])) ? ((+(((/* implicit */int) arr_15 [i_1 - 3] [14ULL] [i_1 - 3])))) : (((/* implicit */int) arr_24 [i_1 - 2] [i_2] [i_3] [i_4] [i_2 + 3]))));
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_1] [i_2 + 3])) ? (((/* implicit */int) arr_27 [i_2] [i_2 - 1] [i_2 + 3] [(signed char)18] [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_2 - 1])))))));
            arr_37 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (short)20519))))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_2 + 1] [i_2 + 3] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1 - 1] [(unsigned short)10]))) < (arr_34 [i_2] [i_2] [i_2] [i_2 + 1])))) : (((/* implicit */int) arr_28 [(short)2] [i_2] [i_2] [i_2] [i_2 + 1]))));
        }
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            arr_40 [i_1] [i_9] [i_9] = ((/* implicit */unsigned short) ((arr_0 [i_1 - 3] [i_1 - 4]) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 4]))));
            /* LoopSeq 2 */
            for (int i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_10 + 1])) ? (((/* implicit */int) arr_4 [i_10 + 1])) : (((/* implicit */int) var_5))));
                var_21 &= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1] [i_1 - 2])));
                arr_43 [i_9] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_9] [i_9]);
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_30 [i_1 - 3] [i_9])));
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_38 [i_10 + 1] [i_1 - 3]))));
                    var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_1 - 3] [i_1 - 1] [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_10])))));
                    var_25 = ((/* implicit */short) arr_38 [i_1 - 1] [i_1 - 2]);
                    arr_46 [i_10 - 1] [i_9] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (+(arr_8 [i_10 + 1] [i_1 - 2] [i_1 - 4])));
                }
                for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_13 - 1] [i_10 + 1] [i_13 - 1] [i_13 - 1])) ? (arr_49 [i_13 - 1] [i_10 - 1] [i_10] [i_13 - 1]) : (arr_49 [i_13 - 1] [i_10 - 1] [i_13] [i_10 - 1])));
                        arr_52 [i_13] [i_9] [i_10] [i_9] [i_9] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_9] [i_12 - 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    }
                    arr_53 [i_1] [i_9] [i_1] [i_9] = ((((/* implicit */_Bool) var_1)) ? (arr_13 [i_10 + 1] [14ULL] [i_10 + 1] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_10 - 1] [i_10] [i_9] [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 1]))));
                    arr_54 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_1] [i_1] [i_1] [9ULL] [i_9] [i_12] [i_10 + 1])) < (((/* implicit */int) arr_51 [i_9] [(unsigned char)14] [i_9] [i_9] [i_9] [i_1 - 1] [i_10 + 1]))));
                }
            }
            for (short i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                arr_58 [i_1] [i_9] [i_9] = ((var_3) + (arr_16 [i_1] [i_9] [i_1 - 2] [i_1] [i_1] [i_9]));
                arr_59 [i_1] [i_9] [11] = ((/* implicit */long long int) ((arr_2 [i_14]) ? (((((/* implicit */_Bool) arr_39 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))));
            }
            arr_60 [i_9] = ((/* implicit */short) var_8);
        }
        for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            arr_63 [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) (-(var_1)));
            arr_64 [i_15] |= ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_47 [i_1] [i_1 - 4] [i_1]))));
        }
        var_28 = ((/* implicit */int) var_5);
        /* LoopSeq 3 */
        for (int i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            var_29 *= ((/* implicit */unsigned short) var_2);
            var_30 = ((/* implicit */short) arr_56 [(signed char)6] [(signed char)6] [i_1 - 4]);
        }
        for (short i_17 = 0; i_17 < 21; i_17 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_18 = 3; i_18 < 20; i_18 += 4) 
            {
                for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    for (short i_20 = 3; i_20 < 20; i_20 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */short) (~(var_1)));
                            arr_78 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_18] [i_1] [16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_76 [i_20 - 3] [i_20 - 3] [i_20 + 1] [i_20] [i_20])) ? (arr_16 [i_20 - 3] [i_18] [i_20 + 1] [i_20] [i_20 - 2] [i_20 + 1]) : (arr_16 [i_20 - 3] [i_18] [i_20 + 1] [i_20 + 1] [i_20] [i_20 + 1])));
                        }
                    } 
                } 
            } 
            arr_79 [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_73 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])) | (((/* implicit */int) arr_73 [i_1] [i_1 - 2] [i_1] [i_1 + 1]))));
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_1] [i_1 - 4] [i_1 - 3] [i_17])) ? (((/* implicit */int) arr_55 [(unsigned short)15] [i_1 - 3] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_55 [i_1] [i_1 - 2] [i_1 + 1] [(_Bool)1]))));
        }
        for (signed char i_21 = 0; i_21 < 21; i_21 += 4) 
        {
            var_33 = ((/* implicit */long long int) arr_42 [i_1] [i_1] [i_1] [i_21]);
            arr_84 [i_21] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_11 [(unsigned short)16] [i_1 - 1] [i_1 - 2])));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_1] [i_1 + 1])) ? (arr_7 [i_1 + 1] [i_21]) : ((+(((/* implicit */int) var_5))))));
            var_35 = ((/* implicit */unsigned int) var_0);
        }
    }
    for (short i_22 = 2; i_22 < 13; i_22 += 2) 
    {
        arr_88 [i_22] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_65 [i_22] [i_22 + 1]) : (arr_65 [i_22] [i_22 + 1])))), (arr_38 [i_22 + 3] [15ULL])));
        var_36 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_6))))) & (arr_16 [i_22] [i_22] [i_22 + 1] [i_22 - 2] [i_22] [i_22]))), (var_10)));
    }
    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) var_2))));
}
