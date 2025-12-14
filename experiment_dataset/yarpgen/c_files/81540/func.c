/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81540
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
    var_10 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) var_9)), (3621635528U))) : (((/* implicit */unsigned int) var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_11 = min((var_6), (((/* implicit */int) var_5)));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) var_3);
                        arr_11 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_6 [i_2])))) & (((/* implicit */int) var_7))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) (signed char)-125);
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((673331768U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196)))))) ? (((673331768U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        }
                        for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            arr_18 [i_2] [i_2] = min((((/* implicit */unsigned long long int) arr_13 [i_2] [i_2])), (((((/* implicit */unsigned long long int) var_6)) * (max((((/* implicit */unsigned long long int) arr_2 [i_5])), (70368744177663ULL))))));
                            var_15 -= ((/* implicit */short) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (+(var_8))))))))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned short) arr_5 [i_5]))), (min((arr_5 [i_0]), (arr_5 [i_0]))))))));
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 673331758U))))) ? (min((arr_4 [i_6] [i_2] [i_0]), (arr_4 [i_1] [i_1] [i_0]))) : (min((arr_4 [i_6] [i_2] [i_1]), (var_4))))))));
                        arr_22 [i_2] = ((/* implicit */_Bool) var_3);
                    }
                    for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_18 -= ((/* implicit */short) arr_7 [i_1]);
                        arr_25 [i_2] [i_2] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_15 [i_7] [i_2] [i_2] [i_2] [i_0])) && (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3)))))));
                        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7547)) ? (max((((/* implicit */unsigned int) (short)-4056)), (33554431U))) : (((/* implicit */unsigned int) ((arr_24 [i_0] [i_0]) / (var_6))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((unsigned char) var_3));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)65535))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_2] [i_1] [i_0] [i_0])))))));
                        arr_28 [12ULL] [i_2] [i_2] [i_0] = ((unsigned long long int) var_2);
                    }
                }
                for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_8)))));
                            var_24 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_10]))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) % (108298788U)));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((unsigned int) var_3)))));
                            arr_39 [i_12] [i_10] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_5);
                            var_27 = ((/* implicit */short) (unsigned short)6349);
                        }
                    }
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        arr_43 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1])), (var_9)))), ((-(((/* implicit */int) arr_0 [i_9]))))));
                        var_28 -= ((/* implicit */unsigned long long int) (+(min((arr_3 [i_13] [(short)21] [(short)21]), (((/* implicit */long long int) 3043956992U))))));
                        arr_44 [i_13] [i_13] [i_0] [i_0] [23ULL] [i_0] = ((short) min((arr_34 [i_13] [i_9] [i_9] [i_1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_1))));
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_3))));
                            arr_47 [i_14] [i_13] [i_9] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
                            var_30 = ((/* implicit */int) max((((/* implicit */unsigned short) (short)32765)), (min((arr_34 [i_9] [i_14] [i_13] [i_9] [i_9] [i_1] [i_0]), (((/* implicit */unsigned short) var_2))))));
                            var_31 = ((/* implicit */signed char) min((arr_1 [i_14] [i_0]), (((/* implicit */short) arr_27 [i_1] [i_13] [i_9] [i_9] [i_1] [i_0]))));
                            var_32 -= ((/* implicit */_Bool) min((((/* implicit */long long int) 108298774U)), (arr_5 [i_14])));
                        }
                        for (short i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            arr_50 [i_15] [2U] [i_9] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-4056)), (499681747786198098ULL)));
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) min((108298800U), (((/* implicit */unsigned int) ((min((arr_42 [14LL] [i_9]), (17402073891936490109ULL))) != (18446673704965373957ULL)))))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) min((((/* implicit */int) arr_46 [i_13] [(unsigned char)20] [i_0] [i_0])), (-1184627565)))) ? (((/* implicit */int) (unsigned short)55700)) : (((/* implicit */int) arr_17 [i_16] [i_16] [i_0] [i_0] [i_0] [i_0])))))))));
                            var_35 = ((/* implicit */int) (short)-32765);
                            arr_53 [i_16] [i_13] [i_16] [i_1] [i_16] [i_0] [i_0] = (!(((/* implicit */_Bool) 108298800U)));
                            arr_54 [i_16] [i_16] [i_16] [i_16] [i_1] [i_0] = var_2;
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (((((+(arr_38 [i_0] [i_13] [i_9] [i_9] [i_1] [i_0]))) + (9223372036854775807LL))) << (((((/* implicit */int) min(((unsigned short)9835), ((unsigned short)19066)))) - (9835))))))));
                        }
                        var_37 = ((/* implicit */unsigned long long int) (unsigned short)55680);
                    }
                    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        var_38 = ((/* implicit */_Bool) max((var_38), (((((/* implicit */int) var_1)) < (arr_15 [i_0] [i_17] [i_9] [i_17] [i_0])))));
                        arr_57 [i_17] [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55687))) >= (0LL)))) >= (((/* implicit */int) min((((signed char) (unsigned char)7)), (arr_9 [i_17] [i_9] [i_9] [i_0]))))));
                        var_39 = ((/* implicit */unsigned long long int) var_1);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */long long int) var_6);
                                var_41 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_23 [i_18] [i_18] [(unsigned char)0] [i_0] [i_0] [i_18])) ? (((/* implicit */int) arr_34 [i_19] [i_19] [i_9] [i_18] [i_9] [i_0] [i_0])) : (var_6))), (((((/* implicit */int) arr_8 [i_18] [i_18] [i_18])) ^ (((/* implicit */int) var_7))))));
                                var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (signed char)1))));
                            }
                        } 
                    } 
                    var_43 |= ((/* implicit */_Bool) -22LL);
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_9] [i_0] [i_0] [10])), (((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) arr_4 [i_9] [i_1] [i_0])))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 2) 
                    {
                        {
                            var_45 = ((/* implicit */int) min((var_4), (((/* implicit */unsigned long long int) max((1251010303U), (((/* implicit */unsigned int) (unsigned short)60769)))))));
                            var_46 = ((/* implicit */_Bool) min((var_46), (((((/* implicit */_Bool) (short)32765)) && (((/* implicit */_Bool) (unsigned short)60769))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
