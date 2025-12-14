/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85027
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
    var_11 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (var_5) : (var_10)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_2 - 1] [i_0]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2 + 2] [i_3 + 2] [i_4])))))) && (((((/* implicit */_Bool) var_1)) && (var_8)))));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) min((arr_4 [i_1] [i_0] [i_4]), (((/* implicit */unsigned char) var_7))))) : ((-(max((var_10), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
                                arr_13 [i_4] [i_0] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_0] [i_4] [i_0])), (arr_10 [i_0] [i_0] [i_0])));
                                var_12 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [(_Bool)1]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) max((min((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_10 [i_1] [i_0] [i_1]))))), (arr_7 [i_1] [(_Bool)1] [i_0] [i_2]))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11064)) % (var_5)))) ? (((arr_5 [i_0] [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_9))))))));
                    arr_14 [i_0] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3072))) : (((arr_9 [i_2 - 1] [(_Bool)0] [i_2] [i_2 - 1] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (8312536920935478160ULL)))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [i_5])))) : (min((((/* implicit */int) (_Bool)1)), (arr_7 [i_2 + 1] [i_1] [i_2 + 1] [i_2 + 1])))));
                        arr_18 [i_0] [i_1] [20ULL] [i_0] = ((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) (-((-(var_5))))))));
                        arr_19 [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)528)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 3; i_6 < 21; i_6 += 3) 
                    {
                        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_1]))) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_2] [i_6 - 2] [(_Bool)1] [i_6 - 3] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_6]))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_10)))) || (((/* implicit */_Bool) var_4))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_6 - 2] [i_2] [i_2] [i_2 + 2] [i_0])) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_6] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 2] [i_6]))))));
                        arr_24 [i_6] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_21 [i_2 + 1] [i_2] [i_2 + 1] [i_6])) ? ((+(((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_3)))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    var_18 = ((/* implicit */_Bool) (unsigned char)214);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_29 [i_0] [i_1] [i_7] [i_8] [i_9]))));
                                var_20 = ((/* implicit */int) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_9])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_34 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [5ULL] [i_0]))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_26 [i_7] [i_10])))))));
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(_Bool)0] [i_0] [i_0])) && ((_Bool)1))))));
                        arr_35 [i_0] [i_1] [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) ((var_8) || (((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-(-211397819))))));
                            arr_38 [i_0] [i_11] [i_1] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) arr_29 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11])) : (((var_9) ? (((/* implicit */int) (short)3840)) : (((/* implicit */int) (unsigned short)30094))))));
                        }
                        for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(arr_9 [i_0] [i_1] [i_0] [i_7] [i_10] [i_12]))))));
                            arr_41 [i_0] [i_10] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_7])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_7]))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_0])) == (211397806)));
                            var_25 = ((/* implicit */unsigned char) (!(((_Bool) var_6))));
                            arr_44 [i_0] [i_0] [i_0] [(_Bool)1] [(short)13] = ((/* implicit */unsigned short) var_2);
                        }
                        arr_45 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(var_4)));
                    }
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((arr_16 [(short)9] [i_14] [10] [i_14]) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_14])) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1]))));
                        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_0] [i_1]))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) (+(var_10)));
                        var_29 = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned short)30094)))) ? (((/* implicit */int) arr_17 [i_15] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)248))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 2; i_16 < 20; i_16 += 4) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 21; i_17 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_16] [i_16] [i_16] [i_16]))) - (arr_55 [i_0] [i_7]))))))));
                                var_31 = (!(((/* implicit */_Bool) arr_25 [i_0] [i_0])));
                                arr_57 [i_0] [i_1] [i_7] [i_16] [i_0] = ((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]);
                            }
                        } 
                    } 
                }
                var_32 = ((/* implicit */short) min(((~(arr_7 [i_1] [i_1] [i_1] [i_0]))), (((arr_7 [i_0] [i_0] [i_1] [i_1]) + (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_33 = var_3;
}
