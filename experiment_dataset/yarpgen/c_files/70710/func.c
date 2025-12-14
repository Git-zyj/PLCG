/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70710
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
    var_14 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((((!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))) ? (arr_2 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-119)), (var_5))))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)8072)))))))));
                        var_15 = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_16 = ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0LL]))) : (arr_3 [i_1]))) << (((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)207)) ? (-1210394900) : (1210394900)))) & (arr_1 [i_4]))) - (281203885U))));
                        arr_11 [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_4] [i_0] [i_1])) ? (var_9) : (((/* implicit */long long int) ((arr_0 [i_1]) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_2 [i_4])) ? (var_6) : (((/* implicit */unsigned int) arr_10 [(unsigned char)22] [(unsigned char)22] [(unsigned char)22])))))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_11))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_1))))) < (arr_14 [i_5] [i_1] [i_0])))) / ((~(1210394898)))));
                            arr_16 [i_1] [i_4] [13LL] [i_1] [i_1] = ((/* implicit */short) (((+(var_9))) % (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])))) ? (((((/* implicit */int) var_0)) ^ (arr_10 [i_5] [i_5] [i_5]))) : (((((/* implicit */_Bool) var_6)) ? (1191028590) : (-1210394885))))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_6 = 3; i_6 < 24; i_6 += 3) 
                        {
                            var_20 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) (+(-1210394889)))))) ? (((/* implicit */unsigned int) ((((var_10) ? (arr_10 [i_1] [14LL] [i_6]) : (((/* implicit */int) var_0)))) % (min((((/* implicit */int) var_11)), (1525064818)))))) : (((((/* implicit */_Bool) arr_15 [i_1] [(unsigned short)19] [i_4] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((var_12) << (((((((/* implicit */int) var_1)) + (28546))) - (25)))))) : (((arr_3 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))));
                            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_9))));
                            arr_21 [i_6 + 1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */int) var_1);
                            arr_22 [i_1] [i_1] [i_2] [i_2] [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1191028609)) ? (((/* implicit */int) arr_20 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 3] [i_6 - 1] [i_6 - 2])) : (((/* implicit */int) (signed char)26))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (var_7)))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (unsigned short)50400))));
                        }
                    }
                    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 24; i_8 += 1) 
                        {
                            arr_27 [i_0] [18U] [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */short) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [(short)22]))));
                            var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        }
                        for (short i_9 = 1; i_9 < 22; i_9 += 1) 
                        {
                            var_24 -= ((/* implicit */unsigned long long int) var_10);
                            var_25 = ((/* implicit */int) ((886145244U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-6978)))));
                        }
                        arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [(signed char)13] [i_2] [i_2] [i_7]))))));
                    }
                    for (signed char i_10 = 2; i_10 < 23; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((arr_7 [i_10 + 1] [i_10 - 2] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_2]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_23 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)9917))))))) ? (min((var_7), (((/* implicit */unsigned long long int) arr_13 [i_10 - 2])))) : (((/* implicit */unsigned long long int) (~(-1210394900)))))))));
                        /* LoopSeq 4 */
                        for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */short) var_6);
                            arr_37 [i_11] [(short)18] [i_1] [i_11] [12LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [1LL] [i_2] [i_10] [i_10] [i_11])))))) : (((((/* implicit */_Bool) (unsigned short)47378)) ? (arr_28 [(unsigned char)22] [(unsigned char)22] [(unsigned char)22] [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) 1154569158)))))))));
                        }
                        for (short i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_1] = arr_38 [i_2] [i_2] [i_2] [i_2] [i_2];
                            arr_42 [i_1] [i_10] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)47400);
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 4; i_13 < 22; i_13 += 3) 
                        {
                            arr_46 [i_1] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_20 [i_13] [i_0] [i_0] [i_2] [i_0] [i_0]))))));
                            arr_47 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((arr_26 [i_0] [i_0] [i_0] [(unsigned char)15]) | (((/* implicit */int) var_5))))) <= ((~(arr_18 [i_0] [(signed char)21] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            arr_52 [i_10] [i_10] [i_10] [i_2] [i_10] |= ((/* implicit */short) ((((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_0] [i_2] [i_2] [22LL] [i_14])) / (((/* implicit */int) arr_50 [i_0] [i_2] [4LL] [i_2] [(signed char)12]))))) : (max((var_3), (((/* implicit */unsigned long long int) ((var_10) ? (var_12) : (((/* implicit */int) (_Bool)1)))))))));
                            arr_53 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((arr_2 [i_10 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) * (min((arr_2 [i_10 + 2]), (((/* implicit */unsigned long long int) var_4))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_9 [23ULL] [i_2] [i_10 + 2] [i_10] [i_10 + 1] [i_15]), ((_Bool)1)))))))));
                            arr_56 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_6))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_33 [i_0] [i_1] [i_2] [i_10] [(short)11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_1] [i_1] [i_2] [i_1] [i_15])) % (1692470169))))))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (var_0)));
                        }
                    }
                    arr_57 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) 1210394900)) < ((-(var_9))))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */_Bool) var_0);
}
