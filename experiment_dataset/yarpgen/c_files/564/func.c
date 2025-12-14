/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/564
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((min((4294967286U), (((/* implicit */unsigned int) arr_1 [i_0 + 3])))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 - 1])))))));
                var_16 += ((/* implicit */short) (~(696602108U)));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_3 + 3] [i_1]))) != (((((/* implicit */_Bool) 0ULL)) ? (arr_3 [i_0 + 4] [8ULL]) : (arr_3 [i_1] [i_2])))));
                                var_17 -= ((/* implicit */unsigned int) ((((min((var_7), (((/* implicit */unsigned long long int) var_1)))) << (((min((8191U), (((/* implicit */unsigned int) var_12)))) - (124U))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-51))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 10; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_7 = 2; i_7 < 11; i_7 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (short)13)), (-135982592375751002LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5 - 3])) || (((/* implicit */_Bool) arr_0 [i_5 - 3])))))));
                                arr_18 [i_5] [i_5] [i_5] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) var_5);
                                arr_19 [i_5] [i_0] [i_1] [i_5] [i_5] [i_6] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [0U])) <= (((/* implicit */int) (unsigned char)3))));
                                arr_20 [i_0] [i_5] [i_7] = ((/* implicit */signed char) min((3398960258457480740ULL), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_14)))))))));
                                arr_21 [(unsigned short)8] [i_5] [i_5] [i_5] [(unsigned short)8] [(short)8] = ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [0U])) ? (((unsigned int) (~(var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_1] [i_5]))));
                            }
                            arr_22 [i_6] [i_5] [i_5] [i_0] = ((/* implicit */short) arr_6 [i_0] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        arr_25 [i_8] = ((/* implicit */unsigned short) ((min((arr_24 [i_8] [i_8]), (((/* implicit */unsigned long long int) var_15)))) << ((((-(arr_24 [i_8] [i_8]))) - (10990243257539849759ULL)))));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (unsigned int i_11 = 1; i_11 < 16; i_11 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_12 = 2; i_12 < 17; i_12 += 4) 
                        {
                            arr_37 [i_8] [i_9] [i_9] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_8] [i_8]))) + (var_10))) - (883404626U)));
                            var_19 |= ((/* implicit */unsigned int) (-(var_9)));
                            arr_38 [i_9] [i_9] [i_12] = ((/* implicit */short) var_15);
                        }
                        for (short i_13 = 1; i_13 < 17; i_13 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(min((3455806919U), (((/* implicit */unsigned int) (unsigned short)0))))))))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned int) ((unsigned long long int) arr_33 [i_13 + 1] [i_11 + 1]))))));
                            arr_43 [i_8] [i_13] [i_8] [i_11] = ((/* implicit */unsigned char) arr_36 [i_11 + 1] [i_9] [1ULL] [i_11] [i_13]);
                            var_22 ^= ((/* implicit */unsigned short) var_4);
                            var_23 = (~(min((491686239U), (((/* implicit */unsigned int) (short)19142)))));
                        }
                        for (short i_14 = 1; i_14 < 17; i_14 += 1) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */unsigned int) min(((+(((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), (arr_39 [i_8] [i_9])))))), (((/* implicit */int) arr_41 [i_8] [i_10] [i_11 + 1] [i_11 + 1] [(short)3]))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_31 [i_14 + 1] [i_14 + 1])) != (((/* implicit */int) ((signed char) var_11))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30954))) | (arr_30 [i_8] [i_9] [i_9] [i_8]))), ((~(var_0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14])) ? (((/* implicit */int) arr_36 [i_14 - 1] [0] [i_14] [i_14 - 1] [i_14])) : (((/* implicit */int) arr_36 [i_14 + 1] [i_14] [i_14] [i_14 - 1] [i_14 - 1]))))))))));
                            var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_31 [i_8] [i_9])), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_45 [i_8] [i_9] [i_9] [i_9] [i_10])) : (((/* implicit */int) arr_45 [i_8] [i_9] [i_10] [i_11 + 2] [i_11 + 2]))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            var_27 += ((/* implicit */long long int) var_15);
                            arr_50 [i_8] [i_9] [i_9] [i_11] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_9] [i_11 + 2])) ? (arr_30 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_15]) : (arr_28 [i_15] [i_15] [i_11 + 2])))) ? ((-(arr_30 [i_11 - 1] [i_11 - 1] [i_10] [i_11 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_34 [i_11 + 2] [i_11] [i_11] [i_11] [i_11 - 1]) <= (((/* implicit */unsigned long long int) arr_28 [i_8] [i_9] [i_11 + 1]))))))));
                        }
                        for (long long int i_16 = 1; i_16 < 14; i_16 += 4) 
                        {
                            arr_53 [i_8] [i_9] [i_9] [i_16] [i_8] [i_16] = 4095U;
                            arr_54 [i_16] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_3)))) ? (4068830976U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_16] [i_9] [i_10] [i_16] [i_9])))))) ? (arr_42 [(short)8] [i_8] [i_9] [i_10] [i_11 + 2] [i_10] [i_16]) : (min((((498499815U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8]))))), (((((/* implicit */_Bool) arr_31 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_30 [6] [i_10] [i_10] [6]))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 2; i_17 < 16; i_17 += 3) 
                        {
                            var_28 -= ((/* implicit */unsigned short) arr_55 [i_17 - 1] [2LL] [i_11 - 1] [i_11 + 1]);
                            var_29 = ((/* implicit */short) (+(var_7)));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_14))));
                            var_31 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_59 [i_9] [(unsigned char)2] [i_11] [(unsigned char)2])), (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((var_5) - (1466376704096224660LL)))))), (9074231074588576468ULL)))));
                            var_32 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_45 [i_10] [i_8] [i_10] [i_9] [i_8])))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            arr_60 [i_8] [i_18] [i_18] [i_11] [i_18] = ((((/* implicit */_Bool) arr_59 [i_18] [i_8] [i_10] [i_8])) ? (1814439672U) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_56 [i_8] [i_9] [i_10] [4U] [i_11 - 1] [i_18])) ? (((/* implicit */int) (short)1249)) : (((/* implicit */int) var_11))))))));
                            arr_61 [i_18] [i_10] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_57 [i_18] [i_11 - 1] [i_8] [i_11] [i_11] [i_11] [i_8])) < (arr_44 [i_8] [i_11 - 1] [i_8] [i_11] [i_11 - 1]))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 4) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            {
                arr_66 [i_19] = (short)8099;
                var_33 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)196))));
                var_34 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_4))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_19] [(unsigned char)5] [i_19] [i_19] [(signed char)5])) ? (((/* implicit */int) arr_41 [i_19] [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) arr_41 [i_20] [i_20] [i_19] [i_19] [i_19]))))) : (((((/* implicit */_Bool) 3932160U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) : (65535U)))));
            }
        } 
    } 
}
