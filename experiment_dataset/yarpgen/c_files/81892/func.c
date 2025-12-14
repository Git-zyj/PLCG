/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81892
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
    var_19 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_10 [(signed char)1] [(unsigned short)5] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1]))));
                    arr_11 [i_0] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) 9LL)) * (arr_1 [i_2])))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_14 [i_3] [(short)6] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) && ((!(((/* implicit */_Bool) arr_9 [3ULL] [i_1] [i_0]))))));
                        arr_15 [i_3] [23LL] [(short)14] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 18446744073709551605ULL)))) ? ((-(4LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)32767)))))));
                        arr_16 [(unsigned char)20] [(unsigned char)20] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) arr_0 [i_2] [i_3]))));
                        arr_17 [i_3] [i_3] [i_3] [i_3] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-27048))) % (2LL)));
                    }
                    for (short i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        arr_20 [i_1] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0] [i_1]))))));
                        arr_21 [i_0 - 1] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [(signed char)22])) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) -27LL))));
                    }
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        arr_24 [i_0] [(short)6] [(unsigned char)1] [i_0] [(unsigned char)12] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -2LL)))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) : (1943785511U)))));
                        arr_25 [i_0] [i_0] [6LL] [i_5] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_3))))));
                    }
                    arr_26 [i_0] [15ULL] [(unsigned char)23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2] [i_1]))) ^ (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 24; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                arr_33 [16U] [(signed char)24] [i_1] [i_0] [i_0] = (!(((/* implicit */_Bool) (unsigned char)7)));
                                arr_34 [i_0] [i_0] [14ULL] [i_1] [i_7] [i_0] [(unsigned char)24] = ((/* implicit */signed char) 1LL);
                                arr_35 [i_0] [i_0] [(short)16] [i_6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_31 [i_0 - 1] [(signed char)6] [(signed char)21] [i_6] [i_6] [i_7])))) && (((/* implicit */_Bool) 18446744073709551600ULL))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    arr_38 [i_8] [(unsigned char)5] [i_0 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((unsigned long long int) (signed char)110))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            arr_44 [(unsigned char)17] [(unsigned char)3] [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (18446744073709551602ULL))))));
                            arr_45 [i_1] [(signed char)21] [i_1] = ((/* implicit */_Bool) var_3);
                        }
                        arr_46 [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) 2LL)) ? (7501344512531877936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 1] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))));
                        arr_47 [i_9] [(_Bool)1] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [18ULL]))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_32 [(short)0] [i_1] [i_0] [(short)0] [i_1] [i_8] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_6 [i_0] [(unsigned char)1]))))) : (((/* implicit */int) var_8))));
                    }
                    arr_48 [12U] [(signed char)24] [i_1] [i_8] = var_11;
                    arr_49 [i_8] [i_1] [(unsigned short)6] = ((/* implicit */short) arr_43 [(short)2] [i_8] [(unsigned short)16] [i_0 - 1] [(unsigned short)16] [(short)2] [(short)2]);
                }
                arr_50 [i_0] = arr_19 [i_0] [i_1];
                arr_51 [(short)17] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) == (((/* implicit */int) var_4))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_19 [(unsigned short)18] [i_1])))) : ((-(((/* implicit */int) (short)22))))))));
                arr_52 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) (+((+(((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_0 - 1] [i_1] [i_1] [(unsigned char)18] [(short)8])))))));
            }
        } 
    } 
}
