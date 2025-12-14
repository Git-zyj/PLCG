/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5904
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [(unsigned short)3] [i_1]))) ? (((/* implicit */int) (unsigned char)188)) : ((+((-(((/* implicit */int) arr_2 [i_1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_3] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                                var_11 = ((/* implicit */long long int) min(((signed char)-86), ((signed char)-115)));
                                arr_18 [i_0] [i_3] = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))))), (((unsigned short) var_3)))));
                                arr_19 [i_0 - 1] [(unsigned short)6] [1U] [i_0] [i_3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((long long int) (unsigned char)136)) / (((/* implicit */long long int) ((/* implicit */int) (signed char)104))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)123)), (((unsigned short) arr_14 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [(unsigned short)2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (-9029852957045000313LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
        arr_22 [i_5] = ((/* implicit */_Bool) (signed char)(-127 - 1));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-1729903234) : ((-2147483647 - 1)))))))), (arr_5 [i_5]))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (-(var_1))))) ? (((long long int) var_7)) : (((/* implicit */long long int) (-(((unsigned int) var_6)))))));
                        arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [11U] &= ((/* implicit */long long int) arr_26 [i_6 - 1]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
                    {
                        arr_33 [i_6] [8LL] [i_7] = ((/* implicit */unsigned int) arr_1 [i_5] [11ULL]);
                        var_16 = ((/* implicit */signed char) var_7);
                        var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9])) ? (arr_32 [i_7]) : (((/* implicit */long long int) arr_13 [i_5] [i_5]))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) == (var_7))))))), (((/* implicit */long long int) arr_14 [i_5] [i_5] [i_9] [i_9] [i_6 - 1] [i_5]))));
                        var_18 = ((/* implicit */unsigned short) arr_24 [(_Bool)1] [i_7]);
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (signed char)122))))) > (((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) arr_30 [(unsigned char)1] [i_7 + 1] [i_7 + 2] [i_7] [i_6]))))))));
                            var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (4967694881141443864ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4348))))) > (((((/* implicit */_Bool) max(((unsigned char)9), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))) : (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                        }
                    }
                    var_21 ^= ((/* implicit */short) min((((/* implicit */unsigned int) min(((unsigned short)65519), ((unsigned short)0)))), (((unsigned int) 1862308539))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_40 [i_5] [i_6] [i_12] [(short)8] [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_25 [i_6 + 1] [i_11] [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))))))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122)))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13479049192568107752ULL)) ? (((long long int) 13479049192568107752ULL)) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */long long int) arr_5 [i_7])) : ((-9223372036854775807LL - 1LL))))))) : (min((((/* implicit */unsigned long long int) ((signed char) arr_20 [i_5]))), (((((/* implicit */_Bool) arr_26 [i_12])) ? (((/* implicit */unsigned long long int) arr_25 [i_5] [i_6] [i_7])) : (var_7)))))));
                                var_24 = ((/* implicit */unsigned char) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)245)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_4 [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_4 [i_6 + 1] [i_6 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((short) (signed char)(-127 - 1)));
        arr_44 [i_13] = ((/* implicit */_Bool) ((((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) arr_43 [i_13])) - (25210))))) << (((max((((/* implicit */int) (unsigned short)16778)), (1559836186))) - (1559836186)))));
        arr_45 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_13] [i_13] [i_13] [i_13] [i_13])) || (((/* implicit */_Bool) min((arr_35 [i_13] [i_13] [i_13] [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_43 [i_13])))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            var_26 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)43099)) : (((/* implicit */int) (unsigned char)77))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [3ULL])) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_0))))) : ((-(arr_25 [i_13] [i_13] [i_13]))))));
            var_27 = ((/* implicit */unsigned long long int) (unsigned short)43099);
        }
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            var_28 += ((/* implicit */short) var_4);
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_38 [i_13] [i_15] [i_13] [i_15])))))))) : (min((((/* implicit */long long int) min((arr_28 [i_13] [i_13] [i_13] [i_13] [(short)4]), (arr_43 [i_13])))), (min((((/* implicit */long long int) 372242089)), (var_1)))))));
        }
        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (int i_17 = 3; i_17 < 13; i_17 += 3) 
            {
                for (unsigned short i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) max((arr_40 [i_17] [i_16] [i_17] [i_18] [i_16]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)247)) & (((/* implicit */int) (unsigned short)43099)))))));
                        arr_61 [i_13] [i_13] [(unsigned short)1] [i_18] = ((/* implicit */long long int) var_5);
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) 13479049192568107752ULL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_32 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [i_17 + 1])) : (((/* implicit */int) arr_21 [i_17 - 1])))), (((int) ((((/* implicit */_Bool) 6601220877320874982ULL)) ? (500817015832688770LL) : (((/* implicit */long long int) (-2147483647 - 1))))))));
                    }
                } 
            } 
            arr_62 [i_13] = ((/* implicit */int) arr_21 [i_13]);
            var_33 = ((/* implicit */_Bool) min((((/* implicit */short) var_0)), (arr_6 [i_13] [0ULL])));
            var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [6LL] [(unsigned short)4] [(short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((-(min((((/* implicit */unsigned long long int) arr_11 [i_13] [i_13] [i_13])), (arr_8 [10U] [i_13] [i_16])))))));
        }
    }
}
