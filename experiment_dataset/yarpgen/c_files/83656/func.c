/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83656
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
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_1] |= ((/* implicit */unsigned char) -4096);
                var_15 = ((/* implicit */unsigned char) arr_0 [i_0]);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) != (4109386865U)))) > (arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_3 + 2]))) ? (5003529436274442198LL) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_13))))))));
                        var_17 = ((/* implicit */unsigned long long int) arr_8 [(unsigned char)8]);
                        arr_12 [i_0] [i_0] [i_0] [i_2] [13] = ((/* implicit */int) min((((/* implicit */signed char) ((arr_8 [i_0 + 1]) >= (185580428U)))), (arr_4 [4U] [i_2] [i_1])));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (short)6484))) && (arr_0 [i_0])));
                        var_19 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [5] [i_2]))));
                    }
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */int) arr_4 [i_0] [i_1] [15LL]);
                        arr_16 [13LL] [i_4] [i_4] [i_4] [i_4 + 1] [i_4] |= ((/* implicit */int) ((unsigned int) ((unsigned char) arr_11 [i_0] [i_0 - 2] [i_0 + 1])));
                        var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_3 [i_4 - 2] [i_0 + 1])))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0 + 2] [12LL]))) : (((((((/* implicit */_Bool) arr_8 [i_0])) && (((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])))) ? (((int) arr_14 [i_0] [11] [i_2] [i_4] [i_4])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) == (arr_8 [i_0]))))))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_3 [i_0 + 3] [i_0 + 1]), (arr_3 [i_0 + 1] [i_0 + 1])))))))));
                            var_23 -= ((/* implicit */unsigned long long int) (unsigned char)236);
                            var_24 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1] [i_2])) || ((!((!(((/* implicit */_Bool) arr_13 [7] [7] [i_5]))))))));
                            var_25 ^= ((/* implicit */int) var_7);
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 3; i_6 < 15; i_6 += 2) 
                        {
                            var_26 -= ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_6 - 2] [i_4 + 1] [i_2] [i_2] [i_0])) / (((/* implicit */int) arr_21 [i_4] [i_4 + 1] [i_4] [i_4] [i_4]))));
                            var_27 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_4 + 2] [i_0 - 3] [i_6 + 1] [(unsigned char)12]))));
                        }
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned int) var_10);
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) 4109386865U);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            arr_28 [(short)6] [7U] [i_2] [(unsigned char)10] [7U] = ((/* implicit */short) (+(((/* implicit */int) ((short) var_11)))));
                            var_29 ^= ((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_4 + 1] [i_8]);
                        }
                    }
                    var_30 &= ((/* implicit */unsigned int) ((short) arr_17 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]));
                    var_31 &= ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)113))))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_32 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 3] [i_0] [i_0 + 3])))))) > (((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0 - 3] [i_0] [i_0 + 2] [i_0 - 3] [i_0 - 3] [i_0 - 2])) ? (arr_27 [i_0] [i_0 + 1] [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (arr_27 [(unsigned short)6] [i_0 + 3] [i_0] [i_0 - 2] [i_0 + 2] [i_0] [i_0 + 1])))));
                        arr_32 [i_0 + 3] [i_0 + 3] [i_1] [i_2] [i_2] = ((/* implicit */int) var_9);
                        var_33 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_29 [i_0 + 2] [i_2] [i_9])) ? ((+(((/* implicit */int) arr_21 [9ULL] [i_1] [8] [i_1] [9ULL])))) : ((+(((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_19 [i_0 + 3] [i_0 + 4])) : (((/* implicit */int) arr_19 [i_0 - 2] [i_0 - 1]))))));
                    }
                    arr_33 [i_1] |= ((/* implicit */_Bool) (-(((unsigned long long int) arr_15 [i_1] [i_1] [i_0 - 2]))));
                }
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((short) ((((arr_25 [i_0] [i_0] [i_1] [i_1] [i_10]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))))) ? (((/* implicit */int) arr_34 [i_0] [i_0])) : (((/* implicit */int) max((arr_7 [i_0] [(signed char)7] [i_10]), (((/* implicit */short) (unsigned char)158)))))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_11 = 4; i_11 < 13; i_11 += 2) 
                    {
                        arr_39 [i_10] [i_1] [i_10] [i_11] [i_1] [i_10] = ((/* implicit */unsigned char) arr_29 [i_10] [i_10] [i_10]);
                        arr_40 [i_0] [i_1] [i_10] [i_11] [9U] |= (-(arr_36 [16ULL] [i_1] [i_10] [i_0 - 2] [i_11 - 1] [i_10]));
                        arr_41 [i_0] [i_1] [0ULL] [0ULL] [i_0] [i_10] = ((int) (_Bool)0);
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 2) /* same iter space */
                    {
                        arr_46 [i_12] [i_12] [i_12 + 1] = ((/* implicit */long long int) ((unsigned int) arr_20 [7LL] [i_1] [i_10] [i_12 + 3] [i_12]));
                        var_35 -= ((/* implicit */short) (~(((int) 4095))));
                    }
                    for (unsigned long long int i_13 = 3; i_13 < 13; i_13 += 2) /* same iter space */
                    {
                        arr_51 [i_0 + 4] [(_Bool)1] [i_13] [i_10] [i_13] = ((/* implicit */_Bool) min((arr_45 [i_0 + 3] [i_0 + 3] [i_13 + 1] [i_13 + 2]), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_49 [i_13] [i_13] [i_13] [i_0])), (((379561440) >> (((/* implicit */int) arr_0 [i_1])))))))));
                        var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0 + 2] [i_0]))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_37 -= ((/* implicit */short) (signed char)52);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            arr_58 [i_0 - 2] [i_0 + 3] [i_0 + 3] [i_10] [i_10] [i_14] [i_15] = ((/* implicit */short) ((unsigned char) (signed char)94));
                            arr_59 [i_1] [i_1] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_0 + 3] [i_1] [i_15]))));
                            var_38 *= (-(arr_20 [i_0] [14] [i_10] [i_14] [i_0 + 4]));
                        }
                        /* vectorizable */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) 1444360983U)) | (arr_25 [i_0 + 4] [i_1] [i_10] [i_1] [i_1])))))));
                            var_40 += ((/* implicit */long long int) ((unsigned int) arr_20 [10U] [0] [0ULL] [i_14] [i_0 - 3]));
                            var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_0 - 3])) || (((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [i_0 - 2]))));
                            arr_63 [(signed char)2] [i_1] [i_14] [i_1] [i_16] [(short)7] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_0 + 3] [i_0 + 3] [i_0] [i_0])) ? (arr_53 [12U] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) var_13)))))));
                            var_42 ^= ((/* implicit */unsigned int) ((_Bool) arr_3 [i_0 - 2] [i_0 - 3]));
                        }
                        var_43 += ((/* implicit */short) (-(arr_11 [i_14] [(_Bool)1] [i_0 - 2])));
                        var_44 -= ((/* implicit */short) 4281989031U);
                        var_45 ^= ((/* implicit */_Bool) arr_52 [i_0] [(_Bool)1] [i_1] [i_10] [(_Bool)1] [7ULL]);
                    }
                    var_46 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_61 [i_0 + 1] [i_0 + 4]))))) ? (((/* implicit */int) max((arr_1 [i_0 - 1] [i_0 + 1]), (arr_61 [i_0 + 1] [i_0 + 2])))) : (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 4]))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_17 = 0; i_17 < 17; i_17 += 2) 
    {
        for (short i_18 = 0; i_18 < 17; i_18 += 2) 
        {
            {
                arr_69 [i_17] [i_17] = ((/* implicit */unsigned char) (-((~(arr_35 [i_18] [i_18] [(signed char)8])))));
                var_47 += ((/* implicit */long long int) (~((~(arr_8 [i_17])))));
                var_48 ^= ((/* implicit */short) min(((-(((/* implicit */int) arr_34 [i_18] [i_17])))), (((/* implicit */int) ((((/* implicit */int) arr_34 [i_17] [i_18])) != (((/* implicit */int) arr_34 [i_17] [i_18])))))));
            }
        } 
    } 
}
