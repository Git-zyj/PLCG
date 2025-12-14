/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81555
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
    var_13 = ((/* implicit */signed char) var_7);
    var_14 = ((/* implicit */long long int) min(((+((~(var_11))))), (var_9)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) var_4))))))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_2] [i_1] [i_0] = arr_2 [i_1 + 1] [i_1 + 1];
                    var_15 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [(unsigned char)22] [i_1 - 3] [i_2] [i_2]))));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1] [i_4] [i_4] = ((/* implicit */signed char) (-(arr_14 [i_0] [i_1] [1LL] [20LL])));
                                arr_23 [i_0] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) (-((((~(((/* implicit */int) arr_0 [i_0])))) | (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned short) arr_9 [i_0] [i_3] [i_0]);
                        var_17 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_6] [(signed char)3] [i_6] [i_6]) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_12 [i_1])))))))));
                        var_18 = ((/* implicit */short) (-((+(((/* implicit */int) var_1))))));
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) arr_13 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 3]))));
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        arr_31 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((13213352317146282520ULL), (((/* implicit */unsigned long long int) var_8))));
                        var_20 = ((/* implicit */long long int) 13213352317146282520ULL);
                    }
                    for (unsigned char i_8 = 4; i_8 < 23; i_8 += 1) 
                    {
                        arr_35 [15] [15] [i_1] [i_8 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)147))))) / (arr_15 [i_1 - 1] [i_8 - 3] [i_8 - 4] [i_8 - 3])))) ? ((+(((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 1])))) : (((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) arr_19 [i_1] [i_1 - 1] [i_8 - 3] [i_8 - 2] [i_8 - 3]))))));
                        var_21 &= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 5233391756563269090ULL)))))));
                    }
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((0ULL) >= (13213352317146282525ULL))))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 2; i_10 < 22; i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */int) arr_4 [i_0])) ^ (max((((/* implicit */int) arr_0 [i_1])), (max((((/* implicit */int) arr_11 [i_1] [i_9])), (arr_16 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_41 [i_9] [i_9] [16ULL] [10] [i_9] |= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_7 [2] [i_1])) % (arr_27 [i_0] [i_1 - 1] [i_0] [i_1 - 3] [(unsigned char)2] [i_1])))));
                    }
                    for (long long int i_11 = 2; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1]))));
                            arr_50 [i_0] [i_1] [i_1] [i_11] [i_12] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0])) % (((/* implicit */int) arr_45 [i_0] [i_1 + 1] [i_9] [i_1]))))));
                            arr_51 [i_0] [i_12] [i_0] [i_0] |= ((/* implicit */unsigned long long int) arr_14 [i_1 + 1] [i_12] [i_1 + 1] [i_1]);
                            var_25 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((arr_25 [i_1] [i_9] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_12]) >> (((arr_25 [i_1] [i_0] [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_12]) - (804782223)))))) : (((/* implicit */_Bool) ((((arr_25 [i_1] [i_9] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_12]) + (2147483647))) >> (((((arr_25 [i_1] [i_0] [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_12]) - (804782223))) + (1441520586))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            arr_56 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_33 [i_11 - 2] [i_11 - 2] [i_1 - 1] [i_1] [i_1]);
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [20ULL] [20ULL] [i_9] [i_11 - 2] [i_11])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [16ULL] [i_9] [i_11] [i_11 + 1] [i_11]))) | (var_4))))))));
                            arr_57 [i_1] [i_1 - 1] [i_1 - 2] [i_1] [(unsigned char)20] [i_11] [i_13] = ((/* implicit */signed char) (~(var_5)));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_19 [2U] [i_1] [i_9] [2U] [i_11]))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_53 [i_14]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 24; i_16 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) (~(min((arr_60 [i_9] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 3]), (arr_60 [i_16] [i_16] [i_1 - 2] [i_1 + 1] [i_1 - 3])))));
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_10))));
                                arr_65 [i_0] [(signed char)21] [(signed char)21] [i_1 - 3] [i_1] [i_15] [i_16] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13213352317146282525ULL)) && (((/* implicit */_Bool) (unsigned short)39958))))), (var_6));
                                var_31 = ((/* implicit */int) min((var_31), ((-(((/* implicit */int) min((arr_2 [i_0] [i_1 - 2]), (((/* implicit */signed char) arr_6 [i_0] [i_15] [i_1 - 3] [i_15])))))))));
                                var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_1))))))) >= (5233391756563269090ULL)));
                            }
                        } 
                    } 
                    arr_66 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9] [i_1 - 2] [i_0]))));
                    arr_67 [i_1] = arr_1 [i_1 + 1];
                }
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) (~(18446744073709551615ULL)));
}
