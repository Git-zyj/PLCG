/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65930
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned short) (~(min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_6 [i_0])))))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_3 [i_0]);
                    arr_12 [(short)23] [i_1] [i_1] = ((/* implicit */_Bool) ((((arr_5 [i_1 - 1] [i_2 - 2]) && (arr_7 [i_1 - 1] [i_2 + 1]))) ? (((((((/* implicit */int) var_3)) == (arr_3 [i_1]))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) ((signed char) arr_3 [16U]))))) : (min((arr_8 [i_1]), (arr_0 [i_0])))));
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((255ULL), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) && ((((~(var_10))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))))));
                    arr_14 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_1] [i_2 + 1])) : (((/* implicit */int) var_9)))) | (((((/* implicit */_Bool) -1949144987)) ? (((/* implicit */int) (unsigned short)30)) : (-1591076085)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */unsigned long long int) (~(-1949144987)));
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 13; i_5 += 1) 
            {
                {
                    arr_25 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_4]))) : (arr_19 [i_5 - 3])))) ? (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_4 + 4] [i_4 + 4] [i_4 + 4])) > (((/* implicit */int) arr_22 [i_4 + 4] [i_4 + 4] [i_4 + 4]))))))));
                    arr_26 [11ULL] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4 + 2] [i_5 + 2] [i_5 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_23 [i_4 + 2] [i_5 + 2] [i_5 - 3])))) ? (((((/* implicit */int) var_3)) << (((/* implicit */int) arr_24 [i_4 + 2] [i_5 + 2] [i_5 - 3])))) : (((arr_18 [i_4 + 2] [i_5 + 2] [i_5 - 3]) & (arr_18 [i_4 + 2] [i_5 + 2] [i_5 - 3])))));
                    arr_27 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */int) (-((+(((unsigned int) var_2))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
    {
        arr_32 [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (-1591076082))) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))));
        arr_33 [i_6] = ((/* implicit */int) (+(((var_3) ? (arr_4 [0ULL]) : (((/* implicit */unsigned long long int) var_0))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_36 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_6] [i_6]))))) ? ((+(((/* implicit */int) arr_7 [i_6] [i_7 + 1])))) : (((((/* implicit */_Bool) var_8)) ? (arr_3 [i_6]) : (arr_8 [(unsigned char)2])))));
            arr_37 [i_6] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) 
                {
                    arr_48 [i_8] [i_9] = ((/* implicit */unsigned long long int) arr_42 [i_6] [i_6] [i_9]);
                    arr_49 [i_9] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [i_9] [i_9 - 1] [i_10]))));
                }
                for (unsigned int i_11 = 1; i_11 < 14; i_11 += 2) /* same iter space */
                {
                    arr_52 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_41 [i_6])) ? (-1685452377) : (((/* implicit */int) (unsigned short)38183)))) : (((/* implicit */int) arr_50 [i_11 + 1] [i_9 - 1] [i_9]))));
                    arr_53 [i_6] [i_8] [i_9] [i_9] [i_11] [i_8] = ((/* implicit */_Bool) 6179995537912148461ULL);
                    arr_54 [i_8] [i_8] [i_9 - 1] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_11 + 1]) : (arr_9 [i_11])));
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                    {
                        arr_57 [i_6] [i_8] [(unsigned short)12] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) ((unsigned short) -1823974231));
                        arr_58 [i_12] [i_9] [i_6] = ((/* implicit */unsigned long long int) ((signed char) arr_38 [i_11 + 1]));
                    }
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
                    {
                        arr_62 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_61 [i_6] [i_9] [i_6] [i_8] [(unsigned char)12] [i_11 - 1] [i_11 + 1])) ? ((-(1311394170U))) : (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))));
                        arr_63 [i_9] [i_13] [i_6] [i_6] [i_8] [i_6] [i_9] = ((/* implicit */unsigned short) (~(arr_3 [i_11 + 1])));
                    }
                }
                for (unsigned int i_14 = 1; i_14 < 14; i_14 += 2) /* same iter space */
                {
                    arr_67 [i_6] [i_8] [i_8] [i_8] [i_14] = ((/* implicit */unsigned char) arr_65 [i_6] [i_8] [i_9 - 1] [13U] [i_14 + 1]);
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        arr_70 [i_6] [i_8] [i_9] [i_14] [2U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_6] [i_8] [i_9 + 1] [i_14 - 1])) ? (((/* implicit */int) arr_5 [i_15] [i_8])) : (((/* implicit */int) arr_44 [i_15] [13U] [i_8] [i_6]))));
                        arr_71 [i_9] [i_9] [i_9] [i_9] [i_15] = ((/* implicit */long long int) ((arr_18 [i_8] [i_9 + 1] [i_8]) | (arr_18 [i_15] [i_15] [i_15])));
                    }
                    for (long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        arr_74 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [0ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_14 + 1] [i_6])) & ((~(((/* implicit */int) (_Bool)1))))));
                        arr_75 [i_14] [i_9] [i_9] [i_14 + 1] [i_9] = arr_29 [i_6] [i_16];
                    }
                    arr_76 [i_6] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_6] [i_6] [i_9]))) : (arr_23 [9U] [9U] [(unsigned short)8]))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
                }
                arr_77 [i_9] [i_6] [i_9] = ((/* implicit */int) ((arr_7 [i_9] [i_9 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_9 - 1]))) : (var_12)));
            }
            arr_78 [i_6] [i_6] [i_8] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned short)33)))));
        }
        arr_79 [i_6] = ((int) (unsigned char)1);
    }
}
