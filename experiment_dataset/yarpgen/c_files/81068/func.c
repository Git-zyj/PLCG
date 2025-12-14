/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81068
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_1] [i_0] = ((unsigned short) max((var_9), (((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_4 - 2]))));
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(-1378859021))))));
                                arr_13 [i_0] [i_1] [i_3] = ((/* implicit */long long int) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_1]))))), (((-1378859021) / (((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) (((-(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_3))))) <= (((/* implicit */unsigned int) ((int) arr_7 [i_0] [i_0] [i_2])))));
                                var_19 = ((/* implicit */unsigned short) arr_4 [i_0] [9ULL] [i_2] [(short)9]);
                                arr_22 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((((unsigned long long int) var_2)) & (((((/* implicit */_Bool) arr_4 [i_5] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_20 [i_1] [i_1 - 1] [i_1 - 1] [0ULL] [i_1 - 2])) : (3372373534366166182ULL))))) < (((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1985879788)) ? (((/* implicit */int) (short)16588)) : (((/* implicit */int) (short)-16592))))) : (((arr_2 [i_5] [i_6]) ? (15074370539343385403ULL) : (15074370539343385403ULL)))))));
                                arr_23 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) 1544651953))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */int) (short)16588))))) : (max((((/* implicit */long long int) arr_6 [i_2] [i_6])), (733197346507597404LL))))) == (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) 1960682619201480690ULL))))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0] [i_2] = ((/* implicit */short) ((int) 1378859022));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (signed char i_9 = 2; i_9 < 22; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        arr_35 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */int) var_1);
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) (~(arr_34 [i_8] [i_8] [i_8] [i_10])));
                            arr_38 [i_7] = ((/* implicit */unsigned long long int) var_16);
                            var_21 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_25 [i_7] [i_11])) ? (((/* implicit */int) var_16)) : (-36064360))), (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_1))));
                        }
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            var_22 = 15074370539343385426ULL;
                            arr_41 [(short)2] [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-16589)) - (((/* implicit */int) (short)15990))))) ? ((-(15074370539343385450ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)442))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                            arr_42 [i_10] [i_7] = max((((unsigned int) arr_28 [i_8])), (((/* implicit */unsigned int) ((((unsigned int) (unsigned short)32125)) != (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) % (arr_28 [i_12]))))))));
                        }
                        for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            arr_47 [i_7] [i_7] [i_7] [i_7] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9 + 2])) ? (arr_43 [i_9 - 1] [i_8] [i_7] [i_9 - 1] [16ULL]) : (((/* implicit */long long int) arr_26 [i_9 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_9 + 2] [i_9 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9 + 2] [i_9 - 1]))) : (var_9)))) : ((+(arr_43 [i_9 + 2] [i_8] [i_9] [i_10] [i_10])))));
                            arr_48 [i_7] [i_9 - 1] [i_10] [i_13] = arr_33 [i_10] [i_8] [i_13] [i_7];
                            arr_49 [i_7] [i_8] [i_9] [i_7] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((((/* implicit */int) (short)-32760)) + (2147483647))) << (((((-1466574750) + (1466574768))) - (18)))))))) ^ (min((((/* implicit */unsigned long long int) var_5)), (var_10)))));
                        }
                        arr_50 [i_7] [i_7] [i_9] [i_9 + 3] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-108))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 2) 
                    {
                        arr_55 [i_7] [i_8] [i_9] [i_9 - 2] [i_9] [i_7] = ((/* implicit */unsigned short) arr_46 [i_8] [i_8] [i_7] [i_8] [i_7]);
                        var_23 = ((/* implicit */signed char) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))), ((-((-(((/* implicit */int) (unsigned short)57097))))))));
                    }
                    arr_56 [i_7] [i_8] [i_8] [i_9] = ((/* implicit */short) ((3035372930U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)32760)))));
                }
            } 
        } 
    } 
}
