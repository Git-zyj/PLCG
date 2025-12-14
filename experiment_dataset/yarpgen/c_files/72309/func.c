/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72309
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((short) arr_0 [i_0]))) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
        {
            arr_6 [13U] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_1] [i_0]);
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 16; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_21 -= ((/* implicit */short) 1041967949);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_5] [i_3] [i_0] [i_5] = ((/* implicit */_Bool) 1041967942);
                            var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) && (((/* implicit */_Bool) arr_5 [i_2 - 2]))));
                            var_23 = ((/* implicit */unsigned int) 9223372036854775808ULL);
                            var_24 = ((/* implicit */_Bool) ((unsigned int) (unsigned short)63116));
                            var_25 = ((/* implicit */unsigned char) var_9);
                        }
                        arr_18 [i_0] [i_2] [(unsigned short)13] [i_4] = ((((((/* implicit */_Bool) 496U)) ? (((/* implicit */int) arr_0 [i_0])) : (var_12))) < (((/* implicit */int) arr_12 [i_3])));
                        var_26 = ((/* implicit */unsigned int) ((unsigned char) 1041967953));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                arr_22 [i_0] [i_2] [i_6] = ((/* implicit */unsigned int) arr_12 [i_2]);
                arr_23 [i_6] [i_2] |= ((/* implicit */unsigned short) arr_20 [i_0] [i_2] [(short)9] [i_6]);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_10 [(signed char)4] [i_2] [(_Bool)1]))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_28 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) 1041967967)))));
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 1; i_9 < 16; i_9 += 2) 
                    {
                        var_29 &= ((/* implicit */long long int) var_5);
                        arr_30 [i_0] [(short)8] [i_0] [i_0] |= ((/* implicit */long long int) arr_15 [i_0] [i_7] [i_7] [i_8] [i_9]);
                    }
                    for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */_Bool) (+(arr_20 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1])));
                        var_30 = ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_10]))) : (arr_3 [i_0] [i_0]));
                        var_31 = ((/* implicit */short) arr_8 [i_2] [i_10]);
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) arr_14 [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1])) : (arr_10 [i_2 - 2] [i_2] [i_2 - 2]))))));
                        arr_34 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_10])) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) arr_31 [i_8] [i_10]))))) ? (((long long int) arr_32 [i_10] [i_8] [i_2] [i_8] [i_0])) : (((/* implicit */long long int) arr_14 [i_2] [i_2] [i_8] [i_10])));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 2256157780U)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)115)))));
                        arr_39 [i_0] [i_2 - 2] [i_2 - 2] [i_8] [i_11] = ((/* implicit */unsigned short) arr_11 [i_2 - 2] [i_2 + 1] [i_2 - 1]);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */short) var_14);
                        var_35 = ((/* implicit */short) ((arr_8 [i_2 + 1] [i_2 - 2]) & (((/* implicit */unsigned long long int) var_8))));
                        arr_44 [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (unsigned char)115)))));
                        var_36 ^= ((((/* implicit */unsigned int) 1041967974)) % (1532075630U));
                    }
                }
                arr_45 [i_0] = var_2;
            }
            for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    arr_51 [i_0] [i_2] [i_13] [i_14] = ((/* implicit */unsigned int) arr_12 [i_0]);
                    arr_52 [i_0] [i_2 + 1] [i_14] [3] = ((/* implicit */_Bool) ((arr_27 [i_2] [i_2] [i_2 - 2] [i_2 - 2]) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15013)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32746))) : (2762891665U))))));
                    var_37 |= ((/* implicit */unsigned char) 1041967953);
                    var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_41 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_14] [i_2 - 2]))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                    arr_57 [i_0] [i_2] [i_15] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_15] [i_13] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9414)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_0] [i_2] [i_2] [i_15] [i_15])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_43 [i_15] [i_2]))))) : (((((/* implicit */_Bool) arr_21 [(short)0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) : (arr_54 [i_0] [(short)9] [i_0])))));
                    var_40 = ((/* implicit */unsigned int) ((arr_27 [i_0] [i_2] [i_13] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [(signed char)5])))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 1; i_17 < 15; i_17 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (short)-32312)))));
                        var_42 = ((/* implicit */long long int) arr_56 [i_0] [i_2] [i_13] [i_16] [i_13]);
                        arr_65 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_17 + 1] [i_17]);
                        arr_66 [(unsigned short)2] [i_2] [(unsigned short)2] [(short)10] [i_16] [i_17] = ((/* implicit */unsigned int) ((1532075622U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2)))));
                    }
                    var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((unsigned char) 562949953421311ULL)))));
                    var_44 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_55 [(unsigned char)2] [i_2 - 2] [(unsigned char)6] [i_2 + 1]))));
                }
                var_45 = ((/* implicit */unsigned short) arr_62 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
            }
        }
    }
    for (unsigned int i_18 = 0; i_18 < 21; i_18 += 4) 
    {
        arr_69 [i_18] = var_11;
        arr_70 [i_18] = ((/* implicit */int) ((((unsigned long long int) arr_68 [(short)1])) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [i_18])) ? (((long long int) arr_67 [i_18])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_67 [i_18]) : (arr_67 [i_18])))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_19 = 2; i_19 < 8; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 2) 
        {
            for (unsigned int i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                {
                    var_46 = ((/* implicit */unsigned int) arr_3 [i_20] [i_20]);
                    var_47 = ((/* implicit */unsigned char) arr_75 [(signed char)7] [i_20] [i_21]);
                    var_48 -= ((/* implicit */short) arr_4 [i_19] [i_20] [i_19]);
                    var_49 ^= arr_13 [i_21] [i_21] [(signed char)10] [i_19];
                }
            } 
        } 
        var_50 = ((/* implicit */int) arr_67 [i_19]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 14; i_22 += 2) 
    {
        arr_80 [i_22] |= ((/* implicit */signed char) var_17);
        var_51 += ((/* implicit */short) ((((/* implicit */_Bool) arr_60 [(_Bool)1] [i_22] [i_22] [(_Bool)1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_60 [i_22] [i_22] [i_22] [i_22]))));
        arr_81 [i_22] = arr_56 [(short)15] [i_22] [i_22] [i_22] [i_22];
    }
}
