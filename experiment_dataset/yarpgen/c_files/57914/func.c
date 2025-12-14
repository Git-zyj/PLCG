/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57914
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
    var_19 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
                        {
                            arr_15 [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_0 - 3] [i_1] [6] [i_0 - 2] [i_0 - 2])) >> (((var_5) - (1619050414U))))) >> ((((~(((/* implicit */int) (signed char)-51)))) - (32)))));
                            arr_16 [i_4] [i_1] [i_2] [i_0 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3 - 1] [i_2 - 2] [i_1 + 2])) >> (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2509310134U)))))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_12 [i_1 + 2] [i_1] [i_1] [i_4] [i_1 + 2] [i_4] [i_4 + 1]))));
                            arr_17 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_3))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4 - 1])))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) var_14);
                            var_22 ^= ((/* implicit */unsigned short) var_1);
                            var_23 = ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 + 1]));
                            var_24 *= ((/* implicit */short) (-(((/* implicit */int) var_4))));
                        }
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_3] [i_0] [i_1] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_8)))))));
                        arr_20 [i_0] [i_0] [i_0 - 1] [(unsigned short)2] [4LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 775834677)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-78))))) + (var_5)));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            var_26 = ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))));
                            var_27 += ((var_9) ^ (((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1 - 1] [i_2 - 4] [i_3 - 1] [i_3 + 1] [i_6 - 2] [i_6 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 + 1] [i_0 + 1] [0ULL] [i_0] [i_6 - 3] [i_6]))) : (((((/* implicit */_Bool) arr_8 [8U] [i_3 - 1])) ? (arr_4 [i_2] [(unsigned short)12]) : (((/* implicit */unsigned int) var_17)))))));
                            var_28 = ((/* implicit */unsigned long long int) var_0);
                            arr_25 [i_0] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_2] [i_1 + 2] [i_1] [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [(unsigned short)13] [(_Bool)1] [(signed char)3] [i_1 + 1] [i_1] [i_1]))))) == (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_6] [(short)11] [i_6] [i_2] [i_1 + 2] [i_0] [i_0])))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */short) var_15);
                            var_30 = ((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_3 + 1] [11ULL] [i_7]);
                        }
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_32 [i_8] = ((/* implicit */unsigned short) arr_0 [i_0 - 2]);
                            arr_33 [i_3] [i_1] [i_8] [(unsigned short)9] [i_1] [8] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [(unsigned short)6]))))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) arr_0 [i_1]))));
                            var_32 -= ((/* implicit */unsigned short) var_4);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_9 = 1; i_9 < 13; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            arr_44 [i_10] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)45128))));
                            arr_45 [i_0 - 1] [i_0 - 1] [i_10] [i_11] [i_10] = ((/* implicit */short) var_16);
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), ((-(((var_12) + (((/* implicit */unsigned long long int) var_3))))))));
                        }
                    } 
                } 
                var_34 -= ((/* implicit */signed char) arr_43 [i_0] [i_0 + 1] [i_0 - 1] [i_9] [i_9 - 1] [i_0 - 1]);
            }
            arr_46 [8ULL] [i_9] [8ULL] = ((/* implicit */signed char) var_9);
            var_35 -= (-(2717237053U));
        }
        for (short i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            arr_49 [i_13] [i_0] [i_13] = ((/* implicit */long long int) ((arr_38 [i_13] [i_0] [i_0]) != ((+(2717237053U)))));
            /* LoopNest 3 */
            for (unsigned short i_14 = 2; i_14 < 12; i_14 += 1) 
            {
                for (int i_15 = 2; i_15 < 11; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */int) arr_6 [i_0] [1LL] [i_15]);
                            var_37 |= arr_3 [i_13];
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 3; i_17 < 12; i_17 += 3) 
            {
                var_38 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_52 [i_0 - 1] [4] [i_17 - 3] [i_0]))));
                var_39 = var_1;
                /* LoopNest 2 */
                for (long long int i_18 = 1; i_18 < 11; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 15; i_19 += 4) 
                    {
                        {
                            var_40 -= ((/* implicit */_Bool) arr_57 [i_0] [i_13]);
                            var_41 *= ((/* implicit */_Bool) var_18);
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) arr_61 [8] [i_17] [i_19] [i_19]))));
                            arr_68 [i_17] [i_13] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0])) == (((((/* implicit */_Bool) arr_19 [i_0 - 3] [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0])) ? (((/* implicit */int) arr_19 [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0]))))));
                            arr_69 [i_0] [i_13] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                var_43 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_13] [2LL] [i_0] [i_0] [i_13])) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) arr_31 [i_17] [i_17] [i_17] [i_0] [i_0] [i_0 - 1] [i_17]))))));
            }
        }
    }
    for (signed char i_20 = 0; i_20 < 17; i_20 += 2) 
    {
        var_44 = ((/* implicit */_Bool) arr_70 [i_20]);
        arr_74 [i_20] [i_20] = ((/* implicit */_Bool) var_13);
    }
    var_45 = ((/* implicit */int) var_9);
    var_46 = ((/* implicit */int) var_15);
}
