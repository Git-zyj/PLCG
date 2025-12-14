/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82825
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
    var_10 = ((/* implicit */unsigned short) var_0);
    var_11 = ((/* implicit */signed char) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) (-(arr_3 [i_0] [i_0])))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) min((arr_4 [i_1] [i_0]), (arr_1 [i_0] [i_1])))))), (((/* implicit */unsigned long long int) (-(3438415233U))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */int) var_5);
                                arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_2 - 1])) ? ((-(arr_6 [i_2 - 1] [i_2] [i_2 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)108)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
                    arr_15 [11ULL] [i_0] [7LL] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2 - 1])) ? (arr_1 [i_0] [i_2 - 1]) : (arr_1 [i_0] [i_2 + 1])))) ? (arr_10 [i_2 + 1] [i_0]) : (((arr_9 [i_2 - 1]) ? (arr_10 [i_2 - 1] [i_0]) : (((/* implicit */long long int) arr_1 [11U] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5]))))));
                                arr_21 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) ((1048575U) + (3438415233U))));
                                arr_22 [i_0] [9LL] [i_2 - 1] [i_5] [i_5] [i_2 - 1] [8U] = ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((int) ((((/* implicit */_Bool) 856552076U)) ? (((/* implicit */int) arr_17 [i_2] [i_2 + 1] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_2 - 1] [i_2 - 1]))));
                }
                for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    arr_27 [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_7] [i_7 + 1] [i_7 - 1]);
                    arr_28 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_24 [i_1] [i_7 - 1] [i_7] [i_7])) ? (((/* implicit */int) arr_24 [i_1] [i_7 - 1] [i_1] [i_1])) : (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned short)52070))));
                    arr_29 [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned char)149), (((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_7] [i_7 - 1] [i_7 - 1]))))) / (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)110)), (arr_17 [i_7] [i_7] [i_7 - 1] [i_7 + 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        arr_33 [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_25 [i_0] [i_1] [i_7 + 1] [i_7]))), (arr_30 [i_8] [i_7] [i_1])));
                        arr_34 [i_8] [i_0] [3ULL] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(var_1)))) ? (14929218756824198562ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_7) < (arr_3 [i_0] [i_7])))))))));
                        arr_35 [i_0] [(short)11] [i_7] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)32261)) : (((/* implicit */int) (unsigned char)128))));
                    }
                }
                for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    arr_38 [i_0] [i_9] &= ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) ((signed char) arr_37 [i_9 - 1] [i_0] [i_9])))));
                    arr_39 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) arr_10 [i_9 + 1] [i_9]);
                    arr_40 [i_9] = ((/* implicit */short) arr_30 [i_0] [i_0] [i_9 + 1]);
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                arr_46 [i_0] [i_1] [i_0] [i_0] [i_1] [i_9] = ((((/* implicit */_Bool) arr_31 [i_0] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_11])) ? (((3438415233U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 856552073U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_24 [i_0] [i_9 - 1] [i_9 - 1] [i_9 - 1]))))));
                                arr_47 [i_0] [i_1] [i_9] [i_1] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_9 - 1] [i_11] [i_11] [i_11])), (arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])))) : ((-(arr_44 [i_9 - 1] [i_11] [i_11] [i_11] [i_11])))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        {
                            arr_53 [i_12] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_0] [i_1] [i_12] [i_13]))))) ? ((-(((/* implicit */int) arr_16 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_13] [i_12] [i_0]))))));
                            arr_54 [i_13] [i_12] [i_12] [i_0] = ((/* implicit */unsigned long long int) -2147483640);
                            arr_55 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_16 [i_12] [i_13]))));
                        }
                    } 
                } 
                arr_56 [(unsigned char)9] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1]))) : (2U))) : (arr_3 [i_0] [i_0])))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) (_Bool)1);
}
