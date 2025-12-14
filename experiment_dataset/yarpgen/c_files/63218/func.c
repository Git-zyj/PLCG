/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63218
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [i_3] [(signed char)17]), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_3] [i_1])))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27156))) : (arr_10 [i_0] [i_0] [i_3] [(signed char)21])))));
                        arr_15 [i_0] [(unsigned char)7] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [(short)11] [(signed char)18])), (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) ? (4193860010U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            arr_19 [i_3] [i_0] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_6);
                            arr_20 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((unsigned long long int) 1257056488)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_16))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23458)))))) : (((/* implicit */int) (_Bool)0))));
                            arr_21 [i_0] [1] [(signed char)20] [i_3] [i_3] = ((/* implicit */unsigned int) 863651718);
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_24 [i_3] [(signed char)13] [i_3] [14U] [i_3] [i_0] [i_3] = ((((((/* implicit */_Bool) (signed char)112)) ? (var_0) : (((/* implicit */unsigned long long int) var_15)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22524))));
                            arr_25 [i_0] [(_Bool)1] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))) ^ ((((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)169))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        arr_30 [i_0] [i_1] [(unsigned short)8] [i_6] [(short)8] [(short)8] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-15)) : (((((/* implicit */_Bool) (short)-4823)) ? (((/* implicit */int) (short)2258)) : (((/* implicit */int) (_Bool)0)))));
                        arr_31 [i_0] [i_0] [i_2] [(unsigned short)19] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned long long int) var_15)) ^ (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [(unsigned short)0] [i_2] [i_6] [i_6]))));
                    }
                    for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        arr_34 [10LL] [i_1] [7LL] [i_7] = var_3;
                        arr_35 [i_1] = var_7;
                    }
                    for (short i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        arr_39 [i_0] [i_1] [7LL] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_8 - 1] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))));
                        arr_40 [i_0] [i_1] [(_Bool)1] [i_8] [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_37 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8])) ? (var_0) : (((/* implicit */unsigned long long int) arr_37 [i_8 - 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8])))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            {
                                arr_45 [i_0] [i_9] [(short)0] [i_9] [(unsigned short)2] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)4822)) : (((/* implicit */int) arr_42 [i_9 + 1]))))) * (3235506319U)));
                                arr_46 [i_10] [i_9] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)57733)) : (-1709293377)))))) ? (((long long int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (signed char)34)) : (-1709293363))))));
                            }
                        } 
                    } 
                    arr_47 [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((((_Bool)1) ? (((((/* implicit */_Bool) (short)16365)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [4U]))))) : (((/* implicit */long long int) min(((-(var_7))), (((unsigned int) arr_10 [i_0] [i_1] [i_2] [(_Bool)1])))))));
                    arr_48 [(short)6] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) > (237427832U))) || (((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_1])))));
                    arr_49 [(unsigned char)3] [i_1] [i_2] = ((/* implicit */unsigned int) arr_42 [i_2]);
                }
                arr_50 [i_0] [i_1] [i_1] = (signed char)-32;
                arr_51 [i_1] = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) var_3)) ? (3745306155130821561LL) : (((/* implicit */long long int) 181235183U)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 3824854922149249915ULL)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned short i_12 = 3; i_12 < 19; i_12 += 1) 
        {
            {
                arr_56 [i_11] [i_12] = ((/* implicit */signed char) (_Bool)0);
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        {
                            arr_65 [i_11] [i_12 - 2] [i_11] [i_14] = ((/* implicit */signed char) min(((-(2483954488U))), (((/* implicit */unsigned int) (_Bool)1))));
                            arr_66 [i_11] [i_12] [14] [14] [10LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) ((arr_4 [4LL] [(unsigned short)14] [i_14]) ? (((/* implicit */int) (short)-16365)) : (((/* implicit */int) var_4)))))))) : ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-17)) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
