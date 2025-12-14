/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96284
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_7)) ? (3939942606U) : (3939942606U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 2]))))), (((355024699U) - (3939942574U)))));
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) arr_2 [i_0 + 1]);
                    /* LoopSeq 4 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        var_13 += ((/* implicit */unsigned short) arr_7 [i_3] [i_0] [i_0]);
                        arr_11 [i_0 - 1] [i_0 - 3] [i_0] [(unsigned short)7] = arr_9 [i_0] [5LL] [i_0];
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((3939942577U) << (((355024695U) - (355024665U)))))), (((((/* implicit */_Bool) 355024695U)) ? (((/* implicit */long long int) 3939942596U)) : (var_3)))))) ? (((((/* implicit */long long int) 355024695U)) / (var_10))) : (((((arr_15 [i_4] [2U] [2U]) > (((/* implicit */long long int) 355024720U)))) ? (((/* implicit */long long int) arr_3 [i_1 - 2] [i_3 - 1])) : (((arr_5 [0U]) ^ (((/* implicit */long long int) 355024708U))))))));
                            arr_16 [i_2] [8ULL] [i_2] [i_1] [8ULL] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_12 [i_0] [i_1] [i_1 - 4] [i_1 - 4] [i_1] [i_1 - 4])))) * ((~(((/* implicit */int) var_5))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 3939942610U)) : (arr_15 [i_3 - 1] [i_1 + 3] [i_0 - 3]))))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (355024730U)));
                        }
                    }
                    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 2) /* same iter space */
                    {
                        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) 355024704U))))) ? (((((/* implicit */_Bool) arr_4 [i_6] [i_1] [i_0 - 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_12 [i_6 - 1] [i_1] [i_6] [i_6 - 1] [i_6 - 1] [i_1])), (355024699U))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) * (((((/* implicit */_Bool) 355024715U)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_1 [i_0 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))))));
                        arr_22 [i_6] [i_6 - 2] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */long long int) 355024690U)), ((~(((((/* implicit */_Bool) var_8)) ? (arr_9 [i_0] [i_1 - 2] [i_2]) : (((/* implicit */long long int) 3939942604U))))))));
                        var_18 = ((((3939942596U) == (max((3939942594U), (3939942594U))))) ? (((/* implicit */long long int) 355024689U)) : (var_7));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-((-(((var_2) | (arr_21 [i_0]))))))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 355024701U)) ? (355024704U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_0 + 1] [i_1 - 2] [i_7 - 2] [i_7])))))));
                        arr_25 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(3939942618U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(unsigned char)8] [i_7 + 1] [3ULL] [i_7 + 1] [i_1 - 4] [i_0 + 1]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_3 [i_2] [i_0])) : (3939942587U)))))) & (arr_10 [i_7 - 1] [i_2] [i_1 + 1] [i_0 - 1])));
                        arr_26 [i_0 - 3] [i_0 - 3] = ((/* implicit */_Bool) arr_5 [i_0 - 2]);
                        arr_27 [i_7] [i_2] [i_1 - 2] = ((/* implicit */long long int) 3939942593U);
                    }
                    for (signed char i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 3; i_9 < 11; i_9 += 3) 
                        {
                            var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1 - 3] [i_2] [i_8] [i_8] [i_9 - 1])) ? (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_9] [i_0]) : (((/* implicit */int) arr_30 [i_2] [i_1 - 1])))) : (((/* implicit */int) var_11))))) ? ((-(arr_17 [i_8] [i_1 + 3] [i_2] [i_8] [i_9] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [i_1 + 3] [i_8 - 1] [i_1 + 3] [i_8 + 1] [i_9 - 1] [i_9 - 1]) >= (((/* implicit */long long int) ((355024701U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))))));
                            arr_32 [i_9 - 3] [i_1] [(signed char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_14 [i_0] [i_1 + 1] [2LL] [i_8] [i_1 + 1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */long long int) arr_21 [i_9 - 3])) : (((((/* implicit */_Bool) arr_7 [8U] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [6U] [(signed char)3] [i_8 + 1] [(unsigned char)12]))) : (var_7)))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((long long int) ((355024699U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2])))))))));
                            arr_33 [i_1] [i_1 - 2] [i_1] [i_1] [i_9] = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_2] [i_2] [i_8 + 3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8] [i_8 + 2] [i_8] [1]))) : (3939942598U))), (355024701U)))));
                        }
                        var_23 = 355024688U;
                    }
                    /* LoopSeq 4 */
                    for (signed char i_10 = 1; i_10 < 9; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */int) max((((/* implicit */long long int) ((arr_18 [i_1]) ? (((/* implicit */int) arr_31 [i_0] [i_1] [i_2] [i_10 + 2])) : (((/* implicit */int) var_6))))), (((arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]) ^ (((/* implicit */long long int) var_2))))));
                        var_25 = ((/* implicit */long long int) ((3939942607U) > (355024714U)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
                    {
                        var_26 = min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1])))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])));
                        arr_38 [i_2] [i_0] = (+(min((min((((/* implicit */long long int) 3939942606U)), (arr_15 [i_2] [i_1] [i_0 + 1]))), (((/* implicit */long long int) ((unsigned int) arr_23 [i_0] [i_0] [i_1 + 1] [i_1] [i_2] [i_0]))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) max((var_3), (((/* implicit */long long int) 3939942587U)))))), (((unsigned int) ((355024659U) & (355024688U))))));
                        arr_43 [i_1] = (-(((long long int) arr_36 [i_1 + 3] [i_0 + 1] [4LL] [4LL] [i_0] [i_0 - 2])));
                    }
                    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_2] = ((/* implicit */unsigned long long int) var_6);
                        var_27 = ((/* implicit */short) arr_3 [i_1 - 3] [i_0 - 2]);
                        var_28 -= ((/* implicit */unsigned short) arr_41 [i_2]);
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))) - (((355024659U) - (3939942606U)))))))));
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 10; i_14 += 2) 
        {
            for (unsigned short i_15 = 1; i_15 < 10; i_15 += 2) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((signed char) var_4));
                    arr_53 [i_0] [i_15] [i_15 + 2] = ((/* implicit */_Bool) (-((-(355024695U)))));
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (355024659U)))), (min((arr_28 [i_0] [i_14] [i_0] [i_0]), (arr_5 [i_14]))))) != (var_10))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 17; i_16 += 1) 
    {
        var_32 *= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_54 [i_16]))));
        /* LoopNest 2 */
        for (short i_17 = 2; i_17 < 19; i_17 += 2) 
        {
            for (unsigned int i_18 = 1; i_18 < 18; i_18 += 2) 
            {
                {
                    arr_61 [i_16] [(unsigned short)19] [(unsigned short)19] [i_16] = ((/* implicit */unsigned int) arr_55 [i_16] [i_17]);
                    arr_62 [i_16] [7LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_17])) ? (var_0) : (((/* implicit */long long int) arr_57 [i_18] [i_17 + 1]))))) ? (((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_54 [i_18])) + (81))))) : (((((/* implicit */int) var_8)) + (arr_57 [i_18] [i_17])))));
                    arr_63 [i_16] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned int) arr_57 [i_16] [i_16 - 1])) : (3939942600U)));
                    var_33 = ((/* implicit */_Bool) var_5);
                }
            } 
        } 
        var_34 = arr_55 [i_16 + 4] [i_16 + 4];
    }
    for (long long int i_19 = 1; i_19 < 12; i_19 += 1) 
    {
        var_35 = ((/* implicit */unsigned int) min((var_35), (((((/* implicit */_Bool) 3939942600U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((3939942618U) - (355024690U)))) && (((/* implicit */_Bool) arr_57 [i_19] [i_19])))))) : (min((3939942576U), (((3939942622U) | (3939942594U)))))))));
        arr_67 [i_19] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) (+(3939942594U)))) : (((/* implicit */unsigned int) arr_57 [i_19 + 3] [i_19]))));
        var_36 = ((/* implicit */unsigned short) var_2);
        arr_68 [i_19 + 1] [i_19] = ((/* implicit */signed char) var_1);
    }
    var_37 = ((/* implicit */_Bool) var_11);
}
