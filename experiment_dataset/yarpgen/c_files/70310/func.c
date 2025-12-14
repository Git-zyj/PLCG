/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70310
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
    var_11 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */int) (short)-4096)) : (((/* implicit */int) arr_1 [i_0]))))) ? (arr_3 [i_0] [i_1] [i_0]) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (arr_6 [i_0] [i_0])))))) ? (((((_Bool) arr_6 [(short)1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (arr_3 [i_0] [i_1 + 1] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((((/* implicit */int) (short)-15314)) + (2147483647))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775777LL))) + (48LL))))))))));
                    var_12 = ((/* implicit */long long int) (-(arr_3 [i_2] [i_1] [i_0])));
                    arr_8 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0] [i_1]))) : (arr_3 [(_Bool)1] [i_1] [i_2])))) ? (((((/* implicit */_Bool) ((arr_5 [i_2]) << (((((/* implicit */int) arr_1 [i_2])) - (43220)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0] [i_1])), ((unsigned char)51))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [16ULL]))) : (arr_3 [i_0] [i_1] [i_2]))))) : (((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_1])))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [15ULL] [i_1]))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                {
                    arr_11 [(_Bool)1] [i_1 - 1] [2ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_6 [i_0] [(unsigned short)7]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_1 - 1] [i_1 + 2]), (arr_2 [i_1 - 1] [i_1 + 2])))))));
                    arr_12 [i_0] [3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [(_Bool)1] [i_3]) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) ((short) arr_5 [i_0]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) <= (arr_6 [i_0] [i_0]))))))) && (((/* implicit */_Bool) arr_6 [i_0] [(short)6]))));
                    var_13 = ((/* implicit */short) ((((_Bool) (short)-32415)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_3]) : (arr_4 [i_0]))) >= (((/* implicit */long long int) min((-921199241), (((/* implicit */int) (unsigned char)4)))))))) : (((/* implicit */int) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1 + 1] [i_0] [i_4 + 1] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [4ULL])), (((((/* implicit */_Bool) 3748778726U)) ? (arr_10 [i_1] [i_1 + 1] [i_1] [i_1]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-10)), (546188569U))))))));
                                arr_20 [i_0] [i_0] [i_0] [5ULL] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((short) arr_16 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4] [i_4]))) ? ((~(arr_16 [i_3] [i_3] [i_3] [i_3] [15LL] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)32255)))))) <= (arr_14 [i_1 - 1] [i_4 + 1])));
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((int) arr_13 [i_0] [i_0] [i_0] [i_4] [(short)4])))));
                                var_15 = ((/* implicit */int) min(((+((~(arr_6 [2ULL] [i_3]))))), (((/* implicit */unsigned long long int) ((((arr_3 [i_5] [i_1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min((arr_18 [i_0] [i_1] [i_1] [i_4] [i_5]), (((/* implicit */unsigned long long int) arr_1 [i_5]))))))))));
                                arr_21 [i_0] [i_1] [i_1] = ((/* implicit */int) 3748778727U);
                            }
                        } 
                    } 
                }
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), ((-(min((((unsigned long long int) arr_18 [i_0] [i_0] [i_0] [(short)0] [(short)0])), ((~(arr_18 [(unsigned short)19] [7] [i_6] [i_6] [(unsigned short)19])))))))));
                    var_17 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6] [i_0]))) : (9223372036854775789LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((7732704339674174957ULL) - (7732704339674174944ULL)))))))) >> (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (_Bool)0)), (-9223372036854775782LL)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((max((max((arr_18 [(short)20] [(short)20] [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [4ULL] [i_7] [i_8])))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)255))))), (((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_1] [i_6] [i_7]), (((-6793911) % (((/* implicit */int) (_Bool)1)))))))));
                                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((short) arr_4 [i_0])), (max(((short)-25377), (((/* implicit */short) (_Bool)1)))))))));
                                arr_28 [i_7] [(short)0] [i_7] = ((/* implicit */short) ((((/* implicit */int) (short)23567)) - (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 3; i_10 < 19; i_10 += 2) 
                    {
                        arr_35 [i_10] [i_10 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0] [i_0])), (arr_5 [i_0])))) > (((arr_34 [i_9] [i_1 + 1]) ? (3748778726U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10] [i_9] [i_9] [i_0] [i_0])))))))) ^ (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) >= (10714039734035376658ULL)))) - (arr_9 [(unsigned char)4] [i_9] [(unsigned char)4] [i_0])))));
                        arr_36 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) (short)-32756))), (((((/* implicit */_Bool) -12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)233)))))) : (8842859213160989271ULL)))));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_0 [i_0] [i_0]))));
                            arr_40 [i_10] [i_1] [i_1] [i_1 + 3] [i_1] [i_1] [i_1 - 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_11] [21ULL] [i_9] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [(_Bool)1] [0] [i_0]))) : (arr_3 [i_9] [i_1 + 2] [10])))));
                            var_21 *= ((/* implicit */unsigned int) (~(arr_37 [i_0] [i_0] [i_0])));
                            arr_41 [i_10] [i_10] [i_9] [(short)10] [(short)10] &= ((/* implicit */unsigned char) (+((+(((long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [2ULL]))))));
                        }
                    }
                    for (int i_12 = 2; i_12 < 21; i_12 += 4) 
                    {
                        arr_44 [i_0] [i_0] = ((/* implicit */signed char) arr_14 [i_0] [i_1]);
                        var_22 = max(((~(arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_24 [(_Bool)1] [i_1] [i_1] [i_1]), (((/* implicit */int) arr_13 [(short)5] [i_1] [(short)9] [i_12 - 1] [(short)9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20401)) ? (arr_5 [i_0]) : (((/* implicit */int) arr_32 [(unsigned char)6] [(unsigned char)6] [i_9] [(signed char)8] [i_0]))))) : (max((arr_10 [i_0] [i_1 + 1] [10] [i_1 + 1]), (((/* implicit */long long int) arr_32 [i_1 + 1] [i_9] [i_1 + 1] [i_0] [i_0]))))))));
                        var_23 = ((/* implicit */_Bool) max((((unsigned long long int) ((unsigned long long int) -8622218983406801490LL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_9] [i_9] [16U]))) >= (arr_26 [i_12] [i_12 - 2] [i_9] [i_1 + 1] [i_0]))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(arr_45 [i_1 - 2] [5ULL])))), (((((/* implicit */unsigned long long int) ((int) (short)(-32767 - 1)))) % (((unsigned long long int) arr_14 [i_0] [i_1])))))))));
                        var_25 = ((/* implicit */_Bool) (short)1023);
                    }
                    arr_48 [i_1] = ((unsigned long long int) ((int) (~(arr_3 [i_0] [i_1] [(_Bool)1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            {
                                arr_56 [i_0] [i_0] [i_9] [i_14] [i_15] = ((/* implicit */unsigned long long int) arr_2 [2ULL] [i_15]);
                                var_26 = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_14] [i_14]))))), (((((/* implicit */_Bool) min((16380), (arr_0 [5] [5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)14108))))) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_14 + 1] [(signed char)1])))));
                                arr_57 [i_14] [i_1] [i_9] [i_15] = ((/* implicit */unsigned long long int) arr_17 [i_0] [11U] [i_9] [3ULL] [i_9]);
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_14] [i_14])) <= (arr_43 [i_0] [i_1 + 3] [i_0] [i_14 - 1] [5])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 1; i_16 < 19; i_16 += 2) 
                    {
                        for (unsigned long long int i_17 = 1; i_17 < 21; i_17 += 2) 
                        {
                            {
                                arr_62 [i_0] [i_16] [(short)7] [i_16 + 1] [i_17] [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((signed char) arr_5 [(short)15]));
                                arr_63 [(_Bool)1] [i_16] [i_9] [i_16] [(short)8] = ((/* implicit */int) ((_Bool) max((arr_53 [i_1 - 2] [i_16] [i_1 - 2] [(_Bool)1] [i_1 + 2]), (arr_53 [i_1 - 2] [i_16] [i_1 - 2] [i_1 + 1] [i_1 + 2]))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_18 = 3; i_18 < 21; i_18 += 4) 
                {
                    for (short i_19 = 2; i_19 < 21; i_19 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                            {
                                arr_75 [(short)2] [i_20] [i_18 + 1] [i_19] = arr_71 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [21ULL];
                                arr_76 [11] [i_20] [(short)2] [(_Bool)1] [(unsigned short)21] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((_Bool) (~(min((arr_5 [3U]), (((/* implicit */int) (short)-15926)))))));
                            }
                            /* vectorizable */
                            for (short i_21 = 0; i_21 < 22; i_21 += 1) 
                            {
                                arr_80 [8] [i_21] [i_18 - 1] [i_19] [i_18 - 1] = ((/* implicit */short) arr_17 [i_21] [i_1] [(signed char)14] [i_21] [i_21]);
                                var_28 = ((/* implicit */unsigned long long int) ((392504426) ^ ((~(((/* implicit */int) arr_61 [i_0] [18LL] [i_18] [i_21] [i_19 - 2] [i_21]))))));
                                var_29 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) arr_64 [i_0] [5ULL] [5ULL] [(unsigned short)15])))) / (((/* implicit */int) (short)-31249))));
                            }
                            for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 3) 
                            {
                                arr_84 [(unsigned char)11] [i_19] [i_18 - 3] [i_1] [i_0] &= ((_Bool) 7351354851303899653LL);
                                var_30 -= arr_58 [i_18 - 2] [i_19 + 1] [i_22 + 2];
                                var_31 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)186)), (arr_25 [i_0] [i_1] [i_22] [i_19 - 2]))))) * (((((/* implicit */unsigned long long int) arr_17 [i_0] [(short)9] [i_18] [i_19] [i_19])) / (arr_3 [i_19] [i_19] [8LL]))))));
                            }
                            arr_85 [i_0] [15ULL] [(unsigned short)7] [i_19 - 2] [i_19 + 1] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_30 [i_0] [i_1] [i_18 - 1]), ((short)-27799)))), (min((((/* implicit */long long int) arr_51 [i_19] [i_1])), (-279967354794651684LL)))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_81 [i_0] [i_0] [i_1] [i_18] [i_19] [i_19 - 2])) & (arr_23 [i_1 - 2] [i_18] [i_18] [i_18 + 1])))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_18] [i_19])) ? (arr_43 [i_0] [i_0] [i_0] [i_18 + 1] [18U]) : (((/* implicit */int) (_Bool)0)))))), ((-((+(((/* implicit */int) arr_65 [(_Bool)1] [i_1])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
