/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66857
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
    var_13 = ((/* implicit */signed char) 1316002942);
    var_14 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6626713766722876525LL)) ? (arr_10 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (unsigned char)31))));
                        arr_13 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_11);
                        var_17 &= ((/* implicit */_Bool) ((((arr_8 [i_2] [i_1] [i_1] [(unsigned char)1]) <= (134209536))) ? (arr_2 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66)))));
                    }
                    for (int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                    {
                        var_18 &= ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 4 */
                        for (long long int i_5 = 4; i_5 < 9; i_5 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_5 - 3] [i_5 - 4] [i_5] [i_5] [i_5] [i_5]))));
                            var_20 = ((/* implicit */signed char) arr_8 [i_5 - 1] [i_5] [i_5 - 3] [i_5 + 1]);
                            arr_19 [i_0] [i_0] [(_Bool)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1316002942)) ? (379940051U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_12 [i_1] [i_2] [(_Bool)1] [(unsigned char)3])));
                        }
                        for (long long int i_6 = 4; i_6 < 9; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_6 - 2] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) arr_21 [i_6 - 2] [i_6 - 3] [i_6 - 3] [i_6 - 2] [i_6] [i_6 - 2] [i_6 - 3]));
                            var_21 = ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
                            arr_24 [i_6 - 2] [10LL] [6LL] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_10))))) / (arr_6 [i_0] [i_1])));
                            arr_25 [i_0] [(_Bool)1] [i_2] [5LL] [i_4] [i_4] [6] = ((/* implicit */_Bool) var_7);
                        }
                        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_30 [i_7] [i_4] [i_2] [1] [i_0] = ((/* implicit */int) ((1316002942) == (((/* implicit */int) arr_9 [i_1] [i_2] [i_4] [i_7]))));
                            arr_31 [i_0] [(signed char)8] [i_2] [i_2] [i_4] [i_7] = ((/* implicit */int) 6626713766722876528LL);
                            arr_32 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 890612330)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)19))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_5)))));
                            var_22 |= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (((((/* implicit */_Bool) var_11)) ? (arr_20 [i_0] [(signed char)1] [i_2] [6]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                        }
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_23 |= var_8;
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */int) arr_21 [i_8] [i_4] [i_2] [i_2] [i_2] [i_1] [i_0])) <= (((/* implicit */int) var_8)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_42 [9LL] [7LL] [(signed char)5] [i_9] [(signed char)10] = ((/* implicit */unsigned char) -2014728455);
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((var_10) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) arr_15 [i_0]))))) <= (6626713766722876532LL)));
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0)))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_11 = 3; i_11 < 9; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        arr_47 [i_0] [4LL] [i_1] [i_0] = ((/* implicit */_Bool) 3915027244U);
                        var_27 = ((/* implicit */unsigned short) arr_35 [i_0] [i_1] [i_1] [i_12]);
                    }
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) arr_20 [i_0] [(_Bool)1] [i_11] [i_13]);
                        arr_50 [i_0] [i_0] [i_0] [9] [i_0] [(_Bool)1] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (3501852581895157012LL));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        arr_55 [i_14] [i_1] [i_1] [i_1] [i_0] = (-(arr_6 [i_11 - 2] [i_11 - 1]));
                        var_29 ^= ((/* implicit */unsigned short) var_4);
                        arr_56 [i_1] = ((/* implicit */long long int) ((unsigned char) -22LL));
                    }
                    var_30 = ((/* implicit */_Bool) (+(((var_10) ? (arr_45 [i_11] [i_11 - 1] [i_11 + 2] [i_11] [3LL] [i_11 - 2]) : (var_7)))));
                    var_31 = ((/* implicit */signed char) (unsigned char)63);
                }
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 8; i_15 += 3) 
                {
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        {
                            var_32 -= ((/* implicit */long long int) (unsigned char)190);
                            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) var_1)))))));
                            arr_61 [i_0] [i_1] [i_15] [i_1] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_43 [i_15 + 1] [i_15 + 2] [i_15 + 1]))))) || (((_Bool) arr_43 [i_15 + 2] [i_15 - 2] [i_15 + 1]))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-10)) || (((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) ((arr_51 [i_0] [i_0]) ? (max((((/* implicit */int) var_1)), (arr_8 [(_Bool)0] [i_15] [i_1] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))))));
                        }
                    } 
                } 
                arr_62 [i_1] [i_1] [(signed char)9] = ((/* implicit */unsigned char) arr_52 [i_0] [2LL]);
                arr_63 [0] [i_0] [i_1] = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
}
