/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60826
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_3 - 1] [i_1] [i_1] [(signed char)2] [i_1 + 1] [i_1 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            arr_13 [i_1] [10ULL] [i_2] [3ULL] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_3 - 2] [i_1] [i_1] [i_1 + 1]))));
                            var_20 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_3 + 1] [i_2] [i_3] [i_3])) | (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                            var_22 = ((/* implicit */unsigned char) ((unsigned long long int) arr_5 [i_1 - 3] [i_1 + 1] [i_3 - 4]));
                        }
                        var_23 = ((/* implicit */_Bool) ((arr_2 [i_0]) + (((/* implicit */long long int) (-2147483647 - 1)))));
                    }
                    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) -5426848)), (arr_4 [i_1] [i_1 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 3])) && (((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1 - 2])))))));
                        var_25 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((arr_4 [i_1] [i_1 - 2]) << (((((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5])) + (2147483647))) << (((((var_9) + (1114894604))) - (20)))))) ? (((((/* implicit */int) arr_14 [i_1] [i_2] [i_1])) >> (((/* implicit */int) var_4)))) : (((arr_8 [i_5] [i_2] [i_1 - 3] [i_1 - 3] [i_0] [i_0]) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_5])) : (((/* implicit */int) arr_15 [i_5] [i_5] [i_2] [i_1] [i_0]))))))))) : (((/* implicit */unsigned char) ((arr_4 [i_1] [i_1 - 2]) << (((((/* implicit */_Bool) ((((((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5])) - (2147483647))) + (2147483647))) << (((((var_9) + (1114894604))) - (20)))))) ? (((((/* implicit */int) arr_14 [i_1] [i_2] [i_1])) >> (((/* implicit */int) var_4)))) : (((arr_8 [i_5] [i_2] [i_1 - 3] [i_1 - 3] [i_0] [i_0]) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_5])) : (((/* implicit */int) arr_15 [i_5] [i_5] [i_2] [i_1] [i_0])))))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_20 [i_0] [i_1] [i_2] = max((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15))))) + (((((/* implicit */_Bool) 8090287979032500735ULL)) ? (var_9) : (1047552))))), (((/* implicit */int) var_12)));
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [10U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))) | (18446744073709551615ULL)));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (min((arr_16 [i_0] [i_1 - 2] [i_0] [i_1 - 1] [i_7 + 1]), (arr_16 [i_0] [i_1 - 1] [i_1] [i_1 - 2] [i_7 + 2]))) : (min((arr_16 [i_1 + 1] [i_1 - 3] [4U] [i_1 - 2] [i_7 + 4]), (arr_16 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_7 - 1])))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_23 [i_1 - 2] [i_1] [i_1 - 1] [i_7 + 2]))));
                        var_29 *= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [6LL] [i_0])))) + (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_16 [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_7] [(_Bool)0]))))))));
                        arr_25 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) -1815420563000805006LL)) ? (min((((/* implicit */int) (_Bool)1)), (arr_7 [i_0] [9] [i_2] [i_7] [i_0]))) : (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2] [i_7 + 2] [i_7] [i_7 + 3])) ? (((/* implicit */int) (signed char)-38)) : (arr_17 [i_0] [i_0])))))), (max((max((((/* implicit */long long int) arr_21 [i_0] [i_1 - 1] [i_2] [i_7] [i_2] [i_1])), (arr_1 [i_2] [i_2]))), (min((((/* implicit */long long int) (_Bool)1)), (-1815420563000805006LL)))))));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_1] = arr_24 [i_0];
                        var_30 = ((/* implicit */_Bool) (-((-(((arr_27 [i_0]) / (((/* implicit */int) arr_18 [i_1] [i_1] [i_2] [i_1] [i_1] [i_8]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 4) 
                        {
                            arr_32 [i_8 + 1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (arr_23 [(signed char)0] [(signed char)0] [i_8] [i_9])))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_8 [i_8] [i_8 + 2] [i_8] [i_8 + 3] [i_8 + 2] [(unsigned char)3])));
                            var_31 = ((/* implicit */unsigned long long int) var_18);
                            var_32 = ((/* implicit */unsigned long long int) ((-1815420563000805002LL) + (((/* implicit */long long int) ((-1499785574) + (((/* implicit */int) (_Bool)0)))))));
                            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1 - 2]))));
                        }
                        arr_33 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((-1695174091), (((/* implicit */int) (unsigned char)151)))))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) arr_7 [i_0] [i_1 - 2] [i_0] [i_10] [i_10]);
                        var_35 += arr_15 [i_0] [i_1] [4] [i_10] [i_0];
                    }
                    var_36 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_1 [i_1 - 2] [i_1 - 3]), (arr_1 [i_1 - 3] [i_1 - 3]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_42 [i_0] [i_0] [3LL] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1] [(unsigned char)3] [i_1 - 2])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1 + 1])))) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1 - 3] [i_1 - 2])) <= (((/* implicit */int) arr_5 [i_1 - 3] [i_1] [i_1 - 3])))))));
                                var_37 = ((/* implicit */int) max((var_37), (arr_27 [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (min((-1815420563000804998LL), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 16982542313179158510ULL))))))) + (min(((+(10ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (5426847))))))));
    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) var_11))))) : (((var_13) | (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
}
