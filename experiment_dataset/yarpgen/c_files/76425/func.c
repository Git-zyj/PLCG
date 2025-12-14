/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76425
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
    var_12 -= ((/* implicit */long long int) (~(var_9)));
    var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18666))) ^ (((var_5) / (max((-1LL), (var_5)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_1 [i_0 - 3]) + (9223372036854775807LL))) << (((((arr_1 [i_0 - 3]) + (8582731182778742820LL))) - (12LL)))))) ? (arr_2 [i_1] [(_Bool)1] [i_0]) : (((/* implicit */long long int) var_8))));
            var_15 = ((/* implicit */signed char) arr_4 [10ULL]);
            /* LoopNest 2 */
            for (unsigned short i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_6 [i_2] [i_1]))));
                        arr_9 [i_2] [(short)2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_7 [i_2] [22] [i_3] [i_2])))) ? (max((((/* implicit */unsigned long long int) var_7)), (arr_7 [i_2] [(unsigned char)16] [(_Bool)1] [i_3]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned int) arr_5 [8LL] [8LL] [8LL]);
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_6 [i_0] [i_1]))));
        }
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-88)), ((unsigned char)125)));
    }
    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
    {
        var_20 *= ((/* implicit */short) (-(((/* implicit */int) arr_12 [(unsigned short)10]))));
        arr_13 [i_4 - 1] [i_4 - 1] = ((/* implicit */unsigned int) var_3);
    }
    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (signed char)-52))))))))));
        /* LoopSeq 4 */
        for (int i_6 = 2; i_6 < 13; i_6 += 3) 
        {
            arr_20 [(signed char)3] [i_6] [i_5] = ((/* implicit */unsigned int) var_3);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) max((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [i_8]))) | (arr_6 [(unsigned char)6] [(unsigned char)6]))), (((/* implicit */unsigned int) (unsigned char)29)))), (((/* implicit */unsigned int) (_Bool)1))));
                        arr_26 [i_7] = ((/* implicit */int) (-((-(arr_10 [i_6 - 1] [i_6 - 2])))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_23 = ((/* implicit */long long int) (-((+(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_14 [i_9])))))))));
            arr_29 [i_5] [i_5] = ((/* implicit */_Bool) min((((10046631095819510691ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))))), (((/* implicit */unsigned long long int) 4294967295U))));
            var_24 = ((/* implicit */_Bool) (signed char)-52);
            arr_30 [i_5] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_15 [i_5]), (((/* implicit */unsigned long long int) arr_1 [i_9]))))) ? (((((/* implicit */_Bool) 14815058614439047790ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_9] [i_5] [i_9]))) : (arr_1 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5]))))))));
            arr_31 [i_5] [i_5] [i_9] = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (long long int i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) (~(1LL)));
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_22 [i_5] [i_5] [i_5]))))), (((arr_34 [3U]) & (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */int) max(((short)23373), (max((((/* implicit */short) arr_18 [i_5])), ((short)-30208)))))) : (((/* implicit */int) (((+(((/* implicit */int) var_3)))) < ((-2147483647 - 1))))))))));
                arr_38 [i_11] [i_11] [(signed char)2] [12U] = 0ULL;
            }
            arr_39 [i_5] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5] [(unsigned char)7] [i_5] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (short)15)))));
        }
        for (long long int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_2))));
                            var_28 = min((18446744073709551611ULL), (((/* implicit */unsigned long long int) (unsigned char)112)));
                            var_29 = ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16))))) ? (((2065260257U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)16))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                            arr_50 [i_15] [i_12] [i_13] [i_14] [i_15] [i_12] [i_15] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 3152994393U)) ? (((/* implicit */int) arr_21 [i_5] [i_12] [i_14] [i_15])) : (((/* implicit */int) (signed char)127))))));
                            var_30 = ((/* implicit */unsigned char) (-(max((arr_28 [i_5]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
            var_31 = (!(((/* implicit */_Bool) max((arr_0 [i_12] [i_12]), (arr_0 [i_5] [10])))));
            /* LoopSeq 2 */
            for (long long int i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                arr_54 [(unsigned char)10] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)12684))));
                /* LoopSeq 2 */
                for (signed char i_17 = 4; i_17 < 13; i_17 += 1) 
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (~(((/* implicit */int) min((min((var_7), (((/* implicit */short) arr_17 [i_5] [i_12] [i_16])))), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)-16)))))))))))));
                    arr_57 [i_5] [7LL] [i_16] [i_17] [i_16] = ((/* implicit */int) (_Bool)1);
                }
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    arr_60 [i_16] [(_Bool)1] [i_16] [i_16] = ((/* implicit */unsigned char) (!(arr_41 [i_18])));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(short)10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) | (((((var_11) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)98)) - (98)))))))) : (((((/* implicit */_Bool) (~(arr_53 [i_12] [i_18])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 4200899250574809209LL)) ? (((/* implicit */int) arr_24 [i_19] [i_18] [i_16] [i_16] [0ULL] [i_5])) : (((/* implicit */int) arr_35 [i_12]))))));
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_17 [i_5] [i_12] [i_19])))))));
                        var_36 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                        arr_65 [4LL] [i_12] [i_19] [i_19] [i_12] [0ULL] &= ((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)127))))));
                    }
                    for (unsigned char i_20 = 3; i_20 < 12; i_20 += 2) 
                    {
                        arr_69 [(short)0] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))) & ((+(min((6085173588804288096LL), (((/* implicit */long long int) arr_42 [4ULL] [4ULL] [i_16] [(signed char)0]))))))));
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) min((((4294967292U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))))), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [4U] [i_18])) ? (((/* implicit */int) ((arr_25 [i_16]) != (((/* implicit */int) arr_16 [i_5]))))) : ((+(((/* implicit */int) (unsigned char)48))))))) : (((arr_62 [(unsigned short)12] [i_20 - 3] [i_20 + 1] [1ULL] [i_20 - 3] [i_20 - 2] [i_16]) >> (((1407500817) - (1407500808)))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)49)) < (((/* implicit */int) (signed char)127))));
                        arr_70 [i_5] [i_12] [i_16] [i_18] [i_20] [i_18] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (signed char i_21 = 0; i_21 < 14; i_21 += 2) 
                    {
                        arr_73 [i_16] [i_12] [i_12] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_71 [i_5] [i_5] [i_5] [i_5] [10U]);
                        var_39 = ((/* implicit */int) (unsigned char)83);
                    }
                }
            }
            for (unsigned int i_22 = 0; i_22 < 14; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_23 = 4; i_23 < 11; i_23 += 3) 
                {
                    for (unsigned int i_24 = 0; i_24 < 14; i_24 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_79 [i_23 - 3] [i_23] [i_23 - 4] [i_23 - 3] [i_23 - 1] [i_23 - 1]))))) - (var_5))))));
                            var_41 = ((/* implicit */signed char) (!(arr_5 [i_24] [i_12] [i_22])));
                            var_42 = arr_45 [i_23] [i_23] [i_23] [(_Bool)1] [(unsigned short)0];
                        }
                    } 
                } 
                var_43 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)1023)) - (1008)))))) ? ((~(((/* implicit */int) arr_52 [i_5] [i_12] [i_5])))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)51))))))));
            }
        }
        var_44 = ((/* implicit */long long int) (~(((/* implicit */int) arr_81 [12LL] [i_5] [i_5] [12LL]))));
        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (-(min((((/* implicit */int) arr_82 [i_5] [i_5] [i_5] [(unsigned char)12])), (max((((/* implicit */int) arr_14 [i_5])), (192))))))))));
        var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-127))));
    }
    for (signed char i_25 = 2; i_25 < 15; i_25 += 3) 
    {
        var_47 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-16)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_25] [i_25]))))) || (((/* implicit */_Bool) (~(var_8))))))));
        var_48 ^= ((/* implicit */long long int) (signed char)52);
        var_49 = ((/* implicit */unsigned char) ((min((3102103718058895366ULL), (((/* implicit */unsigned long long int) var_10)))) << (((((((/* implicit */_Bool) (short)25625)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) : (8652712605557353024ULL))) - (114ULL)))));
        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) arr_4 [i_25]))));
        arr_86 [i_25] = ((((/* implicit */_Bool) max((((((/* implicit */int) (short)0)) >> (((arr_4 [i_25]) - (6420383187811095329LL))))), (((((/* implicit */int) (unsigned char)227)) | (((/* implicit */int) (_Bool)1))))))) ? ((-(arr_4 [i_25 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    }
}
