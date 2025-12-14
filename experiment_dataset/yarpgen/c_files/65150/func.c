/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65150
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_8)))), (((/* implicit */int) var_4)))), ((+(-822425761)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_14 [13] [i_1] [(_Bool)1] [13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (signed char)-50)), (1668910375U)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-70)), (arr_1 [i_0])))) ? ((-(((/* implicit */int) (short)-21391)))) : (((/* implicit */int) var_1)))))));
                            arr_16 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (!((_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_3 - 2] [i_3]))) >= (min((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) (unsigned char)2))))))) : ((+(((/* implicit */int) var_6))))));
                            arr_17 [i_0] [i_0] [i_1] [(signed char)11] [i_0] [i_3] = ((/* implicit */int) (_Bool)1);
                            arr_18 [i_2] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 285076099)))) ? (((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3456089883U))) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-28433)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_4] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)85)), (9223372036854775807LL)));
                                arr_28 [i_0] [i_0] [i_0] [i_5] [i_0] [i_1] [i_4] = ((/* implicit */short) (signed char)50);
                                arr_29 [i_6 - 1] [i_5] [i_4] [i_1] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned short)62406))))));
                                arr_30 [14ULL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        for (signed char i_8 = 3; i_8 < 9; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        {
                            arr_42 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_43 [i_7] [2ULL] [i_9] [i_10] [i_7] [2ULL] = ((/* implicit */short) (unsigned short)41380);
                            arr_44 [i_7] [i_7] [i_7] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-126))));
                            arr_45 [i_7] [i_8 - 3] [i_9] [i_7] [i_9] = ((/* implicit */_Bool) 8388607ULL);
                            arr_46 [i_7] [i_10] [i_8] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)125))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8 - 3] [i_8 - 3] [i_8 - 3] [i_8 - 2]))) : (((((/* implicit */_Bool) (unsigned short)3138)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                arr_47 [i_7] [i_8 + 1] [i_7] = ((/* implicit */unsigned long long int) max((4395831218055033741LL), (arr_36 [i_7] [i_8] [i_8 - 1])));
                /* LoopNest 3 */
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            {
                                arr_56 [i_7] [i_8 + 2] [i_11] [i_7] [i_13] [(unsigned char)8] [i_13] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_20 [i_8 - 2] [i_8 - 2] [i_11]), (((/* implicit */long long int) (unsigned char)3))))), (((((/* implicit */_Bool) min((584081835U), (((/* implicit */unsigned int) var_4))))) ? (7618920789580380891ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [(unsigned char)8] [(unsigned char)8] [(short)5])))))));
                                arr_57 [(short)4] [i_8] [3ULL] [i_7] = ((/* implicit */long long int) arr_33 [(short)9]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
