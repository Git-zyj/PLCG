/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71911
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
    var_13 = ((/* implicit */long long int) var_5);
    var_14 = ((/* implicit */unsigned short) var_4);
    var_15 += ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (~(var_5))))))), (var_4)));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_16 += ((((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (var_5)))))))) > (((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_2) : (var_7))) % (max((((/* implicit */long long int) arr_2 [i_0])), (9033925620364645193LL))))));
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [0])) : (((arr_1 [5]) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (signed char)127)))))) - (((int) arr_2 [i_0 - 2]))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_8 [i_2] [i_3]))))) : ((-2147483647 - 1))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */int) ((short) arr_1 [i_0 - 2]));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((((+(var_2))) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3 - 1])) || (((/* implicit */_Bool) arr_2 [i_3 - 1]))))))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32357))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (var_6)))));
                        }
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_16 [i_1] = ((/* implicit */unsigned int) arr_1 [6U]);
                            arr_17 [i_5] [i_1] [0] [i_1] [0LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) arr_2 [i_1]))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4177005240674264844LL)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (arr_7 [i_0] [i_1] [9ULL] [i_3 - 1] [i_5])))) ? (arr_9 [i_1] [i_5] [i_2] [i_2] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 + 2] [i_0 + 2] [i_0] [i_1] [i_0] [i_0 + 1])))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_20 [9] [i_1] [9] [i_1] [i_0] = ((/* implicit */long long int) ((arr_3 [i_0 - 1] [i_0 - 1]) / (arr_3 [i_0 - 2] [i_0 + 2])));
                        var_23 ^= ((/* implicit */_Bool) ((unsigned long long int) (~(var_6))));
                        arr_21 [i_0] [i_1] [i_2] [i_0] = ((((arr_3 [i_0] [i_0]) >> (((((/* implicit */int) var_3)) - (169))))) << (((((((/* implicit */_Bool) arr_19 [i_1] [8U] [i_1] [i_1] [i_1] [i_1])) ? (arr_14 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) - (1976983206594843825LL))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_26 [(unsigned short)5] [i_1] [i_2] [(unsigned short)2] [3LL] [i_7] = ((/* implicit */unsigned char) var_10);
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_14 [7U] [i_7]))), (((/* implicit */long long int) arr_2 [i_0 - 1]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            var_25 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-5828515840082544954LL) : (18014398509481983LL));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [9ULL])) ? (((/* implicit */long long int) arr_32 [i_9] [i_9] [i_1] [(signed char)8] [i_1] [i_1])) : (arr_31 [i_9] [i_2] [i_2] [i_2] [i_2] [(signed char)4] [(signed char)3]))))))))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_27 |= ((/* implicit */unsigned int) ((long long int) ((unsigned char) arr_5 [i_0 - 1])));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)2932)))))));
                            var_29 -= ((/* implicit */unsigned char) arr_2 [(unsigned char)3]);
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_4 [(unsigned short)2] [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_30 [i_0 + 2] [i_0 - 1] [(signed char)2] [i_0 - 2])))) : ((-(var_7))))))));
                            var_31 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_2)) ? (arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0] [(signed char)2]) : (((/* implicit */int) arr_19 [6LL] [i_0 - 2] [i_0 - 2] [i_0 - 2] [(short)2] [i_0 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4)))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_40 [i_11] [(_Bool)1] [i_2] [(_Bool)1] [i_0] |= ((/* implicit */int) (-(max((arr_31 [i_0 - 2] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0]), (((/* implicit */long long int) var_1))))));
                            arr_41 [i_0] [i_0] [i_1] [(unsigned char)4] [i_8] [i_8] [(_Bool)1] &= ((/* implicit */unsigned short) ((max((arr_38 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_8] [(_Bool)1]), (((/* implicit */long long int) arr_15 [i_0] [i_0 + 2] [i_2] [i_0] [i_11] [(signed char)6])))) > (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [8U]))) | (var_11))))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            arr_46 [5U] [i_1] [5] [2ULL] [i_1] [i_0 - 2] = ((/* implicit */unsigned int) (+(((arr_5 [i_0 - 1]) / (((/* implicit */long long int) arr_3 [i_0 - 1] [i_0]))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_15 [i_12] [i_12] [i_12] [2ULL] [i_12] [(short)8]))));
                        }
                        arr_47 [i_1] = ((/* implicit */int) var_2);
                    }
                }
            } 
        } 
    }
    for (signed char i_13 = 2; i_13 < 8; i_13 += 1) /* same iter space */
    {
        var_33 = max((min((arr_48 [i_13 + 1]), (arr_48 [i_13 + 1]))), (max((arr_48 [i_13 - 2]), (arr_48 [i_13 - 1]))));
        var_34 = ((/* implicit */short) (((-(arr_27 [i_13 - 1] [i_13] [i_13] [i_13 + 2] [i_13 + 2] [2U]))) / ((-(((/* implicit */int) (signed char)-123))))));
    }
}
