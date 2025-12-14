/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9604
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
    var_19 += ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned char) (~(((arr_4 [6U]) | (arr_4 [0U])))));
                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)187))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (851280083U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))));
                                var_23 = ((/* implicit */short) arr_3 [i_2] [5] [i_2]);
                                arr_15 [i_2] [i_2] [i_2] [i_0] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 3] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0 - 1] [i_0]))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9716))) | (arr_7 [(_Bool)1] [i_1] [i_0]))) | (arr_3 [i_2 + 1] [i_2 + 2] [i_2 - 1])));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    arr_20 [i_0] [i_1] [(unsigned short)9] [i_1] = ((/* implicit */signed char) ((arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 1]) % (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2])));
                    var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_5 + 3] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_5 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1] [i_0]))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_6 + 1] [i_6])) - (((/* implicit */int) arr_9 [i_0 - 3] [(unsigned short)7] [i_0 - 3] [i_6 + 1]))))) ? (((int) arr_9 [(_Bool)1] [(_Bool)1] [i_0 - 2] [i_6 + 1])) : ((+(60)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_28 [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_27 [i_7] [i_7] [(unsigned short)11] [i_0] [i_7]))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((var_6) ? (arr_3 [(unsigned short)6] [i_7] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) arr_21 [i_6 + 1] [(_Bool)1] [i_0] [i_6]))));
                            var_27 = ((/* implicit */unsigned short) (unsigned char)187);
                            arr_29 [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_0] = ((/* implicit */unsigned short) 126976ULL);
                        }
                        arr_30 [(unsigned char)11] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_13 [(_Bool)1] [1] [i_6 + 1]);
                        var_28 &= ((/* implicit */signed char) ((_Bool) max((var_18), (((/* implicit */unsigned short) arr_5 [i_0] [11] [i_0 + 1])))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((_Bool) arr_32 [i_0] [i_0] [i_0] [i_6 + 1] [(unsigned short)0] [i_9]));
                        var_30 = ((/* implicit */unsigned char) ((long long int) ((int) var_7)));
                        arr_33 [i_0] [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_32 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 1; i_10 < 11; i_10 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) ((_Bool) arr_34 [i_0 - 3] [i_6 + 1]));
                            arr_36 [i_0 - 1] [i_1] [i_9] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                            arr_37 [i_0] [i_1] [i_1] [(unsigned short)6] [i_9] [i_0] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)55570))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_13 [i_6 + 1] [i_10 - 1] [i_0 + 1])));
                        }
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6] [i_11] [i_6] [i_6 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163))))) : (((((/* implicit */_Bool) arr_18 [i_11] [i_11] [i_11] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_9] [i_11])) : (((/* implicit */int) arr_8 [i_9] [i_11] [i_11] [i_0]))))));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_11] [i_11] [i_0] [i_0] [i_0] [i_0 + 1]))))))));
                        }
                    }
                    var_34 = ((/* implicit */short) (((-((-(((/* implicit */int) var_13)))))) >> (((((/* implicit */_Bool) -115429554)) ? (0ULL) : (((/* implicit */unsigned long long int) 0U))))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        arr_45 [i_0] [i_1] [i_12] [i_13] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) arr_44 [i_0] [i_0] [i_12] [i_12] [i_12])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)0)) : (-448917706))))))));
                        var_35 = ((/* implicit */short) (+((-(((/* implicit */int) arr_11 [(unsigned short)7] [i_0] [i_0 - 1] [i_0 - 1] [i_13 + 2]))))));
                    }
                    for (short i_14 = 2; i_14 < 10; i_14 += 1) 
                    {
                        arr_49 [0] |= ((/* implicit */short) ((var_9) ? (((((/* implicit */_Bool) min((arr_21 [i_0 - 1] [i_0 - 1] [6U] [(unsigned char)4]), (((/* implicit */unsigned int) (unsigned char)66))))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0] [(short)8] [(short)8] [(short)8] [(short)8] [i_14])))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (115429547) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) var_11))))) % (arr_46 [10U] [10U])))) <= (((((((/* implicit */unsigned long long int) var_15)) / (18446744073709551606ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_44 [(signed char)4] [i_14] [(_Bool)1] [i_1] [(signed char)4]))))))))))));
                            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_0 [i_0 - 2]), (((/* implicit */unsigned short) (unsigned char)152)))))));
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_14 - 1] [6ULL] [i_15])))), (var_7)))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        var_38 &= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_44 [4LL] [i_12 - 1] [i_16 - 1] [i_0] [i_0]))))));
                        arr_56 [i_0] = min(((~(18446744073709551600ULL))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -115429550)) : (0U)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_61 [i_0] [i_1] [(_Bool)0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (signed char)94)))) * (((/* implicit */int) (signed char)(-127 - 1)))));
                            var_39 = ((/* implicit */int) (+(arr_7 [i_0 - 3] [i_1] [i_17])));
                            var_40 ^= ((/* implicit */_Bool) ((arr_21 [i_0 - 3] [8] [4U] [i_16 - 1]) % (arr_21 [i_0 - 3] [i_1] [(unsigned short)8] [i_16 - 1])));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))));
                            arr_62 [i_0 + 1] [i_0] [i_0] [10] [i_0 + 1] [i_0] [7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)60221))));
                        }
                    }
                    arr_63 [i_0] [i_0] = var_4;
                    arr_64 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_41 [i_0 + 1] [i_0 - 2])), ((unsigned short)17654))))));
                    var_42 = ((/* implicit */unsigned char) min((var_42), (((unsigned char) max((arr_11 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 - 3]), (arr_11 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                }
            }
        } 
    } 
}
