/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86448
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
    var_18 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_13))))) : (((/* implicit */int) (!(var_8)))))), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_14))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(arr_4 [i_0] [1LL] [(unsigned short)7])))) ? (((arr_6 [i_2] [i_2] [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) != (((/* implicit */unsigned long long int) max((arr_3 [i_2] [i_1] [i_0]), (((/* implicit */long long int) arr_8 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_1] [i_0] [i_3] [i_4] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3 + 2] [i_4])) + (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))) : (((((/* implicit */_Bool) var_16)) ? (var_0) : (arr_2 [i_4])))))) ? (((/* implicit */int) max((arr_11 [i_3] [i_3 + 2] [i_3 - 1] [i_3] [i_3]), (arr_11 [i_3] [i_3] [i_3 - 2] [i_3] [i_3])))) : ((+(((/* implicit */int) arr_11 [(short)13] [i_3 + 1] [i_3] [i_3] [i_3 + 2]))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_4 [i_0] [(signed char)14] [i_4])))))) ? ((+(((/* implicit */int) ((short) var_8))))) : (max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_11 [(signed char)14] [i_1] [i_2] [i_0] [i_0])), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_0)))))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    arr_16 [i_0] [i_1] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) max((var_2), (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_5] [i_5])))))), ((+(arr_6 [i_0] [i_0] [i_1] [i_5])))));
                    var_22 = ((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_23 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_1 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_5]), (((/* implicit */unsigned char) ((var_5) || (var_4)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_0])) ? (arr_14 [2U] [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_5] [(short)12] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(short)2] [i_0] [i_0] [i_1] [i_5] [(unsigned char)5] [i_7])))))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((var_8) ? (arr_18 [i_7] [i_6] [i_5] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_6] [i_1] [(signed char)11]))))), (((/* implicit */long long int) max((((int) arr_12 [i_0] [i_1] [i_1])), (((/* implicit */int) max((var_16), (((/* implicit */short) arr_17 [i_0] [i_1] [i_5] [i_6] [i_7] [i_0])))))))))))));
                                var_25 = ((/* implicit */signed char) (~(max((arr_20 [i_0] [i_1] [i_1] [i_6] [(_Bool)1] [i_7]), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_17 [i_0] [(_Bool)1] [i_1] [i_5] [i_6] [(short)3])), (arr_1 [i_0]))))))));
                                var_26 = ((/* implicit */signed char) min((var_26), (max((((signed char) (~(arr_3 [i_0] [i_1] [(unsigned char)10])))), (((/* implicit */signed char) var_5))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_21 [i_5] [i_1] [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [4U] [i_1] [i_1] [i_0] [i_1] [(signed char)1] [(signed char)2])) : (((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [0ULL] [i_5] [i_5] [(unsigned char)13])))), (((((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] [i_5])) << (((((/* implicit */int) arr_21 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) - (57236)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8] [i_5] [i_1] [i_0]))) * (var_2)))))) != (max((max((var_2), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_5)), (arr_21 [(short)11] [i_0] [i_1] [i_1] [i_5] [(unsigned short)3] [i_1])))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_1] [(_Bool)1] [i_8 + 1] [i_8] [i_1] = ((/* implicit */short) arr_17 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]);
                            arr_29 [i_9] [i_8] [i_1] [i_8] [i_0] = ((/* implicit */unsigned short) (+(((arr_15 [i_0] [i_1] [i_5] [i_9]) ? (arr_20 [i_0] [i_1] [i_5] [i_5] [i_9] [i_5]) : (((/* implicit */unsigned int) var_15))))));
                            var_29 -= ((/* implicit */unsigned short) arr_19 [i_8] [(unsigned char)5] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]);
                            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [8ULL] [i_8 + 1] [i_9]))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) var_8)))))) < (((((/* implicit */_Bool) ((arr_2 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((arr_18 [i_0] [i_1] [i_5] [i_8] [i_10]) != (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_5] [i_0]))))))))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+((~(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_1 [i_5]))))))))))));
                        }
                    }
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        arr_35 [i_0] [i_11] [i_5] [i_11] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_6 [i_11] [(signed char)10] [i_1] [i_0]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [(unsigned short)15] [i_1] [i_1] [i_5] [i_11])) ? (arr_2 [12ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_1] [i_5] [(unsigned short)0])))))))), ((!(((/* implicit */_Bool) arr_30 [i_11] [i_5] [i_1] [i_1] [i_0] [i_11]))))));
                        arr_36 [i_11] [i_11] [i_11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0])))) | (((((/* implicit */_Bool) arr_2 [i_5])) ? (arr_2 [5]) : (arr_2 [i_11])))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(signed char)14])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((arr_15 [i_11] [i_5] [i_1] [i_0]) && (((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_22 [i_11]))))))) : (((/* implicit */int) ((signed char) arr_32 [i_11] [i_5] [i_1] [i_1] [i_11])))));
                        var_34 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (arr_3 [i_0] [i_1] [i_5])))))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) var_6);
                    var_36 *= arr_1 [i_12 - 1];
                }
                arr_40 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_1] [i_0])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_1] [(unsigned char)14] [i_1]))) : (arr_33 [i_1] [i_0] [i_0] [i_0])))))), (min((((/* implicit */unsigned long long int) max((arr_20 [i_0] [16U] [(unsigned char)14] [(unsigned char)14] [i_0] [i_0]), (arr_23 [i_0] [i_0] [i_1] [i_1])))), (arr_4 [(unsigned short)0] [(unsigned short)0] [i_1])))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) max((var_37), ((!((!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            arr_45 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_42 [i_13] [i_13] [i_13]))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (-(arr_8 [i_0]))))) ? (min((var_0), (((/* implicit */long long int) arr_44 [9U] [i_0] [i_0] [(short)11])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1]) == (((/* implicit */long long int) arr_14 [i_0] [i_1])))))))))));
                var_39 *= ((/* implicit */unsigned int) ((signed char) arr_15 [i_0] [i_0] [i_0] [i_0]));
            }
        } 
    } 
}
