/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72105
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (short)(-32767 - 1)))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(((unsigned long long int) arr_7 [i_2 - 1] [10] [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])) && (((/* implicit */_Bool) var_9)))) ? (arr_0 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (!((!(arr_5 [i_0] [5ULL] [i_0])))))))));
                                var_19 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = (!(arr_4 [(signed char)12] [i_1]));
                                arr_16 [i_2] = ((/* implicit */int) (unsigned short)0);
                                var_20 *= ((/* implicit */unsigned long long int) ((((long long int) ((short) arr_0 [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) arr_11 [i_4]))) == (((/* implicit */int) arr_12 [11LL] [i_2 + 2] [i_2] [i_2 + 2] [i_2 - 1]))))))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    arr_19 [6ULL] [i_1] [i_5] [i_1] |= ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_5]))) ^ (var_16)))));
                    arr_20 [i_0] [i_1] [i_5] = ((/* implicit */_Bool) (~((~(var_7)))));
                }
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                {
                    arr_24 [i_0] [i_0] [i_0] [i_0] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_1]))) >= (max((arr_11 [i_0]), (arr_11 [i_6]))));
                    arr_25 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) : (15ULL)));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)0);
                }
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)1))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        arr_33 [i_0] [i_1] [i_7] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)245))))))));
                        arr_34 [i_0] [i_0] [i_0] [(unsigned char)10] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((unsigned long long int) var_7)) ^ (var_14))) != (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (short)3584)) : (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */int) arr_4 [i_1] [17LL])) ^ (((/* implicit */int) var_4)))))))));
                        var_22 *= ((/* implicit */_Bool) arr_13 [i_0] [i_0] [(signed char)2] [i_8] [i_7]);
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65532))));
                        arr_36 [i_0] [i_1] [3] [i_1] [i_7] [i_8] = ((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) max((arr_17 [i_1] [i_1] [i_9 + 2] [i_9 + 1]), (((((/* implicit */_Bool) arr_17 [i_0] [i_9 - 1] [i_7] [i_9])) ? (arr_17 [i_9] [i_0] [i_1] [i_0]) : (arr_17 [i_0] [i_0] [i_0] [i_0])))));
                        var_24 = ((/* implicit */_Bool) ((unsigned char) (-(var_7))));
                        var_25 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) 0U)))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_26 = ((((_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 18446744073709551615ULL)))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned short)65532))))));
                        arr_42 [i_0] [i_10] = ((/* implicit */unsigned short) var_2);
                        var_27 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [i_0] [i_10])) : (((/* implicit */int) arr_22 [i_10] [i_0])))));
                        arr_43 [i_0] [i_10] = ((/* implicit */signed char) (!(((arr_3 [i_0] [i_7] [i_7]) == (((long long int) (short)-32746))))));
                    }
                    arr_44 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_7]), (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) (unsigned short)4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7] [i_1] [i_0])) && (((/* implicit */_Bool) 15032385536ULL))))) : (((/* implicit */int) arr_10 [i_0] [(unsigned short)7] [3ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (-1)))))))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_7] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_7])) : (((/* implicit */int) arr_41 [i_0] [i_1] [i_7] [i_7]))))) ? (max((2296835809958952960ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) ((-9223372036854775778LL) == (arr_0 [i_0])))))))));
                }
                var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_40 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [(signed char)1] [i_0] [(unsigned short)2] [i_0]))) : (8191ULL))))), (((arr_4 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_0]))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_14))));
    /* LoopNest 2 */
    for (unsigned int i_11 = 2; i_11 < 13; i_11 += 4) 
    {
        for (long long int i_12 = 1; i_12 < 16; i_12 += 2) 
        {
            {
                arr_49 [i_11] [i_11] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) min((max((18446744073709551604ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (short)0)))))));
                var_31 = ((/* implicit */long long int) ((unsigned long long int) (-(min((var_3), (arr_47 [i_11 - 1] [i_11] [i_12]))))));
            }
        } 
    } 
}
