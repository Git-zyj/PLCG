/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96948
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (var_3)));
                    var_14 -= ((/* implicit */long long int) var_2);
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)2725)) ? (((/* implicit */int) (unsigned short)45958)) : (((/* implicit */int) (unsigned short)19578))));
                }
            } 
        } 
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) >= (arr_2 [i_0] [i_0] [i_0]))))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                arr_13 [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)45966)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_3] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_4] [i_4])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_16 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */long long int) ((-5358996010107783652LL) != (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_4] [i_3])))));
                    var_16 -= ((/* implicit */short) arr_7 [i_4]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_22 [i_3] [i_4] [i_6] [i_6] [i_7 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) -1429449))));
                                var_17 = ((/* implicit */unsigned long long int) arr_12 [i_7 + 2] [i_4]);
                                arr_23 [i_3] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_7 - 3] [i_6] [i_4] [i_6] [i_7 - 2] [i_4] [i_7 + 2]))));
                                arr_24 [i_3] [i_4] [i_6] [i_5] [i_7 + 1] = ((/* implicit */_Bool) (unsigned short)19587);
                                arr_25 [i_6] [i_3] [i_3] = ((/* implicit */unsigned int) 5139719177128114556ULL);
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) -6537404583562094405LL)))));
                }
                for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_19 = ((/* implicit */short) (~(-9223372036854775806LL)));
                    arr_28 [i_8] [i_4] [i_3] [i_3] = ((/* implicit */long long int) 1929732663U);
                }
                for (long long int i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_10 = 1; i_10 < 14; i_10 += 2) /* same iter space */
                    {
                        arr_35 [i_10 + 1] [i_9] [i_9] [i_3] = ((/* implicit */short) ((unsigned short) arr_10 [i_9 + 1] [i_9 - 1] [i_9 - 1]));
                        var_20 = ((/* implicit */unsigned long long int) -309623140);
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 1; i_11 < 14; i_11 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_9 - 1] [i_3] [i_9 + 1] [i_11 - 1])) ? ((-(((/* implicit */int) (unsigned short)19954)))) : (((/* implicit */int) (signed char)-32))));
                        arr_39 [i_3] [i_4] [i_9] [i_9 - 1] [i_11 - 1] = (~(((/* implicit */int) (_Bool)0)));
                        arr_40 [i_9] [i_4] = ((/* implicit */int) ((var_12) << (((arr_17 [i_9 + 1]) - (127174651)))));
                        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-32))));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        arr_43 [i_9] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_7 [i_3]))))));
                        var_23 = ((/* implicit */short) var_6);
                        /* LoopSeq 3 */
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) ((arr_30 [i_13] [i_12] [i_9 - 1]) ? (((/* implicit */int) ((((/* implicit */int) var_10)) > (639976465)))) : (arr_17 [i_13])));
                            var_25 -= ((/* implicit */unsigned int) ((int) (unsigned short)19564));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_9 + 1])) > (((/* implicit */int) var_7))));
                            var_27 -= arr_34 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 - 1];
                        }
                        for (signed char i_14 = 4; i_14 < 12; i_14 += 2) 
                        {
                            var_28 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3] [i_4] [i_4] [i_12] [i_9 + 1]))) : (var_2));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_9 - 1] [i_9 - 1] [i_14 - 1] [i_12])) ? (arr_38 [i_9 + 1] [i_4] [i_14 - 2] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            arr_53 [i_3] [i_4] [i_12] [i_9] [i_9 - 1] = ((/* implicit */unsigned short) ((int) (unsigned short)45955));
                            var_30 = ((/* implicit */unsigned short) ((arr_31 [i_3] [i_4] [i_9 + 1] [i_12]) ? (((/* implicit */int) arr_31 [i_3] [i_9 + 1] [i_9 + 1] [i_12])) : (((/* implicit */int) arr_31 [i_3] [i_4] [i_9 - 1] [i_9 + 1]))));
                        }
                        var_31 = ((/* implicit */signed char) arr_32 [i_9 + 1] [i_9 + 1] [i_9] [i_9 - 1]);
                        arr_54 [i_9] [i_4] [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned short)45948)) ? (((/* implicit */unsigned long long int) var_9)) : (5381066868243184889ULL)))));
                    }
                    for (long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        arr_58 [i_3] [i_9 + 1] [i_3] [i_9] [i_3] = ((/* implicit */unsigned long long int) (!(((arr_48 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1]) < (arr_48 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) min((min((((((/* implicit */int) var_7)) / (((/* implicit */int) (signed char)-54)))), (((((/* implicit */int) (short)-21762)) / (-774182013))))), ((~((~(((/* implicit */int) arr_33 [i_3] [i_3] [i_4] [i_4] [i_16])))))))))));
                        var_33 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (signed char)-69)) + (753364523))))), (((((/* implicit */_Bool) 9223372036854775805LL)) ? (281474976645120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
                        arr_59 [i_9] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_44 [i_3] [i_9] [i_16] [i_9 - 1] [i_16])))) - ((~(min((((/* implicit */int) var_4)), (-309623132)))))));
                    }
                    arr_60 [i_9] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)21), (arr_56 [i_3] [i_9 - 1])))) + ((-(((/* implicit */int) (short)-21742))))))), (min((((/* implicit */unsigned long long int) (signed char)30)), (arr_34 [i_3] [i_4] [i_9 + 1] [i_4] [i_9 - 1] [i_3])))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_17 = 1; i_17 < 12; i_17 += 1) 
    {
        arr_63 [i_17] = ((/* implicit */int) ((unsigned long long int) min((0ULL), (((((/* implicit */_Bool) arr_49 [i_17 + 2] [i_17 + 3] [i_17 + 2] [i_17 + 3] [i_17 - 1] [i_17 + 3] [i_17 + 3])) ? (134755043695053519ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
        /* LoopNest 2 */
        for (short i_18 = 1; i_18 < 12; i_18 += 2) 
        {
            for (signed char i_19 = 0; i_19 < 15; i_19 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        for (signed char i_21 = 0; i_21 < 15; i_21 += 1) 
                        {
                            {
                                arr_75 [i_17 + 2] [i_18 - 1] [i_19] [i_17] [i_17 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_62 [i_17 + 1])))))));
                                arr_76 [i_17 + 2] [i_18 - 1] [i_19] [i_17] [i_21] [i_19] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_21] [i_20] [i_19] [i_18 + 1] [i_17 + 3])) >> (((134755043695053519ULL) - (134755043695053491ULL)))))) ? (((/* implicit */unsigned long long int) arr_47 [i_17 - 1])) : (((((/* implicit */_Bool) (signed char)-32)) ? (0ULL) : (((/* implicit */unsigned long long int) 0)))))), (((5139719177128114556ULL) << (((var_6) - (1020769365)))))));
                                arr_77 [i_17] [i_21] [i_20] [i_19] [i_18 - 1] [i_17] = ((/* implicit */short) 18446744073709551594ULL);
                            }
                        } 
                    } 
                    var_34 -= ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)5397)), (-9223372036854775806LL)))))));
                    arr_78 [i_17] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_36 [i_17 - 1] [i_18 + 1]))));
                }
            } 
        } 
        var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_38 [i_17 + 1] [i_17 + 2] [i_17 + 2] [i_17 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_17 + 1] [i_17 - 1] [i_17 + 3] [i_17 + 1]))) : (min((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)17)) || (var_10))))))));
    }
}
