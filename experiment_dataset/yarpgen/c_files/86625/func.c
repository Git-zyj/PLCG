/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86625
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
    var_11 = ((/* implicit */int) var_10);
    var_12 = ((/* implicit */signed char) var_4);
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) /* same iter space */
            {
                arr_6 [i_1] = (!(((/* implicit */_Bool) arr_0 [i_0])));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_4)))));
                arr_8 [i_1] [(signed char)12] [i_2 - 1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1] [i_2 - 1] [i_1]))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1]))))));
            }
            for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */_Bool) arr_0 [i_3]);
                arr_11 [i_0] [i_1] [19U] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_3 + 1])) ? ((-(((/* implicit */int) arr_3 [18ULL] [i_1] [i_3])))) : (arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
            }
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))))));
            arr_12 [i_0] [i_1] [i_1] &= ((int) (unsigned char)63);
            arr_13 [i_0] [i_1] = ((/* implicit */int) var_2);
        }
        var_16 ^= ((/* implicit */long long int) (~((-(arr_9 [i_0] [i_0] [i_0])))));
        arr_14 [(short)8] = var_2;
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (!(arr_3 [i_0] [i_0] [i_0]))))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 14681029585185351801ULL)) ? (14681029585185351801ULL) : (2440070117881302434ULL)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) arr_1 [i_4] [i_7 + 1]);
                        arr_28 [i_6 - 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_7 - 1] [i_6] [i_7 - 1] [i_7 - 1] [i_5] [i_7 - 1])) ? (((/* implicit */int) arr_27 [i_4] [i_5] [i_7 - 1] [i_7] [9U] [i_4])) : (((/* implicit */int) arr_27 [i_4] [i_5] [i_7 - 1] [i_7] [i_5] [i_5]))));
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_4] [i_6] [i_6] [i_7] [i_6] [i_6]))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (-(arr_30 [i_5 - 1] [i_6 + 2] [(short)8] [i_8] [i_8] [i_8] [i_8]))))));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_5 - 1] [i_5 + 1]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_4] [i_4]))))) ? (((var_10) ? (((/* implicit */int) arr_27 [(short)8] [(short)8] [i_6] [i_6] [(unsigned char)5] [i_5])) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (short)-27294))))));
                            var_24 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_26 [i_4])) : (((/* implicit */int) arr_26 [i_7])));
                            var_25 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                        }
                        for (int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) max((var_26), ((-(((/* implicit */int) arr_35 [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 2]))))));
                            var_27 = ((/* implicit */unsigned int) (-(1932747350)));
                            arr_38 [i_10] [i_7] [(unsigned short)1] [i_4] [i_4] = ((/* implicit */short) (~(arr_30 [i_4] [i_7 + 1] [i_6 + 2] [i_7] [i_10] [(_Bool)1] [i_10])));
                        }
                        for (int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                            arr_42 [i_4] [(short)1] [(unsigned char)1] [i_5] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_5 - 1]))));
                            var_29 = ((/* implicit */int) (~(var_8)));
                        }
                    }
                    for (unsigned int i_12 = 2; i_12 < 10; i_12 += 4) /* same iter space */
                    {
                        arr_46 [i_12] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1917171328)) ? (-3099986055950932534LL) : (2935225887358087000LL)));
                        arr_47 [i_12 - 2] [i_6] = ((((/* implicit */_Bool) 9244452582170432486ULL)) ? (((/* implicit */int) (unsigned short)62564)) : (((/* implicit */int) (signed char)51)));
                    }
                    for (unsigned int i_13 = 2; i_13 < 10; i_13 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) (unsigned short)37963)) ? (2147483647) : (((/* implicit */int) (unsigned char)255))))))));
                        var_31 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_45 [(unsigned short)9] [i_6 + 1] [i_6 + 2] [(unsigned short)9] [i_13 - 1])) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [i_13 + 1] [i_6]))))));
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) ((unsigned int) (short)32704));
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            for (long long int i_15 = 1; i_15 < 8; i_15 += 4) 
            {
                {
                    var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_15 - 1]))) ? (((/* implicit */int) arr_0 [i_15 - 1])) : ((-(((/* implicit */int) var_3))))));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_29 [i_15] [i_15] [i_15 + 1] [i_14]))))));
                }
            } 
        } 
        var_36 = ((/* implicit */int) arr_55 [i_4] [i_4]);
    }
    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
    {
        arr_58 [i_16] [i_16] = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) arr_4 [i_16] [i_16])))));
        var_37 += ((/* implicit */short) (+(((((/* implicit */_Bool) arr_26 [i_16])) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0))))))));
        arr_59 [i_16] = ((/* implicit */int) arr_55 [i_16] [6U]);
        arr_60 [i_16] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_55 [i_16] [i_16]))))));
    }
}
