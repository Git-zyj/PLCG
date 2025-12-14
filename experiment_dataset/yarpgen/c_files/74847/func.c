/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74847
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
    var_15 *= ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4 - 2]))))) : (((arr_9 [i_4] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_3] [i_2])))))));
                                var_16 -= ((/* implicit */unsigned char) arr_10 [i_4 + 1] [(short)4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [(short)4]);
                                var_17 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_10 [i_0] [i_2] [i_4] [i_3] [i_4] [i_3]))), (((/* implicit */unsigned long long int) ((unsigned int) min(((unsigned char)3), ((unsigned char)107)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((short) arr_3 [i_2]));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned short)21))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2] [(unsigned short)5]))));
                                arr_20 [i_0] [8U] [i_2] [8U] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 1])) & (((/* implicit */int) arr_12 [i_0 - 1] [i_2] [i_2] [i_5 + 2] [i_5 - 2])))))));
                                arr_21 [i_5] [i_5] [i_2] [i_5] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_5 - 1] [i_5] [i_5] [i_5])) - (((/* implicit */int) min((arr_19 [i_5 + 1] [i_5] [i_5] [(unsigned short)2]), (arr_19 [i_5 + 2] [i_5] [i_5 - 1] [i_5 + 2]))))));
                                arr_22 [i_0] [i_0] [i_2] [i_2] [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) (unsigned short)28672)) << (0ULL))) > (((((/* implicit */int) (unsigned char)15)) << (((((/* implicit */int) var_10)) + (135)))))))) - (((/* implicit */int) (unsigned char)10))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        for (long long int i_8 = 4; i_8 < 13; i_8 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 3) 
                        {
                            {
                                arr_35 [i_9] [i_10] [i_8] [i_8] [i_8] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((1786919087U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_9])))))), (arr_30 [i_9] [i_9] [i_9]))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_25 [i_8 - 2]), (((/* implicit */unsigned char) arr_33 [i_8 - 3] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_11 + 3]))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 0ULL))) || (((/* implicit */_Bool) (unsigned short)32179)))))));
                                arr_36 [i_7] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((3ULL) << (((((/* implicit */int) (unsigned short)34713)) - (34680))))) : (((/* implicit */unsigned long long int) var_11))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_9 - 1]))));
                    arr_37 [i_7] [i_7] [i_9 + 1] [i_9] = ((/* implicit */unsigned long long int) ((unsigned short) min((arr_30 [i_9] [i_9 + 2] [(short)14]), (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_8 - 1] [i_8 - 1] [i_7])) != (((/* implicit */int) arr_33 [i_7] [i_7] [i_8] [i_9 + 1] [i_9 + 1]))))))));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_23 = ((/* implicit */int) arr_24 [i_12]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        for (long long int i_14 = 1; i_14 < 15; i_14 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((((/* implicit */int) arr_42 [i_14 - 1] [i_8 + 1] [i_8] [i_8 - 4] [i_8])) + (2147483647))) << (((((((/* implicit */int) arr_42 [i_14 + 1] [i_8 + 2] [i_8] [i_8 - 2] [i_7])) + (11422))) - (6)))));
                                arr_46 [i_7] [i_7] [i_12] [i_13] [i_13] [i_14] = ((/* implicit */long long int) arr_44 [i_7] [i_8] [i_12] [i_13] [i_7]);
                                arr_47 [i_14] = ((unsigned long long int) arr_44 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14]);
                                arr_48 [i_7] [i_8 + 1] [(unsigned short)1] [i_13] [i_13] = ((/* implicit */unsigned short) arr_26 [i_7]);
                                arr_49 [i_14] [i_8] [i_8] [i_12] [i_8] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_14] [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_8 + 2])) && (((/* implicit */_Bool) arr_44 [i_14] [i_14 - 1] [i_14 + 1] [i_8 - 3] [i_8 - 4]))));
                            }
                        } 
                    } 
                    arr_50 [i_7] [i_7] [i_7] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_32 [(_Bool)1] [(_Bool)1] [i_8 - 2] [i_12])) : (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 1; i_15 < 15; i_15 += 3) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */signed char) var_3);
                                arr_57 [i_15] = ((/* implicit */long long int) ((9550520554741772777ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_30 [i_8] [i_8] [i_8]))));
                                var_27 *= ((/* implicit */unsigned short) var_14);
                            }
                        } 
                    } 
                }
                arr_58 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) 4294967294U))))) << (((((((/* implicit */_Bool) 8743881312664149812ULL)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (_Bool)1)))) - (176))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1))))) & (var_8)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (min((((/* implicit */unsigned int) var_1)), (var_11)))))) : (((((/* implicit */int) (_Bool)1)) << (((18446744073709551607ULL) - (18446744073709551606ULL)))))));
}
