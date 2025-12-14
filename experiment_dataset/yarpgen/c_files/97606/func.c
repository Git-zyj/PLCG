/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97606
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = arr_0 [i_0];
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_14 = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (arr_2 [i_0])))), (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_8 [i_2]) : (arr_8 [i_0])))));
                    arr_10 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) min(((-(arr_8 [21U]))), ((+(arr_8 [i_2])))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), ((-(max((min((((/* implicit */unsigned int) arr_1 [(short)20] [(unsigned char)18])), (arr_5 [12ULL]))), (((/* implicit */unsigned int) arr_3 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_14 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((((arr_9 [i_0]) + (2147483647))) << (((arr_12 [i_3] [i_2] [i_2] [i_3] [i_2]) - (1108483058))))) & ((~(arr_9 [0U])))))));
                        var_16 = ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (arr_5 [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_0])))));
                        arr_15 [i_0] [i_0] [i_1] [i_1] [4U] [i_0] = ((/* implicit */short) (((+(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */_Bool) (short)-16732)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1649766646)))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) != (((/* implicit */int) (_Bool)0))));
                    }
                }
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4508))))), ((((~(arr_17 [i_0] [i_1] [(short)11]))) ^ (((/* implicit */unsigned int) ((int) arr_9 [(_Bool)1])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) % ((~(var_2)))))) ? (((((/* implicit */_Bool) ((var_10) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)9] [i_0])))))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0] [17] [i_0]))) : (arr_2 [i_0]))) : (((/* implicit */int) ((((((/* implicit */int) var_3)) - (((/* implicit */int) var_13)))) == (((/* implicit */int) ((arr_22 [i_6] [i_5 + 1] [14LL] [(_Bool)1] [i_0]) > (-575449959)))))))));
                            arr_25 [i_1] [(unsigned short)9] [i_4] [i_0] [i_6] = ((/* implicit */short) arr_8 [i_0]);
                            var_20 = ((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned short)5587), (((/* implicit */unsigned short) (_Bool)1))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (arr_2 [i_0])))));
                        }
                        arr_26 [(_Bool)1] [i_1] [i_4] [22] [i_4] [i_5 - 1] &= ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                        arr_27 [i_0] = ((/* implicit */short) (~(var_2)));
                    }
                    arr_28 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) arr_8 [i_0]);
                }
            }
        } 
    } 
    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) max(((+(var_1))), (((/* implicit */long long int) var_7))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) var_4)), (((var_12) | (((/* implicit */int) var_7)))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 3) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) ((int) 609587782U))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) -575449952)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14907))))))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_30 [i_7])) - (((/* implicit */int) var_9))))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) 1996880960381390112LL);
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (((~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12625)))))) % (((/* implicit */int) var_3)))))));
                            var_27 = arr_12 [i_7] [i_9] [i_9] [i_12] [i_9];
                            arr_50 [i_7] [i_8] [i_9] [i_13] [i_7] = ((short) min((arr_39 [(short)7] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13]), (((/* implicit */unsigned int) arr_13 [i_7] [i_13 + 1] [i_13 + 1] [i_13 + 1] [19U]))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -575449959)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)118))));
                            arr_54 [i_8] [i_8] [i_8] [4U] [i_8] [16] [i_8] |= ((/* implicit */signed char) (((~(((/* implicit */int) arr_47 [i_7] [i_9] [i_9] [(short)11])))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) max((arr_41 [i_14] [i_12] [i_9] [i_8] [i_7]), (var_13)))))))));
                            var_29 = ((/* implicit */unsigned short) arr_44 [1LL] [i_8] [i_9] [i_7]);
                            arr_55 [16U] [i_8] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) var_2);
                        }
                        var_30 -= ((/* implicit */unsigned short) arr_8 [i_7]);
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_15 = 1; i_15 < 20; i_15 += 2) 
                    {
                        var_31 ^= ((/* implicit */unsigned int) arr_48 [15ULL] [i_15 - 1] [14] [i_15 + 1] [i_9]);
                        var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (arr_8 [(short)15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7] [7U] [i_7]))))) * (((((/* implicit */_Bool) var_2)) ? (arr_18 [i_7] [i_7]) : (((/* implicit */unsigned int) arr_9 [i_8]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((signed char) (+(arr_5 [(short)8])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) min((var_34), ((!(((/* implicit */_Bool) var_9))))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((arr_9 [i_7]) & (((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) >= (var_2)))))))));
                        }
                    }
                    for (int i_18 = 3; i_18 < 21; i_18 += 2) 
                    {
                        arr_70 [i_7] = ((/* implicit */short) (-(min((max((arr_61 [i_7] [i_8] [i_8] [i_9] [i_18]), (var_12))), (((/* implicit */int) arr_43 [i_7] [i_18 - 3]))))));
                        /* LoopSeq 4 */
                        for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                        {
                            arr_73 [i_7] [i_19] [i_18] [i_9] [i_8] [15] [i_7] = ((/* implicit */long long int) arr_35 [(short)10] [i_8]);
                            arr_74 [i_7] [5LL] [i_9] [i_7] = ((/* implicit */short) arr_16 [i_7] [i_8] [i_9]);
                        }
                        /* vectorizable */
                        for (signed char i_20 = 1; i_20 < 18; i_20 += 3) /* same iter space */
                        {
                            var_36 |= ((/* implicit */short) (!(((/* implicit */_Bool) (short)32767))));
                            var_37 -= ((/* implicit */short) ((((((/* implicit */int) arr_37 [(unsigned char)15] [i_8] [i_9])) > (((/* implicit */int) var_4)))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_12)) <= (609587782U)))))));
                            arr_79 [i_7] [i_8] [i_8] [i_7] [i_20] [i_18] [i_20] = ((/* implicit */short) ((arr_46 [i_7] [i_18] [i_18 + 1] [i_7]) ? (((/* implicit */int) arr_46 [i_7] [i_18 - 3] [i_18 + 1] [i_7])) : (((/* implicit */int) arr_46 [i_7] [i_20] [i_18 + 1] [i_7]))));
                            var_38 &= ((/* implicit */short) (~(((unsigned long long int) var_1))));
                        }
                        for (signed char i_21 = 1; i_21 < 18; i_21 += 3) /* same iter space */
                        {
                            arr_84 [i_7] [i_8] [i_9] [i_18 - 2] [16LL] = ((/* implicit */unsigned int) (+(((arr_11 [i_7] [i_8] [i_8] [i_18 - 1] [i_21]) ? (var_2) : (((/* implicit */unsigned long long int) min((arr_38 [12LL] [(short)19] [i_9] [i_9]), (((/* implicit */long long int) (unsigned char)200)))))))));
                            var_39 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)127)) * (((/* implicit */int) arr_32 [i_7]))))));
                        }
                        for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
                        {
                            arr_89 [20] [i_8] [i_9] [i_18 - 1] [i_22] &= ((/* implicit */signed char) var_13);
                            var_40 = (!(((/* implicit */_Bool) ((int) arr_56 [i_7] [i_18 - 3] [i_22] [(_Bool)1]))));
                            arr_90 [9LL] [i_9] [i_7] [i_9] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_71 [i_18 - 2] [i_18] [i_18] [i_18 - 2] [i_18 + 1])) && (((/* implicit */_Bool) 190230369)))) ? (((/* implicit */int) max((arr_71 [i_18 - 2] [i_18] [(signed char)4] [i_18 - 2] [i_18 + 1]), (arr_71 [i_18 - 2] [(signed char)6] [i_18] [i_18 - 2] [i_18 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_4)))))));
                        }
                        var_41 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_18 + 1] [(_Bool)1])) ? ((((_Bool)1) ? (((/* implicit */long long int) arr_34 [i_18] [i_9] [i_8])) : (arr_48 [(short)2] [i_18 - 3] [i_18 - 1] [i_18] [i_18]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (0ULL)))));
                        arr_91 [i_7] [i_8] [i_9] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [(unsigned short)10] [i_18] [i_9] [i_18 - 2] [0]))) % (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_60 [16LL] [i_8] [i_7]))))) ^ (((((/* implicit */unsigned long long int) var_12)) / (arr_6 [i_7] [i_8] [i_7])))))));
                    }
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        arr_96 [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_7] [i_7]))))), (arr_34 [i_7] [(_Bool)1] [i_23])));
                        var_42 = ((/* implicit */short) max((var_42), (var_9)));
                        var_43 &= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))));
                    }
                }
            } 
        } 
    } 
}
