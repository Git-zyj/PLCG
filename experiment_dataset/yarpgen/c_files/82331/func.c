/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82331
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
    var_15 = ((/* implicit */long long int) ((int) var_6));
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [12LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)116))))) : (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) != (arr_5 [i_0] [i_0] [i_1] [i_2])))), (((unsigned long long int) 18446744073709551615ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
                    arr_7 [i_0] [i_1] [i_1] [(short)7] = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
        arr_9 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)17284), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 15768806226110235401ULL)))) : (arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 3]))))));
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (unsigned short)17287)))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_19 [i_3] [i_3] [i_4] [i_5 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_3] [i_4 - 1] [i_5]))));
                    arr_20 [i_3] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4])) || ((!(((/* implicit */_Bool) arr_12 [i_3])))))))));
                    arr_21 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) min((max((arr_11 [i_4]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) max((max((var_6), (((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned char) var_0))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 4; i_6 < 16; i_6 += 4) 
    {
        arr_24 [i_6 - 3] [i_6 - 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_4)) * (((unsigned int) (signed char)116))));
        arr_25 [i_6 - 2] = ((/* implicit */int) var_8);
        arr_26 [i_6] = arr_3 [i_6 - 2] [i_6 - 2];
        arr_27 [i_6 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-122)) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)51252)))));
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    arr_38 [i_8] [i_8] [i_7] = (!(((/* implicit */_Bool) 15815151995761740876ULL)));
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                arr_45 [i_8] |= ((/* implicit */unsigned short) arr_41 [i_7] [8ULL] [11LL] [i_7]);
                                arr_46 [i_10] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_8);
                                arr_47 [i_11 + 1] [i_10] [i_10] [i_10] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) max(((signed char)116), (((/* implicit */signed char) (_Bool)1))))) % (((/* implicit */int) var_14))));
                                arr_48 [i_7] [i_8] [i_9] [i_7] [i_10] = ((/* implicit */long long int) arr_28 [i_9] [i_9]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 21; i_13 += 4) 
                        {
                            {
                                arr_54 [i_13] [i_12] [i_7] [i_8] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((1784193833U) << (((((/* implicit */int) (short)32766)) - (32756))))))));
                                arr_55 [4LL] [i_8] [i_9] [i_12] [i_13 - 1] = (short)32767;
                                arr_56 [(short)0] [i_9] = ((/* implicit */unsigned int) (!((_Bool)1)));
                                arr_57 [i_7] [i_8] [i_9] [i_7] [i_13] = ((/* implicit */unsigned char) max((2510773461U), (((/* implicit */unsigned int) ((short) (signed char)127)))));
                                arr_58 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_13 - 3] [i_13] [i_13 - 1] [i_13 - 3] [i_13 - 1])) ? (((/* implicit */int) arr_43 [i_13 - 3] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1])) : (((/* implicit */int) arr_43 [i_13 - 3] [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1]))))) ? (((/* implicit */int) ((unsigned short) arr_43 [i_13 - 3] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1]))) : (((((/* implicit */int) arr_43 [i_13 - 3] [i_13] [i_13 - 1] [3U] [i_13 - 1])) / (((/* implicit */int) arr_43 [i_13 - 3] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_14 = 3; i_14 < 18; i_14 += 4) 
        {
            arr_61 [18LL] = ((/* implicit */short) (signed char)127);
            arr_62 [i_7] [i_14] [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2009170232761736409LL))), (((/* implicit */long long int) (_Bool)0))));
            arr_63 [i_14] [i_14 + 2] [i_14] = ((unsigned long long int) (!(((_Bool) 0ULL))));
        }
        arr_64 [9LL] = ((/* implicit */unsigned short) var_8);
    }
}
