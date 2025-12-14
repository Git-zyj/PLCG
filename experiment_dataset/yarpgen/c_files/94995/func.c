/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94995
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_20 = min((((/* implicit */int) (_Bool)1)), (-1));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((short) (~(2147483647))))) && (((/* implicit */_Bool) max((var_15), (((/* implicit */int) arr_0 [i_0 + 3]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0 + 2] [i_0] = ((/* implicit */unsigned int) max((((((unsigned long long int) (short)19018)) << (((/* implicit */int) arr_0 [i_0 + 2])))), (((/* implicit */unsigned long long int) max((var_7), ((-(((/* implicit */int) (unsigned char)250)))))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (int i_4 = 2; i_4 < 22; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */int) (+(var_14)));
                            var_21 = ((/* implicit */unsigned short) arr_11 [i_2] [i_1] [i_2] [i_3] [i_4]);
                            var_22 += ((/* implicit */unsigned int) (+(17199846918868978631ULL)));
                            var_23 = (+(min((arr_13 [i_0 - 1] [i_1 + 2] [i_2] [i_1 + 2] [i_0 - 1]), (arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_2]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) max((arr_6 [i_0 - 1] [i_5] [i_5] [i_5]), (((/* implicit */unsigned short) (unsigned char)9))))))) / (((/* implicit */int) max((arr_4 [i_0 + 3] [i_0 - 2]), (((/* implicit */unsigned short) arr_8 [i_0 + 2] [i_5 + 2] [i_5 - 2] [i_5]))))))))));
            arr_18 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) max((arr_12 [i_0 + 2]), (arr_12 [i_0 - 2])))));
        }
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        var_25 -= (-(((/* implicit */int) arr_0 [i_6])));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_8 [i_6] [i_6] [i_6] [i_6]))));
        var_27 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)9)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
    }
    for (short i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_9 = 2; i_9 < 10; i_9 += 4) 
        {
            var_30 = ((/* implicit */unsigned short) max((arr_26 [i_8]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2)))))));
            /* LoopSeq 2 */
            for (short i_10 = 1; i_10 < 10; i_10 += 2) 
            {
                var_31 &= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_24 [i_8])) ? (arr_24 [i_8]) : (arr_24 [i_8])))));
                arr_32 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (unsigned char)230);
                arr_33 [i_10] [(short)2] [i_10 + 2] = ((/* implicit */unsigned char) (+(((arr_11 [i_10] [i_10 + 1] [i_10] [i_9 - 2] [13ULL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (arr_22 [i_8])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_11 = 1; i_11 < 9; i_11 += 1) /* same iter space */
                {
                    arr_36 [i_8] [i_8] [i_9] [i_11 + 2] [i_11 + 2] &= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8] [i_9] [4])))))));
                    var_32 += ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (unsigned char)246)))));
                }
                /* vectorizable */
                for (short i_12 = 1; i_12 < 9; i_12 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned int) arr_4 [i_12 - 1] [i_12]);
                    arr_41 [i_8] [i_8] [i_10] [i_10] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)3));
                    arr_42 [i_8] [i_9] |= ((/* implicit */short) ((((/* implicit */int) (unsigned char)246)) * (((/* implicit */int) (short)26201))));
                    arr_43 [i_10] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_46 [i_8] [i_8] [i_9] [i_13] = min((max((arr_7 [i_9 - 2] [i_9 - 1] [i_9 + 1]), (((/* implicit */int) (!(arr_39 [7] [i_9] [i_9 + 2] [i_13])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [6] [i_9]))))));
                /* LoopNest 2 */
                for (short i_14 = 2; i_14 < 10; i_14 += 4) 
                {
                    for (int i_15 = 1; i_15 < 9; i_15 += 4) 
                    {
                        {
                            arr_54 [i_8] [i_8] [(unsigned short)6] [5] [i_14] [(unsigned short)6] [i_15 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((1ULL), (17796618147573503165ULL))))));
                            var_34 *= ((short) ((arr_17 [i_9 - 1] [i_14] [i_15 + 1]) | (arr_17 [i_8] [i_9] [i_8])));
                            var_35 = ((/* implicit */unsigned short) arr_21 [i_8] [i_8]);
                        }
                    } 
                } 
                arr_55 [i_9] [i_13] &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11411089034562145564ULL))))), (18226623737699357055ULL)));
            }
            var_36 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_48 [i_9])), (max((min((((/* implicit */unsigned long long int) var_5)), (var_14))), ((+(var_6)))))));
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (min(((-(((/* implicit */int) (unsigned char)18)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_9 + 2] [i_9 + 2] [i_9] [i_9] [i_9 - 1]))))))))))));
        }
        /* vectorizable */
        for (short i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            arr_60 [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_35 [i_16] [i_16] [i_16] [i_8]))));
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)12907)))))));
            var_39 -= ((/* implicit */signed char) (+(arr_17 [i_8] [i_16] [i_16])));
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) var_17)))))));
            arr_61 [i_8] [i_16] [i_16] = ((/* implicit */short) arr_4 [i_8] [i_16]);
        }
        arr_62 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_30 [(unsigned short)11] [i_8] [i_8] [i_8])), (max((arr_27 [i_8] [i_8] [i_8]), (arr_27 [i_8] [i_8] [i_8])))))) ? (arr_49 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135)))));
    }
    var_41 = ((/* implicit */int) min(((~(var_6))), (var_6)));
}
