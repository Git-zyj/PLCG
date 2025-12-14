/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59600
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
    var_15 = var_8;
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned int) ((unsigned short) ((((/* implicit */int) (signed char)122)) >> (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) var_13);
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned short) (short)18103)), ((unsigned short)2))))), (((unsigned int) arr_1 [i_0 - 1]))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) % (arr_1 [i_0])))))) ? (((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (signed char)59))))) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)1024)) : (arr_0 [i_0])))))));
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)23471)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-7)) : (((/* implicit */int) var_5))))) != (((((/* implicit */_Bool) (short)9)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))))))))) : (-1252729672618683672LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    for (signed char i_4 = 3; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_0] [(_Bool)0] [i_0] [(short)12] [i_4]) ? (arr_3 [i_0] [i_0]) : (1252729672618683674LL)))) ? (arr_8 [5LL] [i_1] [i_1] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1])))));
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
                            arr_13 [i_2] [i_3 + 2] [i_2] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (1252729672618683662LL))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) + (arr_8 [i_1] [(short)7] [i_1] [i_0])))) ? (-1252729672618683678LL) : (1252729672618683671LL)));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((!((_Bool)0))) ? (((/* implicit */int) arr_10 [(short)8] [i_0 - 1] [14ULL] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [(unsigned short)14])))))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) -1252729672618683672LL)) ? (1252729672618683672LL) : (((/* implicit */long long int) 0U))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((signed char) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_11 [8] [i_0] [i_0] [i_0] [8]))))))));
        }
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_25 = ((/* implicit */_Bool) arr_14 [i_5] [i_5]);
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            arr_19 [i_5] [i_6] &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) -1252729672618683674LL)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
            arr_20 [i_6 + 3] = ((/* implicit */unsigned short) ((((var_6) || (arr_18 [i_5] [i_6 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12)))) : (arr_14 [i_6 - 1] [i_6])));
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                var_26 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_17 [i_5] [i_5] [i_5])) * (((/* implicit */int) arr_16 [i_5] [i_5])))));
                arr_23 [i_7] [i_5] [i_5] = ((/* implicit */signed char) arr_18 [i_6] [i_6]);
            }
            for (int i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_6 + 2] [i_6 + 3] [i_8 + 1])) ? (arr_24 [i_6] [i_6 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6 + 4] [i_6 + 1] [i_8 + 1]))))))));
                var_28 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_8 + 1])) ? (1252729672618683671LL) : (((/* implicit */long long int) arr_27 [i_8])))));
                var_29 = ((/* implicit */unsigned short) (short)-1);
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    var_30 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_10)) ? (arr_30 [i_5] [i_6] [(_Bool)1] [i_9]) : (arr_30 [i_5] [i_5] [i_8] [i_9])))));
                    var_31 = ((/* implicit */unsigned short) var_14);
                    arr_31 [i_8 - 1] [i_6 + 3] [i_5] = ((((/* implicit */_Bool) arr_24 [i_6 - 2] [i_6 - 2])) ? (arr_24 [i_6 - 1] [i_6 - 1]) : (var_1));
                }
            }
            for (long long int i_10 = 1; i_10 < 12; i_10 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_6 + 4] [i_6 + 2]) : (((/* implicit */long long int) arr_29 [i_6 + 2] [i_6 - 1] [i_6 + 4]))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -3LL))));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_30 [i_5] [i_6 - 1] [i_10] [i_11])))) ? ((-(((/* implicit */int) (unsigned short)14078)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32761))))))))));
                    var_35 = ((/* implicit */unsigned char) ((unsigned short) ((int) var_10)));
                }
                arr_36 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_10])) >= (((/* implicit */int) arr_18 [i_10 - 1] [i_6 + 3]))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_6 - 2] [i_6] [i_10 + 1] [i_10 - 1])) ? (arr_30 [i_6 + 1] [i_6 + 1] [i_10 + 3] [i_10 + 4]) : (arr_30 [i_6 + 1] [i_10] [i_10 + 2] [i_10 + 1])));
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) var_5);
                    arr_39 [(_Bool)1] [i_10] [i_10] [i_5] = ((/* implicit */unsigned short) arr_16 [i_5] [i_6 - 2]);
                    var_38 -= ((/* implicit */unsigned long long int) ((short) arr_15 [i_6 - 2] [i_10 + 3]));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) var_12);
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) arr_34 [i_10 + 4] [(short)3] [i_10 - 1] [i_10])) : (((/* implicit */int) (signed char)110))));
                    arr_44 [i_5] [i_6] [i_10] [i_5] = ((/* implicit */unsigned char) ((((_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_18 [i_6] [i_10 + 1]))))) : (((((/* implicit */_Bool) (signed char)0)) ? (arr_27 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_10])))))));
                    arr_45 [i_5] [i_10] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10]))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10] [i_10]))) & (arr_27 [i_5])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        var_41 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_6 - 2] [i_10 + 2]))));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_10] [i_10])) ? (((/* implicit */int) (short)-25950)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_18 [i_5] [i_6 + 1]))));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_42 [i_10]) & (((/* implicit */long long int) 1020510279))))) || (((((/* implicit */int) arr_35 [i_6] [i_6] [i_14])) > (((/* implicit */int) arr_37 [i_5]))))));
                    }
                    for (unsigned short i_15 = 4; i_15 < 15; i_15 += 3) 
                    {
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2048)) ? (1252729672618683672LL) : (7953439481112400494LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967295U)))) : (arr_30 [i_10 + 2] [i_6] [i_6 + 4] [i_6 + 1]))))));
                        var_45 = ((/* implicit */_Bool) (+(var_1)));
                        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((_Bool) arr_40 [i_6] [i_15 - 2] [i_15] [i_15] [i_6])))));
                    }
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    arr_56 [i_5] [i_10] [i_10] [i_16] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (arr_40 [i_5] [i_5] [i_5] [i_5] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        var_47 = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? ((~(arr_21 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_50 [i_5] [i_6] [i_10] [i_16] [i_10]))))));
                        arr_59 [i_10] [i_6] [i_6] [i_6 - 2] = ((/* implicit */short) arr_43 [i_5] [i_6] [i_10] [i_6 + 3]);
                    }
                }
            }
        }
        for (long long int i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            arr_62 [i_5] [i_18] [i_5] = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) (unsigned char)62)))));
            arr_63 [i_5] [i_5] = ((/* implicit */_Bool) (signed char)69);
            var_48 = ((/* implicit */short) ((((/* implicit */int) arr_57 [6ULL] [i_18] [i_18])) != (((/* implicit */int) var_10))));
            var_49 = ((((/* implicit */_Bool) arr_33 [i_5] [(short)14] [i_18])) ? (65408U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
        }
    }
    for (signed char i_19 = 0; i_19 < 12; i_19 += 1) 
    {
        arr_66 [i_19] [i_19] = ((/* implicit */signed char) var_1);
        var_50 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_25 [i_19] [i_19] [i_19] [i_19])))), (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)33290)) > (((/* implicit */int) (short)1)))))))));
        arr_67 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_12)) + (arr_5 [i_19] [i_19] [i_19] [i_19])))))) : (((((/* implicit */_Bool) 65408U)) ? (arr_27 [i_19]) : (((/* implicit */unsigned int) var_3))))));
    }
    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((_Bool) (signed char)-19)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))))))) : ((-(((/* implicit */int) var_13))))));
}
