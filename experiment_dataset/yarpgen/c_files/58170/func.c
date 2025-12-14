/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58170
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
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)15836)) == (((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551604ULL)) && (((/* implicit */_Bool) arr_3 [i_0 - 1]))))) : ((-(arr_3 [i_2])))));
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 1])) : (14ULL)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_3 [i_0 + 1]))) : (((/* implicit */int) (short)15857)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
                            arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) ((unsigned char) (unsigned char)0))) : (((/* implicit */int) (unsigned char)111))));
                            arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = var_11;
                            arr_16 [i_0] [i_0] [17U] [i_2] [i_0] [(unsigned short)6] [i_0] = ((/* implicit */unsigned short) var_5);
                        }
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((unsigned int) 2147483647)) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_2])) % (((/* implicit */int) arr_1 [i_1])))))))), (((min((var_7), (((/* implicit */unsigned int) var_4)))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)32760))))))))));
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_9 [i_1 + 1] [i_0])) + (((/* implicit */int) max((arr_11 [i_0] [i_0] [i_0] [5ULL] [i_0]), (((/* implicit */unsigned short) arr_4 [i_1 - 1] [(signed char)14] [i_0])))))))));
                        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_2]), (((/* implicit */unsigned long long int) max((var_11), (arr_9 [i_0] [i_2]))))))) ? (((((/* implicit */_Bool) 1853223125)) ? ((~(((/* implicit */int) (unsigned char)142)))) : (((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_2])))) : (((/* implicit */int) (unsigned short)4747))));
                        arr_20 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0 + 1]))))) ? (((/* implicit */int) min((var_2), (arr_6 [i_0 - 1])))) : ((-(((/* implicit */int) (short)17183))))));
                    }
                    for (int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */unsigned int) (unsigned short)38136);
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned long long int) min((((arr_17 [i_0] [i_1] [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)118)) : (arr_3 [i_1]))), (((/* implicit */int) arr_22 [i_0] [i_0] [(unsigned short)8] [i_6]))))))));
                        /* LoopSeq 3 */
                        for (short i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((var_6) ? (min((((/* implicit */unsigned int) var_2)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_19 [i_2] [i_2] [15ULL] [i_2]))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_0 - 1])) ? (2344585295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_6] [i_2])) < (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_22 [i_0] [(unsigned char)5] [i_0] [i_0]))))))) : (((/* implicit */int) max((arr_23 [i_0] [i_1] [i_2] [i_6] [i_1]), (((/* implicit */unsigned char) (signed char)-13))))))))));
                            arr_28 [i_0] [i_1 - 2] [i_1 - 2] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_0 + 1] [i_1 - 1] [i_0] [i_2] [i_2]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0 - 1] [i_1 - 2] [i_0] [i_7] [i_7]))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (arr_12 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 1] [i_1 - 2] [i_0] [i_0 - 1] [i_1])))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min(((~(arr_12 [i_2] [i_0 + 1]))), (min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_2)), (arr_22 [i_0] [(unsigned short)12] [i_2] [i_6])))), (4024437477U))))))));
                            arr_29 [i_0] [i_0] [i_0] [i_6] [i_0] = var_5;
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_22 -= ((/* implicit */short) ((unsigned char) (unsigned char)9));
                            arr_33 [14U] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */int) ((short) (+(((/* implicit */int) (_Bool)0)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_6] [i_0])) && (((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_0] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(arr_1 [i_0 - 1])))), (arr_27 [i_0] [i_1] [i_2] [i_6] [i_9]))))));
                            var_23 -= ((short) ((unsigned char) arr_35 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [(unsigned short)9] [i_1 - 2] [(unsigned short)3]));
                        }
                        var_24 *= (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((8388608) * (((/* implicit */int) var_6))))) : (var_5))));
                    }
                    var_25 += ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_18 [i_2]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0 + 1] [i_0 - 1])) || (((/* implicit */_Bool) var_5)))))))) / (((int) min((arr_19 [i_0] [i_0] [i_1] [(unsigned short)1]), (((/* implicit */long long int) (signed char)2)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_26 *= ((/* implicit */unsigned long long int) (unsigned char)132);
                        arr_40 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_26 [i_0 + 1] [i_1] [i_0 + 1] [i_1 + 1] [(unsigned char)10] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) arr_32 [i_0] [i_1] [i_2] [i_11] [i_0]);
                        arr_43 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_35 [i_0] [i_0] [i_2] [i_2] [i_11] [i_0] [i_0])) - (((/* implicit */int) (_Bool)0)))));
                        var_28 *= ((((/* implicit */int) arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_1])) == (((/* implicit */int) arr_23 [i_0 - 1] [(short)11] [i_0 + 1] [i_0] [i_0 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 16; i_12 += 2) 
                    {
                        for (int i_13 = 2; i_13 < 17; i_13 += 1) 
                        {
                            {
                                arr_49 [i_0] [i_1 - 2] [i_0] [0ULL] [i_1 - 2] [i_2] [i_2] = ((/* implicit */int) min((((arr_21 [i_0] [i_13 - 1] [i_12 - 2] [i_12 - 2]) & (arr_21 [i_0 + 1] [i_13 - 2] [i_12 - 1] [3]))), (((/* implicit */unsigned int) 1394667441))));
                                arr_50 [i_0] [i_12] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
                                arr_51 [i_0] [i_13] [i_12] [i_12] [(_Bool)1] [i_0 + 1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(0U))) << (((/* implicit */int) arr_48 [i_0] [i_13] [i_13 - 1] [i_13] [i_13 + 1]))))) ? (((/* implicit */int) arr_45 [i_1 - 2] [i_12 + 2])) : (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_12] [i_0] [i_12 + 1] [i_12 + 1] [i_0 + 1] [i_0]))))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(0U))) << (((((/* implicit */int) arr_48 [i_0] [i_13] [i_13 - 1] [i_13] [i_13 + 1])) - (127)))))) ? (((/* implicit */int) arr_45 [i_1 - 2] [i_12 + 2])) : (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_12] [i_0] [i_12 + 1] [i_12 + 1] [i_0 + 1] [i_0])))))))));
                            }
                        } 
                    } 
                    arr_52 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) min(((~(arr_19 [i_1] [i_1 + 1] [i_1 - 1] [i_1]))), (((/* implicit */long long int) arr_25 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))));
                }
            } 
        } 
    } 
}
