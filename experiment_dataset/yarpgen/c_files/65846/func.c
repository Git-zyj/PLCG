/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65846
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) || (((((/* implicit */int) arr_2 [i_0 + 3])) <= (((/* implicit */int) var_5)))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((2889983208U), (((/* implicit */unsigned int) (unsigned short)51789))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))) : (972356857546944380LL)));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */unsigned int) 1704280030)) : (1404984086U)));
                        arr_14 [i_1] [i_1] [(short)4] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) arr_8 [i_4] [i_4]))))));
                    }
                    for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        arr_18 [2] [i_5] [2] [i_5] [i_5] [i_5] = ((/* implicit */long long int) var_8);
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)11))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (short)-28123)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_11)) + (((arr_11 [i_1] [i_2] [i_2] [i_5] [i_5 + 1] [i_5]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))))));
                        arr_19 [i_1] [(unsigned char)6] [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) ? (var_0) : ((~(((/* implicit */int) var_2))))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_10 [i_1] [i_3] [3LL])) : (arr_11 [(_Bool)1] [15LL] [i_2] [i_3] [i_3] [i_2]))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_5] [i_3] [i_1] [i_2] [i_1] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) : (((/* implicit */long long int) var_11))));
                    }
                    var_20 -= ((/* implicit */short) ((signed char) var_10));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_26 [(signed char)0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_8))))))));
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_1] [i_3])) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_13 [i_1] [i_1] [i_3] [14])))) >= (((((/* implicit */_Bool) arr_10 [(unsigned short)8] [i_6] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))))));
                                arr_27 [i_6] = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) < (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_1] [4U] [i_3] [i_6]))))), (1179571248U))));
                                arr_28 [i_2] [i_6] [i_6] [i_3] [i_2] [(_Bool)1] [i_1] = ((unsigned int) min((max((arr_5 [(unsigned char)13]), (((/* implicit */short) var_7)))), (((/* implicit */short) var_4))));
                                var_22 = ((/* implicit */signed char) (+(max(((~(((/* implicit */int) arr_25 [i_7] [i_3] [i_3] [i_2] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [13] [i_2] [(unsigned short)15] [(short)14] [i_2] [i_2])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 4) 
    {
        for (int i_9 = 3; i_9 < 8; i_9 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_8 - 1])) ? (((var_10) ? (arr_30 [i_8 - 1] [i_8 + 2]) : (arr_30 [i_8 - 1] [i_8 + 2]))) : (((/* implicit */int) max((((/* implicit */signed char) var_4)), (var_2))))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 4; i_11 < 8; i_11 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) min((max((arr_32 [i_9 + 3] [i_8]), (arr_32 [i_9 + 1] [i_9]))), (((-1460596769) ^ (arr_32 [i_9 - 1] [i_8 + 1])))));
                        arr_43 [i_8] [7LL] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_8])) ? (((/* implicit */int) arr_34 [i_8])) : (((/* implicit */int) arr_34 [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) >= ((((_Bool)0) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) var_2)))))))) : (var_6)));
                        arr_44 [i_8] = ((/* implicit */long long int) max((((unsigned long long int) max((((/* implicit */short) arr_41 [i_8] [i_9] [i_10] [i_11])), (arr_5 [i_8])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_8 + 2] [i_8])))));
                        arr_45 [i_8] [i_8] = ((/* implicit */unsigned short) (((~(arr_32 [i_8] [i_11 + 3]))) & (((arr_32 [i_8 + 1] [i_11 - 2]) / (var_0)))));
                        var_25 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (unsigned short)13738)))) : (((/* implicit */int) arr_15 [i_11 - 2] [i_11 + 2] [i_9 - 2] [i_8 - 1])))));
                    }
                }
                for (unsigned int i_12 = 1; i_12 < 10; i_12 += 2) 
                {
                    arr_48 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */signed char) var_4)), ((signed char)101)))) <= (((/* implicit */int) (((+(((/* implicit */int) (short)30187)))) != (((/* implicit */int) var_7)))))));
                    arr_49 [i_8] [i_9 - 2] [i_8] [i_12] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)25800)), (arr_10 [(short)3] [(unsigned char)14] [i_12])))) ? (((/* implicit */int) ((((/* implicit */int) arr_29 [i_8])) <= (((/* implicit */int) arr_41 [i_8] [i_8] [i_9] [i_12 - 1]))))) : (((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) var_5))))));
                    arr_50 [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_42 [i_8 - 1] [i_8 + 2] [i_8] [i_8] [i_8 - 1] [i_9 + 1]))))) ? ((-(((/* implicit */int) arr_42 [i_8] [i_8 + 2] [(short)6] [i_8] [(signed char)4] [i_9 + 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_42 [i_8] [i_8 + 2] [i_9] [i_8] [i_9] [i_9 + 3])) != (((/* implicit */int) arr_42 [i_8 - 1] [i_8 + 1] [i_9 + 1] [i_8] [i_9 + 3] [i_9 + 2])))))));
                }
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (signed char)-102)))));
                    var_27 = (unsigned char)148;
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) var_13);
                        arr_57 [i_8] [i_9] [i_8] = ((int) arr_25 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_9 - 3]);
                        arr_58 [i_8] [i_9 - 3] [8ULL] [i_9 - 3] [i_14] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_13])))) ? (((((/* implicit */int) var_7)) % (((/* implicit */int) var_1)))) : (((/* implicit */int) ((arr_31 [i_14]) && (((/* implicit */_Bool) 1404984075U)))))));
                        arr_59 [i_8] [i_8] = ((/* implicit */short) var_6);
                        arr_60 [i_14] [(unsigned char)9] [i_8] [(unsigned char)9] [5LL] = ((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (unsigned short)34518)) : (arr_33 [i_8] [i_8] [i_9 - 1])));
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) (-(max((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_10)))))))));
                            arr_67 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) min((((((((/* implicit */_Bool) -1440005205)) ? (-4753963840522361421LL) : (((/* implicit */long long int) 1946599731)))) * (((/* implicit */long long int) ((arr_30 [i_8] [i_9]) * (((/* implicit */int) var_4))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_52 [i_8] [i_8] [i_8 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_14))));
}
