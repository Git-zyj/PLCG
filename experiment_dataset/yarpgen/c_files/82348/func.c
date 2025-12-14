/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82348
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
    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((1130050763) > (((/* implicit */int) (short)32767)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 20; i_1 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */short) arr_3 [i_0] [i_1]);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) / (3493341509U)))));
                        arr_10 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_2] [i_2] [(unsigned short)1] [i_2 - 1]));
                        var_17 |= ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)6))))) ? (((/* implicit */int) ((unsigned short) (short)32756))) : (((/* implicit */int) arr_9 [i_1 - 2] [i_3 + 1])));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_4 = 3; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_12))));
            arr_13 [i_0] [i_0] [i_0] = (+(arr_6 [(unsigned short)19] [i_4 + 1] [i_4 - 1]));
            /* LoopSeq 1 */
            for (signed char i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_4 + 1] [i_5 - 1] [i_5 - 2])) ? (((/* implicit */int) arr_5 [i_5 - 1] [i_4])) : (((/* implicit */int) ((((/* implicit */int) (short)-32756)) <= (-1130050762))))));
                var_20 *= ((/* implicit */unsigned char) ((arr_11 [i_4 - 3] [i_5] [i_4]) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_5] [2U])) : (1130050764)));
            }
        }
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) (-((-(2490552460670438871ULL)))));
        arr_18 [i_0] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-7702)))), (((/* implicit */int) ((unsigned char) arr_12 [i_0]))))), (1130050762)));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) -6526698038993058630LL))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_22 = arr_5 [i_0] [i_6];
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                for (unsigned char i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    {
                        arr_27 [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((-1130050776), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)14891))))))) && (((/* implicit */_Bool) 1130050762))));
                        arr_28 [(short)15] [i_0] [i_0] [i_7] [i_8] [i_8 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7 - 1] [i_6] [i_8] [i_8 + 1])) ? (((/* implicit */int) arr_14 [i_7 + 3] [(unsigned char)2] [0U] [i_8 - 1])) : (((/* implicit */int) (unsigned short)41662))))) && (((/* implicit */_Bool) arr_14 [i_7 - 1] [i_6] [i_7 - 1] [i_8 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (0LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_21 [(signed char)18] [i_0])))))) ? ((~(((arr_31 [i_6] [i_6] [i_7] [i_8] [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 + 3] [(unsigned short)11]))))))) : (((/* implicit */unsigned int) ((((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6] [i_6] [i_7] [i_8] [i_9]))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned char)69)))) : (((((/* implicit */_Bool) arr_9 [i_6] [i_8])) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (_Bool)1)))))))));
                            var_24 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_29 [i_0] [i_6])) ? (((/* implicit */unsigned int) -1130050763)) : (2431902783U))) | (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) arr_11 [i_0] [i_6] [i_7])))))))));
                        }
                        for (long long int i_10 = 2; i_10 < 20; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)46)) ? ((-(14913971667851421034ULL))) : (1048575ULL))))))));
                            arr_34 [i_7] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0] [i_6]) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [i_0] [i_7 + 3] [i_0]))))), (min((((/* implicit */unsigned int) (unsigned char)197)), (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_7])) | (((/* implicit */int) var_10))))) > (8605124899400397276ULL)))))));
                            arr_35 [i_0] [i_0] [i_0] [i_8] [i_0] = (!(((/* implicit */_Bool) (+(((/* implicit */int) max((var_9), (((/* implicit */short) var_6)))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_11 = 2; i_11 < 20; i_11 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (3532772405858130582ULL) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))) ? (min((max((((/* implicit */long long int) var_13)), (3691630306279922733LL))), (arr_20 [i_6] [i_0] [(unsigned short)3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (9841619174309154339ULL)))) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0])) : (arr_6 [i_0] [i_0] [i_0]))))));
                            var_27 = ((/* implicit */signed char) (((((+(((/* implicit */int) arr_26 [(unsigned char)6] [i_8 - 1])))) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_38 [i_11] [i_0] [i_0])), (arr_21 [i_6] [12])))))) ? (min((((/* implicit */unsigned long long int) arr_9 [i_8] [i_11])), (arr_3 [i_7 + 1] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)19011))))));
                            var_28 = ((/* implicit */long long int) (unsigned short)41662);
                            arr_39 [i_6] [i_0] [i_8 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 9841619174309154339ULL))))) > (((/* implicit */int) (short)-32767))));
                            arr_40 [i_0] = ((/* implicit */unsigned char) (+(-1114468137)));
                        }
                    }
                } 
            } 
            var_29 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (1142700868954283889ULL)))) ? (max((3532772405858130599ULL), (((/* implicit */unsigned long long int) 1130050762)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_0] [i_6]))))))), (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40852))) : (((((/* implicit */_Bool) 1810703898)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2711450253864694790ULL)))))));
            arr_41 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19011)) * (((/* implicit */int) (unsigned short)6))))) ? (3935982538U) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (unsigned short)11822)))))));
        }
    }
    var_30 -= ((/* implicit */_Bool) 3532772405858130582ULL);
}
