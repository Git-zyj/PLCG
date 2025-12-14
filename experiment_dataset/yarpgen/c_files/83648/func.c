/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83648
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
    var_15 += ((/* implicit */short) (signed char)91);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 += ((/* implicit */short) (~(max((max((4604517872464965513ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */int) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) arr_4 [i_3 - 1] [i_4 + 2] [i_2 - 2]))), (((((/* implicit */int) arr_4 [i_3 - 3] [i_4 - 2] [i_2 + 1])) + (((/* implicit */int) arr_4 [i_3 + 1] [i_4 - 2] [i_2 - 2]))))));
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)1])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-24488))))) : (((((/* implicit */_Bool) (short)13330)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [1U] [i_1] [i_2 + 1] [i_0]))) : (-4396388460263032289LL))))) ^ (((/* implicit */long long int) 1144326596))));
                                var_19 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)52))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) 2742847754U);
                    var_21 = ((/* implicit */int) ((arr_2 [i_2 - 1] [i_1]) == (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned short)8121)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [(unsigned char)6])) : (((/* implicit */int) (unsigned char)15)))) : (((((/* implicit */_Bool) (short)-1459)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0])))))))));
                    var_22 -= ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                }
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((var_12), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) >> (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_0))))))))));
                /* LoopSeq 4 */
                for (int i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    var_23 *= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_11 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [(signed char)1]))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18356182645044535802ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15158))) : (2090854093856422741LL)))) ? (((/* implicit */int) arr_7 [(_Bool)0] [(_Bool)0])) : (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_22 [i_5 - 1] [i_0] = ((unsigned char) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
                                var_24 = ((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [(unsigned char)7] [i_5] [i_7]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) max((arr_21 [i_5 - 1]), (min((arr_21 [i_5 + 1]), (arr_21 [i_5 - 1])))));
                    var_26 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (max((1743102304772058206LL), (((/* implicit */long long int) 1668248526)))))));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */int) arr_24 [(_Bool)1] [i_1] [i_8])) | (((/* implicit */int) (unsigned short)4379))));
                    arr_26 [i_0] [(_Bool)1] [i_8] = ((/* implicit */_Bool) arr_9 [i_0] [i_1]);
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 1; i_10 < 12; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) var_1)) * (((((/* implicit */int) var_6)) / (((/* implicit */int) var_5)))))))));
                            var_29 = ((/* implicit */unsigned long long int) arr_28 [i_0]);
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 2) 
                        {
                            arr_37 [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_34 [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 - 1]))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1]))))) ? (((/* implicit */int) arr_0 [i_11 + 1] [i_11 - 1])) : (arr_35 [(short)10] [i_11] [(short)10] [i_11 + 1] [i_11 + 1])));
                            var_31 = ((/* implicit */unsigned int) var_13);
                            arr_38 [i_0] [0ULL] [i_0] [i_9] [1LL] [i_11 - 2] = ((/* implicit */int) arr_12 [i_8] [i_11 - 2] [4U] [(signed char)7] [i_11 + 1] [i_11 - 1]);
                        }
                        var_32 = ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_13 [i_0] [6] [8] [i_0] [i_0])));
                    }
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        var_33 *= ((/* implicit */signed char) var_9);
                        var_34 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -1319881499)) ? (arr_32 [i_0] [(unsigned short)11] [i_8] [i_12] [(unsigned char)9]) : (((/* implicit */unsigned int) -177934458))))));
                        arr_43 [i_0] [i_1] [i_1] = ((((/* implicit */int) (signed char)-124)) & (((/* implicit */int) (_Bool)1)));
                    }
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_16 [(short)9] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
                }
                for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    var_36 = ((/* implicit */unsigned short) 2809783877U);
                    var_37 = ((((/* implicit */int) (signed char)74)) <= (-1690058972));
                    var_38 -= ((/* implicit */unsigned char) ((min(((+(arr_25 [i_0] [i_1] [(unsigned short)9]))), (((/* implicit */long long int) arr_16 [i_1] [i_1])))) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                }
                for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_14] [i_14])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (signed char)-40)))) & (((/* implicit */int) max((var_10), ((short)-4697)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        arr_52 [i_0] [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [11]))) > (arr_45 [2ULL] [4U] [i_1] [i_0])))), (((var_8) ? (arr_31 [i_0] [i_1] [i_0] [i_15] [8ULL] [i_15] [11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_15]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((1403661764) % (((/* implicit */int) var_11))))) <= (arr_19 [i_0] [i_0] [1LL] [i_0]))))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_35 [(unsigned short)6] [i_15] [(unsigned short)0] [(unsigned short)6] [i_0]), (arr_35 [i_0] [i_1] [i_1] [i_14] [i_15])))) ? (((/* implicit */int) max((arr_24 [i_15] [i_14] [i_0]), (max((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])), ((unsigned short)10135)))))) : (((/* implicit */int) arr_48 [i_0] [i_1] [i_14] [i_15]))));
                    }
                }
            }
        } 
    } 
    var_41 = (+(((/* implicit */int) var_11)));
}
