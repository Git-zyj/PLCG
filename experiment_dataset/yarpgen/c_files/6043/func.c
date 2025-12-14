/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6043
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [18U] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_3 [18U] [i_1 + 3] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_3] [i_2]))) % (var_9)))))) : ((~(arr_5 [i_0] [i_4 - 2])))));
                                arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4160749568U)) ? (max((((/* implicit */long long int) var_9)), (19LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)107)))))))) : (((9727217839812499458ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_0 [i_0]))));
                        arr_16 [i_0] [i_0] [1U] [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)12))))) + (((1424428777U) - (var_2)))))), (((((/* implicit */unsigned long long int) 157328470U)) * (arr_5 [i_1 - 1] [i_2 - 2]))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)45071))))) ? (max((max((var_14), (((/* implicit */unsigned long long int) arr_21 [i_8] [i_8] [i_7])))), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_6] [i_7]))) * (arr_15 [14LL] [i_7] [i_7] [i_8] [i_8]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_12))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4160749568U)) ? (4160749568U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13404)))));
                            arr_28 [i_10] [i_7] [i_9] [i_8] [i_7] [i_6] = ((/* implicit */unsigned short) var_4);
                        }
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                        {
                            arr_32 [i_6] [i_7] [i_11] = ((/* implicit */signed char) (~(arr_0 [i_6])));
                            arr_33 [i_6] [i_7] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_27 [i_11] [i_9] [i_7] [i_7] [i_6]))) ? (((/* implicit */unsigned long long int) var_9)) : (arr_12 [i_6] [(signed char)12] [i_7] [i_8] [i_8] [i_9] [i_11])));
                        }
                        var_23 = ((/* implicit */unsigned int) ((unsigned long long int) arr_30 [i_7] [(unsigned short)17] [i_8]));
                        var_24 = ((/* implicit */unsigned int) (+(arr_4 [i_9])));
                        arr_34 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) : (arr_10 [i_9] [i_7] [i_8] [i_7] [19ULL] [i_7])));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((134217754U) >> (min((((/* implicit */long long int) ((((/* implicit */_Bool) 4160749578U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (4160749554U)))), ((~(-1LL)))))));
    /* LoopNest 3 */
    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
    {
        for (signed char i_13 = 4; i_13 < 12; i_13 += 1) 
        {
            for (long long int i_14 = 3; i_14 < 13; i_14 += 4) 
            {
                {
                    var_26 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_29 [(unsigned short)4] [8U] [i_14] [i_13] [i_14 + 1] [i_13] [i_12])), (((2LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_27 = ((/* implicit */long long int) ((arr_20 [i_12]) % (((/* implicit */unsigned int) max((((/* implicit */int) arr_31 [i_12] [i_13 - 3] [i_13 - 1] [i_13] [i_13] [i_12])), (((arr_7 [i_13]) / (((/* implicit */int) (unsigned char)191)))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 4; i_15 < 12; i_15 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((min((((var_11) + (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) arr_40 [i_15 + 2] [i_12])))) + (((/* implicit */unsigned long long int) var_9)))))));
                        var_29 = ((/* implicit */signed char) min((134217719U), (min((((/* implicit */unsigned int) 1705699997)), (((1699490902U) - (134217695U)))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_16 = 1; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        arr_50 [i_12] [i_12] [i_12] [7] [i_14 - 3] [i_16] = arr_46 [(unsigned char)4] [10U] [i_12] [i_13 - 1];
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_12] [i_14 + 1] [i_14])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 1; i_17 < 11; i_17 += 1) /* same iter space */
                    {
                        var_31 = arr_3 [i_12] [i_13 - 1] [12];
                        var_32 = ((/* implicit */signed char) arr_38 [i_17 + 3]);
                        arr_55 [i_17] [i_14] [i_13] [i_12] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_52 [i_13 - 4] [i_13 + 2] [i_14 + 1] [i_17 + 3] [i_17 + 1]))));
                        var_33 *= ((/* implicit */unsigned char) (-(arr_10 [i_17 - 1] [i_12] [i_17 + 3] [14] [12LL] [i_17])));
                    }
                }
            } 
        } 
    } 
}
