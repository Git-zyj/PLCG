/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96577
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
    var_16 = ((/* implicit */int) max((var_16), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_8))))) : (((((/* implicit */int) var_2)) << (((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (arr_1 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_4 [(unsigned short)8])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */int) min((var_14), (var_14)))) >> (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_15))))))) : (((((/* implicit */int) arr_3 [i_1 + 2])) - (((/* implicit */int) arr_3 [i_1 - 2]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((min((arr_1 [(unsigned short)11] [i_1]), (((/* implicit */long long int) var_1)))) < (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_6) ? (arr_8 [i_0] [i_0] [i_1] [i_1] [i_3] [(signed char)9]) : (((/* implicit */int) var_15))))), (((unsigned long long int) arr_8 [i_0 - 1] [i_0] [i_1] [i_2 + 2] [i_1] [i_4]))))))))));
                            }
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                arr_13 [(unsigned short)12] [i_3] [i_5] [(unsigned short)10] [i_5] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3]))));
                                arr_14 [i_0] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))));
                            }
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [(unsigned short)17] [(signed char)15])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) : (arr_2 [i_6])));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2] [i_1 + 3] [i_1] [i_1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_6])) : (arr_10 [i_0] [i_1] [i_2] [i_1] [i_6] [i_6] [i_6]))))));
                            }
                            for (unsigned short i_7 = 1; i_7 < 19; i_7 += 1) 
                            {
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) var_13))) | (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_5 [i_3] [i_3] [i_2 - 1] [6]))))))))));
                                var_25 ^= ((arr_16 [i_0] [i_0] [i_0 - 2] [i_0] [(short)14]) ^ (((/* implicit */int) var_9)));
                                var_26 = ((/* implicit */long long int) arr_17 [i_0] [9U] [i_0] [i_3] [i_7 + 2]);
                                var_27 = arr_7 [i_0] [i_0];
                                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_4))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned short i_11 = 1; i_11 < 14; i_11 += 4) 
                    {
                        {
                            var_29 = ((((min((arr_27 [i_8 - 1] [i_9] [i_10]), (((/* implicit */unsigned int) arr_3 [i_11 + 2])))) << (((/* implicit */int) var_13)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) var_8)), (-4961870992433184359LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) -7800133373078126134LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))))))));
                            var_30 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [(short)16] [i_10] [(short)16])) ? (((/* implicit */int) var_8)) : (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) min((var_2), (arr_3 [i_10])))) : (((/* implicit */int) var_13))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
                            {
                                arr_34 [i_9] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_4)), (arr_15 [i_8] [i_9] [i_8] [i_9] [i_12])))), (min((1073741823U), (((/* implicit */unsigned int) var_2))))))) ? (((/* implicit */long long int) max((arr_26 [i_12] [i_11 + 2] [i_9] [i_9]), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_11])) : (((/* implicit */int) var_9))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_14))) | (arr_23 [i_9] [i_10] [7U]))), (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_8] [i_9] [i_10] [i_11] [i_8])) > (-1125005917))))))));
                                arr_35 [i_8] [i_9] [i_8] [0] [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_31 [i_8] [i_9] [5LL] [i_11] [i_8] [i_11]))))))) ? (((/* implicit */int) ((max((((/* implicit */int) (short)4726)), (2147483647))) > (((/* implicit */int) var_7))))) : (min((((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) arr_19 [i_9])) ? (((/* implicit */int) var_6)) : (arr_26 [i_8] [i_9] [i_10] [i_11])))))));
                                arr_36 [i_10] [i_11] [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */int) min((var_11), (var_14)))) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-2147483647) : (((/* implicit */int) arr_4 [i_8 - 1]))))) ? (((((/* implicit */int) var_7)) + ((-2147483647 - 1)))) : (((/* implicit */int) ((_Bool) var_10)))))));
                            }
                            for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
                            {
                                arr_39 [i_8] [i_8] [(unsigned char)0] [i_11] [i_13] [i_13] [i_8] &= ((/* implicit */short) var_1);
                                arr_40 [10U] [10U] [(unsigned short)14] [i_10] [i_11 + 2] [i_9] = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) arr_0 [i_10] [i_10])), (min((arr_6 [i_8] [i_10] [i_11] [i_13]), (((/* implicit */unsigned short) arr_9 [4] [4] [i_11 + 1] [4] [i_9] [i_8] [4])))))), (((/* implicit */unsigned short) min((arr_19 [i_8 - 1]), (arr_24 [i_9]))))));
                                arr_41 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8] [i_9] [i_10] [i_8] [i_8 - 1])) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) (((~(((/* implicit */int) var_2)))) != (((((/* implicit */int) arr_20 [i_10])) & (((/* implicit */int) var_12)))))))));
                            }
                            arr_42 [i_9] [i_11] = ((/* implicit */signed char) var_12);
                            arr_43 [i_9] [i_9] [i_10] [i_9] = ((/* implicit */int) var_2);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_52 [i_8] [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((unsigned short) var_0))), (arr_33 [i_16] [i_9] [i_14] [i_9] [i_8]))), (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_15)), (arr_27 [i_9] [i_9] [i_15]))))))));
                                arr_53 [i_15] [i_9] [i_14] [i_14] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_8 - 1] [i_8 - 1])) ? (var_3) : (((/* implicit */int) var_9)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_2))))));
                                arr_54 [i_8] [i_8] [i_14] [i_15] [(unsigned short)6] [i_15] [i_14] &= max(((~(((/* implicit */int) var_14)))), (((/* implicit */int) arr_28 [i_15])));
                                var_31 = ((/* implicit */int) min((var_11), ((signed char)-1)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    for (int i_18 = 1; i_18 < 14; i_18 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) (((-((+(var_3))))) << (((/* implicit */int) var_6))));
                            arr_60 [i_8] [i_8] [i_8] [i_9] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_2), (var_15)))), (((((/* implicit */_Bool) arr_22 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_8 - 1] [i_18] [i_18] [i_9]))) : (arr_12 [i_17] [i_18 + 1] [i_9])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */int) var_8)) - (((/* implicit */int) var_12)))))) == (var_3)));
}
