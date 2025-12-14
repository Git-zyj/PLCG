/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62073
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) var_7);
                                var_20 = ((/* implicit */short) ((unsigned short) 4294967295U));
                                var_21 = ((/* implicit */unsigned int) arr_8 [i_0] [(unsigned char)9] [i_0]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)14897)) : (((/* implicit */int) arr_0 [i_1 - 1])))))), (((/* implicit */int) var_18))));
                    var_22 ^= ((/* implicit */unsigned char) arr_4 [i_2] [(signed char)6] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)14900)) <= (((/* implicit */int) var_11))))) + ((~(((/* implicit */int) (short)14912))))))) ? (((/* implicit */int) var_19)) : (((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((((/* implicit */_Bool) (short)-14915)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18))))))));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (short)14909)) ? (((/* implicit */unsigned long long int) var_5)) : (549751619584ULL)))))) ? (arr_10 [i_0] [i_5 - 1] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_6] [i_2 + 1] [(unsigned short)15] [i_5 + 1])))))))));
                                arr_24 [i_6] [i_1] [i_2] [i_1] [19] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) arr_3 [i_6] [i_5 - 1] [i_1 + 1])) : (((/* implicit */int) (short)14882))))));
                                arr_25 [i_0] [i_0] [i_2] [i_5 + 1] [i_6] = ((/* implicit */unsigned char) var_12);
                            }
                        } 
                    } 
                }
                for (short i_7 = 1; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) (signed char)-24)) ? (478410740U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) var_12)))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                arr_32 [i_0] [10LL] [i_0] [i_0] [10LL] [i_8] [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14930)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237)))))) ? (((/* implicit */int) min((var_14), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (short)-14934))))));
                                arr_33 [i_1] [(short)12] [i_8] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) <= (1562375830U)));
                                var_26 -= ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                    arr_34 [i_7 - 1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */int) max(((short)14919), (((/* implicit */short) arr_21 [i_0] [i_0] [i_7] [i_7] [i_0] [i_1]))))), (2147483642)))), (((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_1 - 2])) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (~(var_5))))))));
                }
                for (short i_10 = 1; i_10 < 22; i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 2; i_12 < 21; i_12 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_11] [i_0]);
                                var_28 += ((/* implicit */signed char) ((max(((-(((/* implicit */int) (signed char)-32)))), (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_13))))))) != (2147483642)));
                                arr_45 [(unsigned char)2] = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) var_10)) <= (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_10] [i_11] [i_12 - 1])) ? (14611200188973563400ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) var_9);
                    arr_46 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))));
                }
                arr_47 [i_0] [i_0] [18ULL] = ((/* implicit */unsigned int) var_9);
                arr_48 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)14905)) ? (min((arr_31 [1ULL] [1ULL] [i_1] [1ULL] [i_1 + 1]), (((/* implicit */unsigned int) var_10)))) : (min((arr_31 [12LL] [i_1] [i_1] [i_1] [i_1 + 1]), (arr_31 [i_1] [i_1 - 3] [(signed char)16] [i_1 - 3] [i_1 + 1])))));
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 20; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 22; i_15 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */int) ((((/* implicit */int) max((arr_49 [i_0] [i_1] [i_13]), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)7)))))))) < (((/* implicit */int) min((((unsigned short) var_18)), (((/* implicit */unsigned short) (short)14902)))))));
                                var_31 = ((/* implicit */long long int) ((arr_4 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)7007)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_14] [i_15])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) min((var_14), (var_15)));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 19; i_16 += 2) 
    {
        for (unsigned char i_17 = 3; i_17 < 17; i_17 += 2) 
        {
            {
                arr_61 [i_16] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) -3737018278834874369LL)) : (arr_60 [i_16] [i_17]))));
                arr_62 [i_16] = ((/* implicit */unsigned int) arr_3 [i_17 - 1] [i_17] [i_17 - 1]);
                arr_63 [i_16] [i_16] = var_12;
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 3; i_18 < 15; i_18 += 4) 
                {
                    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 1) 
                    {
                        {
                            arr_68 [i_16] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) : (-834306486767212081LL)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_41 [i_18] [i_17])) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_4)))) <= (((/* implicit */int) var_1)))))));
                            var_33 = ((/* implicit */short) max((var_33), ((short)6)));
                            arr_69 [i_16] [i_16] [i_16] [(unsigned char)12] = ((/* implicit */short) min((((unsigned long long int) min((((/* implicit */unsigned int) var_15)), (var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29710)) < (((/* implicit */int) ((unsigned char) var_13))))))));
                            var_34 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) max(((unsigned short)65518), (((/* implicit */unsigned short) var_12)))))))) ? (4584221456749034761LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
