/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65072
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [14] &= ((/* implicit */_Bool) ((((var_11) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3430))) : (var_8)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_7 [12LL] [(unsigned short)0] [(unsigned short)0] = var_0;
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((~(15887874991746848916ULL))) : (((/* implicit */unsigned long long int) var_6))));
                    arr_9 [(short)4] [i_1] [i_0] [(short)4] &= ((/* implicit */unsigned long long int) var_7);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] = ((unsigned long long int) arr_5 [i_3 + 1] [i_3 + 4] [i_0]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = ((short) (unsigned short)62138);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 1431717667748067133ULL)) ? (299487604903763585ULL) : (((/* implicit */unsigned long long int) 2680338086U)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_0] [i_1] [i_0] [i_0])) ? (var_1) : (((/* implicit */int) (signed char)-104)))))));
                                arr_21 [i_0] [i_1] [i_0] [i_0] [i_6] [i_2] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)18271)) : (((/* implicit */int) var_0)))) <= (((((/* implicit */int) (signed char)4)) % (arr_10 [i_0] [i_1] [i_2] [i_5])))));
                                arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] [8] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_5] [i_6])) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [14ULL] [i_1]))) : ((~(arr_6 [4] [i_1] [4])))));
                                arr_23 [i_0] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (+(-377335464)));
                                arr_24 [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_10 [i_0] [i_2] [i_5] [i_6]) : (((/* implicit */int) arr_11 [i_6] [i_0] [i_0] [i_1]))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (131071U)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    arr_27 [6ULL] [(signed char)0] [(signed char)0] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_1 [i_7]) : (((/* implicit */int) arr_16 [i_0] [i_0])))) : (((/* implicit */int) (short)-1)));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 2) 
                        {
                            arr_33 [i_8] [i_9] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)122)) : (arr_13 [i_7] [i_7] [i_9 + 2] [i_9] [i_7])));
                            arr_34 [i_0] [i_1] [i_0] [i_7] [i_8] [i_9] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) 1948786627)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14657))) : (131084U)));
                        }
                        arr_35 [i_0] [i_1] [i_0] [i_1] = (short)0;
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 3; i_10 < 20; i_10 += 3) 
                        {
                            arr_39 [i_8] [i_1] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_0] [i_10 - 2] [i_10 - 2] [i_10 - 3] [i_10]))));
                            arr_40 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_19 [i_8] [i_1] [i_0] [i_8] [i_10])) : (((/* implicit */int) arr_3 [i_8] [i_8] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_11)))) : (((((/* implicit */_Bool) arr_31 [i_10] [i_8] [i_7] [i_1] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        }
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            arr_47 [i_0] [i_1] [i_7] [i_0] [i_11 + 2] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((377335464) - (377335433)))));
                            arr_48 [8] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_11 - 1] [i_11] [i_11 + 1] [i_11 - 1] [i_11 + 3] [i_11 - 1])) << (((((/* implicit */int) arr_30 [i_0] [i_11] [i_7] [i_11 + 1] [i_12])) + (114)))));
                            arr_49 [(short)0] [(short)0] [(short)0] [i_11 - 1] [i_11] [i_11] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12818399250414808968ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_11 - 1])) : (((/* implicit */int) arr_0 [i_0] [i_11 - 1]))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_41 [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_7] [i_7] [i_7]))));
                            arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (var_11) : (var_11)));
                            arr_55 [i_0] [i_0] [i_7] [i_11 + 3] [i_13] [i_11 + 1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [i_11 + 1] [i_0] [i_11 + 3] [i_11 + 1] [i_11 - 1] [i_11 + 2])) != (((/* implicit */int) ((((/* implicit */int) (signed char)-92)) <= (((/* implicit */int) (unsigned char)17)))))));
                        }
                        arr_56 [i_0] [i_1] [i_7] [i_11 + 2] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-1151))));
                        arr_57 [i_0] [i_0] [i_7] [i_11] = ((/* implicit */unsigned short) (~((-(arr_25 [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
                arr_58 [i_0] [i_1] [i_1] = ((/* implicit */short) ((int) (~(arr_36 [i_0] [(signed char)2] [i_0] [i_0] [i_0] [i_0]))));
                arr_59 [i_0] [8LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [6ULL] [i_0]))))) ? (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0])) + (((/* implicit */int) arr_31 [i_0] [i_1] [i_0] [i_0] [i_1])))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_0))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) max(((unsigned short)16384), (((/* implicit */unsigned short) (signed char)-31)))))))));
    var_14 = var_10;
    var_15 = ((/* implicit */signed char) var_8);
    var_16 |= ((/* implicit */short) min((var_8), (((/* implicit */long long int) var_5))));
}
