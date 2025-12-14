/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71131
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2361777834U)) ? (1933189454U) : (1933189454U)));
    var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_4)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48627)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)48627)))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_3)))) + (((/* implicit */int) var_5)))) : (((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_2))), (var_0))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_7)));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) min((var_1), (((((/* implicit */_Bool) arr_0 [17ULL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48644))) : (arr_0 [i_1] [i_0])))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0]))));
                        var_14 = ((/* implicit */unsigned short) var_4);
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_17 [1U] [1U] [1U] [8LL] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)48627))))), (min((1933189449U), (arr_2 [i_2])))));
                        var_15 = ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_4] [i_1] [(_Bool)0]))) ? ((-(((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) arr_2 [i_2])))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_0)), (var_7))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_13 [i_4] [i_2] [i_0] [i_0])), (1933189438U))))))));
                        var_16 = 1933189461U;
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_22 [8ULL] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+(max((((((/* implicit */unsigned long long int) -5510821097729195300LL)) & (arr_0 [2U] [i_1]))), (var_1)))));
                            arr_23 [i_5] [i_4] [(unsigned short)7] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_3);
                            arr_24 [i_5] [10] [i_2] [i_1] [14U] [(unsigned short)1] = ((/* implicit */signed char) arr_4 [i_2] [i_2] [i_2]);
                        }
                        var_17 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-120)), (arr_10 [i_0] [i_0])));
                    }
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (1933189449U)))) ? (((/* implicit */unsigned long long int) max((1933189462U), (1933189449U)))) : (min((((/* implicit */unsigned long long int) arr_18 [i_2] [i_0] [(signed char)17] [i_0] [i_0] [i_0])), (var_8)))))) ? (max((((/* implicit */unsigned long long int) (-(2361777834U)))), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_19 [i_2] [12ULL] [i_2] [i_2] [9U] [(_Bool)0])))))));
                    arr_25 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) && ((!(((/* implicit */_Bool) max((var_2), (2361777830U))))))));
                }
                var_19 -= ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_11 [i_1] [i_0] [i_0])), (max((2361777828U), (((/* implicit */unsigned int) (signed char)-1))))))));
                /* LoopSeq 3 */
                for (short i_6 = 2; i_6 < 18; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_34 [i_0] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_6 - 2] [i_6 + 1] [0ULL]))))), (max((((/* implicit */unsigned int) arr_19 [16ULL] [16ULL] [16ULL] [i_7] [i_7 - 1] [i_7])), (1933189461U)))));
                            arr_35 [i_8] = ((/* implicit */signed char) 18446744073709551615ULL);
                            var_20 = max((((/* implicit */short) min((var_5), (((/* implicit */unsigned char) arr_33 [i_1] [i_1] [i_1] [i_1] [18]))))), (min((((/* implicit */short) arr_19 [i_6 - 2] [i_7] [i_7 + 1] [i_6 - 2] [i_6 + 1] [i_1])), (arr_15 [i_7 - 1] [i_6 + 1] [i_0] [i_0]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_21 -= 1933189461U;
                            var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_15 [(_Bool)1] [i_6] [i_1] [i_0]), (((/* implicit */short) arr_36 [i_7 - 2] [i_7 - 1]))))), (((((/* implicit */_Bool) arr_11 [i_7 - 1] [i_7 - 2] [i_6 - 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7 - 1] [i_7 - 2] [i_6 - 1])))))));
                            var_23 -= ((/* implicit */unsigned int) arr_38 [i_1] [i_7] [i_6 - 2] [i_7] [8LL]);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_24 |= ((/* implicit */unsigned short) max((max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 2361777834U))))))), (((/* implicit */unsigned long long int) (-(arr_1 [i_6 + 1] [i_0]))))));
                            arr_42 [i_7] [i_7] [i_0] [i_7 + 1] |= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_10] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_10] [i_7 + 1] [i_6 + 1] [i_1]))))), (max((((/* implicit */unsigned long long int) max((arr_7 [i_10] [i_7]), (((/* implicit */short) arr_28 [i_10] [i_10] [i_7 - 1] [i_6 + 1] [14ULL] [i_0]))))), (15097132394942920062ULL))));
                        }
                        arr_43 [(signed char)11] [(unsigned char)16] [i_1] [(unsigned char)16] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7 + 1] [i_6] [(unsigned short)11] [i_0] [i_0] [i_0]))) + (2361777833U)))) : (((((/* implicit */_Bool) (unsigned short)16927)) ? (arr_10 [i_6] [i_0]) : (var_9))))), (((/* implicit */unsigned long long int) min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((!(arr_27 [i_6] [i_6] [i_1] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        var_25 *= (~(arr_6 [i_6 - 1]));
                        arr_48 [i_11] [i_6 + 1] [(_Bool)1] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_26 = ((/* implicit */unsigned long long int) (~(arr_40 [i_11] [i_6 - 2] [i_11] [i_11] [i_6 + 1] [i_6])));
                    }
                    arr_49 [17] [i_6] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_6 + 1] [i_6 - 1] [i_6] [i_6] [i_6] [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)46)), (1933189438U)))) >= (((unsigned long long int) 2361777817U)))))) : (var_8)));
                }
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    var_27 |= ((/* implicit */unsigned long long int) var_5);
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            {
                                var_28 *= min((((/* implicit */unsigned long long int) ((1933189412U) ^ (2361777811U)))), ((~(max((arr_0 [i_0] [(_Bool)0]), (((/* implicit */unsigned long long int) arr_6 [i_14])))))));
                                var_29 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((2361777837U), (((/* implicit */unsigned int) (signed char)0))))), (max((((/* implicit */unsigned long long int) max((arr_56 [i_14] [i_0] [i_13] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) var_6))))), (max((var_8), (15939307499771521720ULL)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        arr_65 [i_16] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_59 [i_16] [i_15] [i_1] [i_0])) : (((/* implicit */int) var_5))));
                        /* LoopSeq 4 */
                        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (~(2361777833U)));
                            var_31 -= ((/* implicit */unsigned char) var_3);
                            var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2361777852U))))) + (((/* implicit */int) arr_14 [i_1] [i_15] [i_1] [i_0]))));
                            var_33 -= ((/* implicit */unsigned char) (((+(var_7))) + (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)208)))))));
                            var_34 -= ((/* implicit */unsigned short) var_2);
                        }
                        for (unsigned long long int i_18 = 2; i_18 < 17; i_18 += 4) 
                        {
                            arr_71 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_18 + 2] [i_18] [(_Bool)1] [i_18 + 2] [5ULL] [i_0])) != (((/* implicit */int) ((1933189444U) < (2361777852U))))));
                            var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_18] [i_18 + 1] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (var_1)));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 1) 
                        {
                            arr_74 [(_Bool)1] [i_16] [i_15] [i_15] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) 2361777832U)));
                            var_36 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2361777835U) : (arr_69 [i_0] [i_0] [(unsigned char)0] [i_0] [11ULL] [i_0]))))));
                        }
                        for (unsigned int i_20 = 1; i_20 < 18; i_20 += 3) 
                        {
                            arr_77 [i_20] [i_16] [i_15] [i_1] [i_0] [i_20] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_53 [i_20] [i_16] [i_15] [i_0] [i_0]))));
                            arr_78 [i_0] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_1)))) ? (((var_0) ? (((/* implicit */int) arr_21 [i_20] [i_16] [i_15] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)48627)))) : (((/* implicit */int) arr_13 [i_20] [i_20 - 1] [i_20] [i_20 + 1]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 18; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 1) 
                        {
                            {
                                arr_83 [i_21] [i_21] [i_15] [i_1] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)48639))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_21] [i_21] [i_21 + 1] [i_21 - 1]))));
                                var_37 |= ((/* implicit */unsigned char) (signed char)1);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (max((((/* implicit */unsigned long long int) 2361777833U)), (var_8)))));
}
