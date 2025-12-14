/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90718
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
    var_16 = ((/* implicit */unsigned short) ((((int) var_0)) - (((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_3)))))) ? (((/* implicit */unsigned long long int) ((int) max((arr_2 [i_0]), (((/* implicit */short) arr_0 [9] [i_1])))))) : (var_1)));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_3] [14ULL] = ((/* implicit */signed char) max((((/* implicit */int) arr_13 [i_0] [i_1] [i_2 - 1])), ((+((~(arr_1 [15LL])))))));
                                arr_15 [i_3] [11U] [i_2 + 1] [11U] [i_2 + 1] [i_4] = ((/* implicit */signed char) arr_6 [(unsigned char)7] [i_1] [(short)15]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned short i_6 = 3; i_6 < 14; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned char i_7 = 1; i_7 < 16; i_7 += 4) 
                            {
                                arr_25 [i_7] = ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)208)));
                                var_18 += ((/* implicit */long long int) var_4);
                            }
                            for (int i_8 = 2; i_8 < 16; i_8 += 1) 
                            {
                                arr_28 [6LL] [i_1] [11] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_4))) == (((((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_17 [i_6] [i_5] [i_1] [i_0])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5])))))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)208)) | (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((((/* implicit */_Bool) arr_13 [(short)15] [i_6 - 1] [i_5])) ? (((/* implicit */int) arr_8 [i_6] [16ULL])) : (((/* implicit */int) var_8))))))) : (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) arr_1 [i_5]))))) : (((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_4 [i_6] [i_5] [i_1])) - (76)))))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned char)14)))))));
                                var_21 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))))) << (((((/* implicit */int) arr_23 [i_0] [i_0] [i_8] [10ULL] [i_0])) + (15610)))));
                            }
                            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (max((arr_10 [13LL] [5LL] [(_Bool)1] [i_6]), (((/* implicit */unsigned int) arr_4 [(unsigned char)14] [i_6 + 2] [i_9])))))) >= (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_23 [(unsigned char)12] [i_9] [i_5] [i_9] [i_0])))) - (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_27 [i_1] [i_1])) : (((/* implicit */int) arr_22 [i_0] [12])))))))));
                                var_23 = ((/* implicit */unsigned char) ((((unsigned long long int) min(((unsigned char)160), (arr_16 [i_5] [i_6])))) & (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-26347)) ? (1252996613213425669LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)64))))) & (((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_11))))))))));
                            }
                            for (unsigned char i_10 = 1; i_10 < 15; i_10 += 1) 
                            {
                                arr_33 [i_0] [(unsigned short)9] [i_1] [i_5] [i_6 + 1] [(unsigned short)9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_10 - 1] [i_1])) >> (((((/* implicit */int) var_6)) - (116)))))) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))))))) ? (arr_10 [i_0] [i_1] [i_5] [i_10]) : (((/* implicit */unsigned int) (-((+(-284889431))))))));
                                var_24 = ((/* implicit */unsigned long long int) (unsigned char)0);
                                var_25 = ((/* implicit */unsigned char) var_14);
                            }
                            var_26 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)7)) << (((((/* implicit */int) arr_16 [(short)6] [(unsigned char)16])) - (75))))) & (((/* implicit */int) ((unsigned char) (unsigned char)248))))) <= (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_6 - 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)26347)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 16; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        {
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_12] [i_11] [(unsigned char)1]))))) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_29 [10] [i_1] [i_1] [i_1] [i_1])))))))) ? (((((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) | (((((((/* implicit */int) (signed char)-109)) + (2147483647))) >> (((var_14) - (7291046813105695108LL))))))) : ((~(((arr_1 [i_12]) / (-1060688649))))));
                            var_28 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (13128685537762444188ULL)))));
                            arr_41 [i_0] [i_0] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_12] [i_11] [i_1] [i_0])) ? (((/* implicit */int) arr_12 [(unsigned char)13] [(signed char)3] [(unsigned char)13] [i_11] [i_12])) : (((/* implicit */int) var_3))))))))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (((((/* implicit */_Bool) (signed char)-65)) ? (arr_10 [(signed char)11] [i_11] [i_1] [i_0]) : (var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_13 = 1; i_13 < 17; i_13 += 4) 
    {
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                {
                    arr_50 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((max((2ULL), (((/* implicit */unsigned long long int) (short)-17096)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_44 [i_15]))))))))));
                    var_29 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))) : (3057100623U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [(short)8])) & (((/* implicit */int) arr_49 [4] [i_14] [i_14]))))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) + (-1060688649))))));
                }
            } 
        } 
    } 
}
