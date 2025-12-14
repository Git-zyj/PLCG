/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68237
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */int) var_4);
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((arr_0 [i_2]) - (arr_0 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_4] &= ((int) arr_3 [i_2]);
                                var_12 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1] [i_3 + 1]))));
                                arr_15 [i_4] [i_4] [i_3 - 1] [i_2] [i_1] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_3 + 2] [i_2])) ? ((-(arr_4 [i_0]))) : ((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3 + 2] [i_4]))))));
                                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_0] [i_1] [9] [i_0] [i_0])) & (((/* implicit */int) arr_13 [i_0] [i_2] [i_2] [4ULL] [i_0]))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    arr_20 [i_0] [2U] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 9; i_7 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) arr_0 [i_0]);
                                arr_26 [i_0] [(unsigned char)6] [i_5] [i_6] [(unsigned short)2] |= ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 7; i_9 += 1) 
                        {
                            {
                                arr_32 [i_8] [i_8] [i_8] [i_8 - 1] [i_8] = (i_8 % 2 == zero) ? (((/* implicit */short) ((((arr_0 [i_0]) + (2147483647))) << (((((/* implicit */int) arr_31 [3] [i_8] [i_5] [3] [3] [i_8 - 1])) - (124)))))) : (((/* implicit */short) ((((arr_0 [i_0]) + (2147483647))) << (((((((((/* implicit */int) arr_31 [3] [i_8] [i_5] [3] [3] [i_8 - 1])) - (124))) + (93))) - (28))))));
                                arr_33 [i_0] [i_1] [i_5] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */long long int) 1277991508U)) & (arr_7 [i_5] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
                                arr_39 [i_5] [6U] = ((/* implicit */unsigned char) arr_8 [i_10 - 1] [i_10 + 1] [i_10 + 1]);
                                arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (arr_25 [i_10 - 1]));
                            }
                        } 
                    } 
                }
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) -1127303549)) : (1648756268U)))) ? (((arr_3 [i_0]) ? (arr_2 [i_1] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_0] [i_12] [(unsigned char)8]))))) : (((/* implicit */unsigned long long int) 0U))));
                    var_16 = ((int) ((14855677846592072927ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_1] [i_0])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (arr_19 [i_12] [i_13])));
                        arr_48 [i_0] [i_0] [i_12] [i_12] [7ULL] = ((/* implicit */long long int) ((_Bool) (unsigned short)52838));
                    }
                    for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        var_17 = ((/* implicit */int) max((((unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_12]))));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) (short)-23315)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17572))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))))))));
                        arr_51 [i_0] [i_1] [i_12] [i_12] = ((/* implicit */long long int) (_Bool)1);
                    }
                }
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        for (short i_17 = 3; i_17 < 6; i_17 += 4) 
                        {
                            {
                                arr_61 [1U] [1U] [i_15] [i_16] [i_17] = ((/* implicit */unsigned long long int) (!(var_9)));
                                arr_62 [i_17] [(_Bool)1] [i_15] [(_Bool)1] [i_17 - 3] [i_17 - 3] [i_16] = var_7;
                            }
                        } 
                    } 
                    arr_63 [i_15] = ((/* implicit */unsigned int) ((arr_42 [i_1] [i_1] [i_1]) && (((/* implicit */_Bool) var_3))));
                }
                arr_64 [8LL] [8LL] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_0]))))) ^ (-1608248494)))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(arr_36 [(_Bool)1] [i_0] [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_18 = 1; i_18 < 15; i_18 += 4) 
    {
        for (signed char i_19 = 0; i_19 < 16; i_19 += 3) 
        {
            {
                arr_69 [i_18 - 1] [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (((1648756284U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_18] [(unsigned short)10])))))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1648756257U)) ? (min((((/* implicit */int) var_9)), (var_3))) : (((/* implicit */int) arr_68 [i_18] [i_19] [i_18])))))));
                arr_70 [i_18 - 1] [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))) < (13933063283269081843ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [15] [(unsigned short)14]))) ^ (var_4)))))))) : ((~(1224978254U)))));
                arr_71 [9] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_66 [i_18 + 1] [i_18 + 1])) && (((/* implicit */_Bool) ((int) arr_66 [i_18 - 1] [i_18 + 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7)))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_5))));
}
