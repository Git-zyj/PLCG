/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78482
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
    var_17 = ((/* implicit */unsigned short) var_2);
    var_18 = ((/* implicit */short) (+(((/* implicit */int) (short)-30730))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned short) (+(((103530977462359203ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (15360) : ((-(((/* implicit */int) var_8))))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) arr_12 [i_1] [i_2] [i_3] [i_4]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)1)))) != (((15360) % (((/* implicit */int) var_15)))))))));
                            arr_16 [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_2] [i_2]))) > (((8388600U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16256)))))));
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_1] [i_2] [i_4]));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_1] [i_6])), (arr_19 [i_4] [i_4] [i_4] [i_1] [i_1]))))))), (max((arr_4 [i_1 - 2]), (((((/* implicit */_Bool) 1048575U)) ? (arr_6 [i_1] [i_2]) : (((/* implicit */int) var_1))))))));
                            var_25 = var_0;
                            var_26 ^= ((/* implicit */signed char) (+(min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (0ULL))))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_27 *= ((/* implicit */signed char) (-(1048575U)));
                            arr_23 [i_1] [i_1] [i_3] [i_4] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)1))));
                            var_28 = ((/* implicit */_Bool) ((int) var_14));
                        }
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) var_5))));
                        var_30 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1])))) + (2147483647))) << (((max(((+(((/* implicit */int) (unsigned short)240)))), (((/* implicit */int) arr_8 [i_1])))) - (240)))));
                    }
                } 
            } 
        } 
        arr_24 [i_1] = ((/* implicit */unsigned short) var_11);
    }
    for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 2) 
    {
        var_31 = ((/* implicit */long long int) (unsigned char)35);
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 13; i_9 += 3) 
        {
            for (unsigned int i_10 = 1; i_10 < 13; i_10 += 3) 
            {
                {
                    var_32 *= arr_29 [i_8] [i_10];
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 15; i_12 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) ((min((arr_34 [i_9]), (arr_34 [i_9]))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_32 [i_9]))))));
                                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_18 [i_12] [i_9] [i_9] [i_9] [i_8])) : (((/* implicit */int) var_15))))));
                                arr_40 [i_8] [i_9] [i_10] [i_9] [i_12] [i_12 + 1] = arr_31 [i_9 + 1];
                                var_35 = ((/* implicit */long long int) arr_14 [i_9] [i_9]);
                                var_36 = ((/* implicit */unsigned short) ((unsigned char) (+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65296)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_14 [i_8] [i_8]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8] [i_8])) % (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((int) arr_6 [i_8] [i_8]))) : (((((/* implicit */_Bool) min(((unsigned short)4096), (((/* implicit */unsigned short) arr_21 [i_8] [12LL] [i_8 + 1] [i_8] [i_8] [i_8]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16258)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_31 [i_8]))))) : (arr_34 [i_8]))))))));
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 13; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            {
                                var_38 += ((/* implicit */int) (_Bool)0);
                                arr_51 [i_8] [i_8] [i_14] [i_16] [1] [i_14] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13 - 1] [i_8 - 2] [(unsigned char)2] [i_8 + 2]))) / (134201344U))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)232)) & (arr_27 [i_8 - 3]))))));
                                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16245)) ? (((/* implicit */int) (short)-32746)) : (((/* implicit */int) arr_28 [i_14]))))) : (((((/* implicit */_Bool) var_14)) ? (65535ULL) : (((/* implicit */unsigned long long int) arr_45 [i_8] [i_13 - 1] [i_14] [i_15])))))))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned short)259)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16250))) : (28672U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_8] [i_8 - 4] [i_13 + 2] [i_13] [i_14] [i_14])))));
                    arr_52 [i_8 - 4] [i_8] [i_13] [i_14] &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [8] [i_13 + 2] [(_Bool)1] [i_8 - 1] [(unsigned char)5] [(short)10]))))) ? (min((((/* implicit */unsigned int) arr_50 [i_13] [i_8 - 2] [i_13 - 1] [i_8 - 2] [i_8])), (((((/* implicit */_Bool) (unsigned short)30284)) ? (3608530497U) : (var_9))))) : ((-(((((/* implicit */_Bool) var_13)) ? (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_17 = 4; i_17 < 15; i_17 += 2) 
                    {
                        arr_56 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                        arr_57 [i_17] [11LL] [i_14] [i_14] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_21 [i_8] [i_8] [i_14] [i_17] [i_17] [(_Bool)1])), (arr_22 [i_8])))), (arr_34 [i_8]))))));
                    }
                    for (unsigned int i_18 = 2; i_18 < 14; i_18 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_13 + 3] [i_13 + 3] [i_18]) ? (((arr_19 [i_8] [i_13] [i_13] [i_18] [i_13]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_8] [i_13] [i_14] [i_14] [i_18]))))) : (((/* implicit */unsigned int) arr_4 [i_18 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_18])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) ((signed char) (signed char)-29))))))));
                        arr_61 [i_8] [i_13] [i_8] [i_18] = ((/* implicit */long long int) max((max(((-(((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned short)49277))))))), (((/* implicit */int) (!(((/* implicit */_Bool) 19LL)))))));
                        var_42 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (!(arr_21 [i_18] [i_18] [i_18] [i_18] [i_8] [i_8 - 1]))))))));
                    }
                    for (unsigned short i_19 = 1; i_19 < 13; i_19 += 4) 
                    {
                        arr_64 [i_8] [i_13] [i_19] [i_19 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8 - 3] [i_8 - 1] [i_13] [i_19] [i_13])) ? (arr_19 [i_19] [i_19] [i_14] [i_19] [i_8]) : (arr_19 [i_8 - 4] [i_8 - 1] [i_8] [i_19] [i_8 - 2])))) ? (((arr_19 [i_8] [i_8] [i_13] [i_19] [i_8]) - (arr_19 [i_19] [i_19] [i_13 + 2] [i_19] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_19 + 2] [i_19] [(unsigned short)1] [i_19] [i_8]))))))));
                        arr_65 [i_8] [i_19] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_8 + 2] [i_13] [i_19] [i_14] [i_19 + 3])) < (((/* implicit */int) arr_15 [i_8 - 1] [i_13] [i_19] [i_19 + 1] [i_19 - 1])))))) != (((long long int) arr_47 [i_13] [i_13] [i_13] [i_13 - 1] [i_13] [i_13]))));
                        var_43 -= ((/* implicit */signed char) (+(min((((unsigned long long int) arr_33 [i_19])), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_37 [i_19 + 1] [i_19] [i_13] [i_13] [i_8 - 2])), (var_16))))))));
                    }
                    /* vectorizable */
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        arr_69 [i_13 - 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_8 - 3])) >> (((/* implicit */int) (short)0))));
                        var_44 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18014398509465600LL))));
                        arr_70 [i_8 + 1] [i_13] [i_13] [i_20] = ((/* implicit */unsigned short) ((1125899906842623LL) - (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_8] [i_13 - 1] [i_14] [i_20] [i_14] [i_13])))));
                    }
                }
            } 
        } 
    }
}
