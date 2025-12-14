/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6772
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */_Bool) max((arr_2 [i_0 + 1]), (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)138)))), (var_3))))))));
                    arr_9 [(unsigned char)7] [11] = ((/* implicit */unsigned short) (+(min((((((/* implicit */int) (unsigned char)176)) * (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned int) max(((+(arr_4 [i_0 + 1] [i_3 + 1] [i_4 + 1]))), (max((arr_4 [i_0 + 1] [i_3 + 4] [i_4 - 2]), (arr_4 [i_0 + 1] [i_3 + 1] [i_4 + 1])))));
                                arr_16 [i_4] [i_3 + 3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_6 [i_1] [i_2])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] [i_1])) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_0] [i_0] [i_2] [i_0] [2] [(unsigned short)13]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (arr_6 [0U] [0U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1])))))))) : (((/* implicit */unsigned long long int) 709797085U))));
                                var_20 &= (!(((/* implicit */_Bool) var_11)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_24 [9LL] [i_5] [(unsigned char)9] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]))));
                                var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)16376))))) && ((!(((/* implicit */_Bool) var_4)))))) ? (15699986038186690246ULL) : (var_3)));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)49160), (((/* implicit */unsigned short) (short)19743))))) << (((var_12) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_10 [i_0] [(unsigned char)9] [i_1] [i_2] [i_0] [i_6]))))))))))));
                                var_23 &= (+(((/* implicit */int) (!(((/* implicit */_Bool) -1041602732))))));
                                var_24 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_10))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_0] [i_0] = var_3;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) (short)22606)))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */short) (((+(((/* implicit */int) arr_30 [i_7] [i_8])))) * (((((/* implicit */int) (short)-19767)) | (((/* implicit */int) (unsigned char)188))))));
                                var_27 = var_4;
                                var_28 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (short)10919)) ? (((/* implicit */int) arr_12 [i_8] [i_8] [(short)4] [i_10] [i_10] [i_8] [i_11])) : (((/* implicit */int) (short)-27224)))));
                            }
                        } 
                    } 
                    arr_37 [i_7] [i_8] [i_7] &= ((/* implicit */_Bool) (short)-19767);
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            {
                                var_29 *= ((/* implicit */int) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((13278876175971320811ULL) + (18446744073709551607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (+(-899170549325592702LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
    {
        var_31 = ((/* implicit */unsigned int) (!((_Bool)0)));
        /* LoopNest 3 */
        for (unsigned char i_15 = 4; i_15 < 21; i_15 += 4) 
        {
            for (long long int i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    {
                        var_32 -= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [15LL] [i_14])))))))), (((((/* implicit */int) arr_44 [i_14] [i_16])) ^ (min((((/* implicit */int) (signed char)107)), (2147483644)))))));
                        var_33 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_17)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_15] [i_15 + 1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106)))));
                    }
                } 
            } 
        } 
        arr_56 [i_14] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_17))))))) ? ((~(arr_54 [19ULL] [i_14] [i_14] [(short)18] [(short)18]))) : (((/* implicit */int) (signed char)107)));
        var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 32764U)) || (((/* implicit */_Bool) (~(((int) var_4)))))));
    }
    var_35 |= ((/* implicit */unsigned char) max(((_Bool)1), ((!((!(var_15)))))));
}
