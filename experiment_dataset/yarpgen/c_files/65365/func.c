/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65365
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (var_7)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)68)), (var_14))))));
    var_18 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_1 - 1])))) ? (((3554376257145723590ULL) & (3554376257145723590ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned long long int) var_1)), (var_7))) : (min((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_2 [i_0]))))));
                                var_20 = ((/* implicit */long long int) ((536870784ULL) == (10762716535259135209ULL)));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_10 [17LL] [i_0] [i_0] [(short)23] [i_0])))), (((((/* implicit */_Bool) -1261035015)) ? (1ULL) : (((/* implicit */unsigned long long int) var_5))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 2; i_5 < 7; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 7; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_7] [i_7] |= ((/* implicit */int) min(((+(min((3554376257145723590ULL), (14892367816563828025ULL))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15248961904180741258ULL)) ? (-1043295146) : (312804738)))) & (arr_6 [i_7])))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_29 [i_9] [(unsigned char)5] [i_7] [(signed char)8] [i_7] [3] [i_5] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) var_0)), (var_7)))));
                                arr_30 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_15 [i_6 - 1] [i_7] [i_5 + 3] [i_8] [i_8])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5 + 4] [(signed char)3] [i_5 + 4] [i_5 + 3] [i_5])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                                var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_19 [i_5 + 4] [i_6 - 2] [i_8 + 2])))) ? (var_8) : (min((min((var_5), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) min((var_4), (var_11))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 |= ((/* implicit */unsigned short) ((var_1) & (((/* implicit */long long int) max(((~(((/* implicit */int) arr_15 [i_5 + 1] [i_5] [i_5 + 2] [i_5] [5LL])))), (((/* implicit */int) var_16)))))));
    }
    /* vectorizable */
    for (signed char i_10 = 2; i_10 < 23; i_10 += 2) 
    {
        arr_34 [15U] = ((/* implicit */short) var_1);
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            arr_37 [(unsigned char)19] = ((/* implicit */unsigned short) ((var_10) <= (var_6)));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_12))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_14))) < (((/* implicit */int) var_0))));
            /* LoopNest 2 */
            for (long long int i_13 = 1; i_13 < 21; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    {
                        arr_44 [i_10] [i_13 + 2] [i_13] [i_12] = ((/* implicit */unsigned int) var_7);
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            arr_47 [i_12] = (+(arr_10 [i_10 - 2] [i_10] [i_10 + 1] [i_13 + 1] [i_10 - 2]));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-88)) ? (15818369784855785117ULL) : (4ULL))))));
                            var_26 = ((/* implicit */int) arr_45 [i_10] [i_10] [i_12] [i_13] [i_14] [0]);
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_10 + 1] [i_13 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7))))));
                        }
                        for (short i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            arr_50 [i_10] [i_12] [i_13] [i_14] [i_14] [4LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_12] [i_12] [10LL] [i_13 + 2] [i_16] [i_16]))) | (var_2)));
                            var_28 = ((/* implicit */long long int) ((unsigned short) var_3));
                            arr_51 [i_12] = ((/* implicit */unsigned char) arr_32 [i_14]);
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -420441528)) ? (-312804732) : (((/* implicit */int) (short)-1340))))) ? (14892367816563828026ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44551))))))));
                        }
                        arr_52 [i_12] [i_12] [i_13] [13ULL] = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                        arr_53 [i_10] [(unsigned char)20] [i_10] [(unsigned short)12] [i_10 + 1] [i_10] &= ((/* implicit */long long int) var_13);
                    }
                } 
            } 
            arr_54 [i_10] [i_10] [i_12] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_10] [i_12] [(short)18] [i_12] [i_12])) ? (arr_39 [i_10 + 1] [i_12] [i_12]) : (((/* implicit */unsigned long long int) var_3))));
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_10 - 1])) || (((/* implicit */_Bool) var_8)))))));
        }
    }
}
