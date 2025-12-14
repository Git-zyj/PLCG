/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70852
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [10U] [i_2] [i_1 + 1] [10U] [i_0 + 2] [10U])))) / (((/* implicit */int) arr_2 [i_1 - 1])))) / ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) arr_2 [8LL])))))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1 - 1] [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0])) - (((/* implicit */int) arr_8 [i_1 + 1] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [12U]))))) ? (((/* implicit */int) (short)31432)) : (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))))));
                                arr_13 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_1] [i_4])) ? (1279057597U) : (4294967292U)))) ? (((/* implicit */int) arr_12 [i_0] [(unsigned short)11] [i_0])) : (((/* implicit */int) arr_2 [i_2]))));
                            }
                            /* vectorizable */
                            for (short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                            {
                                arr_17 [i_0] [i_0] [i_1 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_14 [(short)13] [i_1] [i_2] [i_3] [8U] [i_5] [4U]);
                                arr_18 [(short)9] [(short)9] [i_0] [i_1] [i_5] [(short)9] = ((/* implicit */unsigned int) ((short) arr_14 [i_0] [(short)6] [(short)3] [i_0] [i_1 + 1] [i_5] [i_0]));
                                arr_19 [i_0] [i_0] [i_0] [i_3] [i_2] [1LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (-5624886640495273698LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15)))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0] [i_0] [i_3] [i_0] [i_6]), (((short) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 + 2])), (arr_16 [i_0] [i_3] [i_0]))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_6] [i_2] [(short)0] [i_2] [i_0])) : (((((/* implicit */int) arr_23 [i_0] [(unsigned char)12] [i_2] [i_3] [i_2])) | (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) arr_7 [(unsigned short)8] [i_2] [i_2] [(unsigned short)8] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [13LL])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_6])))))))));
                            }
                            var_19 = ((/* implicit */unsigned short) (short)15);
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) (unsigned char)7))))) ? (max((((((/* implicit */_Bool) 535822336U)) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_1 - 1] [i_1] [i_3] [i_1])) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] [i_3])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            arr_28 [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_3)), (arr_15 [i_0 + 1] [i_0] [i_1 + 1] [i_0 + 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8))))))));
                            /* LoopSeq 3 */
                            for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                            {
                                var_21 *= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((short) arr_23 [i_7] [i_8] [i_7] [i_1] [i_0]))))) / (((/* implicit */int) (unsigned char)42))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_20 [i_9] [i_1]))));
                            }
                            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_33 [i_0] [i_1 + 1] [i_7] [2LL] [i_10] [(short)2])))) ? (((/* implicit */int) ((short) ((long long int) (unsigned char)8)))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((((/* implicit */int) var_1)) << (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((arr_20 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1]))))))))));
                                var_24 = ((short) (short)-26);
                            }
                            for (unsigned int i_11 = 1; i_11 < 14; i_11 += 1) 
                            {
                                arr_37 [i_0] [(unsigned short)10] [i_0] [i_0 + 2] [(unsigned char)13] [i_0] = ((/* implicit */unsigned int) max((max((arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_11 - 1]), (arr_8 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_11 - 1]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_11 + 1] [13LL] [i_11 + 1] [(short)5] [13LL] [(short)5] [i_1])))))));
                                var_25 = 3015909699U;
                                arr_38 [i_0] [i_1] [i_1] [i_0] [(short)11] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 2; i_12 < 14; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        {
                            var_26 = max((var_3), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (short)-16)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned short)49002)))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_1] [i_12 + 1] [i_13] [(unsigned short)6])) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) (short)-1)) ? (295535907U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (arr_31 [i_0] [i_0] [i_0] [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) (unsigned char)0)) : ((~(((/* implicit */int) arr_42 [i_0] [i_0 + 1] [i_12 - 1] [i_0]))))))) ? (max((arr_11 [i_0 + 2] [i_0] [i_1 - 1] [i_12 - 1] [i_12 - 2] [i_13]), (((/* implicit */unsigned long long int) ((short) arr_1 [i_12]))))) : (((/* implicit */unsigned long long int) ((arr_33 [i_0] [i_1 - 1] [10LL] [i_13] [i_13] [i_13]) << (((((/* implicit */int) arr_36 [i_0 + 1] [i_1] [(short)3] [i_12 + 1] [(unsigned short)7])) + (28220))))))))));
                            arr_43 [i_0] [i_1 + 1] [i_1] [(short)0] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((5588687947998495973LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) == (((/* implicit */long long int) ((/* implicit */int) (short)-29964)))))), (((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_13)) + (5898)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        {
                            arr_50 [i_0] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_48 [i_0] [i_0] [i_14] [i_15]))))));
                            var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)32768))))));
                            arr_51 [i_14] [(unsigned short)2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1566953535U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_2 [i_15])) ? (((/* implicit */int) arr_23 [i_0 + 2] [i_0] [(unsigned short)9] [i_0] [2U])) : (((/* implicit */int) arr_48 [i_0] [i_14] [i_0] [i_0])))) : (((/* implicit */int) arr_5 [5ULL] [i_1 - 1] [i_1 + 1] [i_15])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_10))));
    var_31 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) var_8))));
}
