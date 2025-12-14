/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56133
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) var_6);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) % (15451524920583314294ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_6 [i_1] [i_1] [i_1] [i_0])), (((short) var_12)))))) : (((2995219153126237321ULL) ^ (((/* implicit */unsigned long long int) 1073741823))))));
                    arr_7 [i_1] [10ULL] [i_0] [(unsigned char)8] = ((signed char) 2995219153126237321ULL);
                    /* LoopSeq 2 */
                    for (short i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) (+(((unsigned long long int) var_5))));
                        arr_10 [i_1] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))), (max((arr_5 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_0])))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) arr_6 [(unsigned short)0] [(unsigned short)0] [i_3 - 1] [i_0])), (var_4)))));
                        }
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_12 [i_3 - 2] [i_3 + 3] [i_3] [i_3 + 3] [i_3 - 1]) : (arr_12 [i_3 - 2] [i_3 + 3] [i_3] [i_3 + 3] [i_3 - 1])))))));
                            arr_18 [i_0] [i_1] [i_0] [(unsigned char)10] = ((/* implicit */unsigned int) (~(min(((+(arr_1 [i_0]))), (var_1)))));
                            var_20 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_5] [i_5] [(short)11]);
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) var_1)))));
                        }
                        arr_19 [i_1] [i_1] = ((((/* implicit */_Bool) ((long long int) arr_12 [i_1] [i_3 + 4] [i_3 + 4] [i_3 - 2] [i_3 - 1]))) ? (((((/* implicit */_Bool) 15451524920583314294ULL)) ? (arr_12 [i_2] [i_3 - 1] [(short)11] [i_3 + 2] [(unsigned char)10]) : (arr_12 [i_0] [i_3 + 4] [i_3] [i_3 + 1] [i_3 + 1]))) : (min((((/* implicit */unsigned long long int) var_14)), (arr_12 [i_3] [i_3 + 3] [i_3] [i_3 + 4] [i_3 - 2]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [1ULL] [i_1]))) - (arr_22 [i_0] [i_0] [i_0] [i_0])));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])) / (var_2)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_4 [i_1]))));
                        var_24 = ((/* implicit */_Bool) (unsigned char)0);
                        var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [11] [i_6]))) * (arr_20 [i_2] [i_2] [i_2] [i_6] [(short)13] [i_2]))) >= (var_7)));
                        arr_24 [i_0] [i_0] [i_1] [i_0] = arr_16 [i_1];
                    }
                    arr_25 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((var_3) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) || ((((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) ((signed char) var_9)))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)1)), (max((arr_17 [i_0] [i_0] [i_0]), (var_14)))))), (arr_16 [i_0])));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        arr_30 [i_7] = ((/* implicit */long long int) var_14);
        var_28 = ((/* implicit */int) var_0);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        for (int i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                {
                    arr_38 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (2995219153126237321ULL))), (var_2)))) ? (var_1) : (((/* implicit */int) arr_32 [i_9] [i_9]))));
                    var_29 = ((/* implicit */long long int) ((short) min((arr_33 [i_8] [i_8] [i_9 + 1]), ((_Bool)0))));
                    arr_39 [i_10] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_33 [i_9 - 1] [i_9 + 1] [i_9 - 1]))))) - (var_2)));
                    var_30 = ((/* implicit */unsigned char) 1580192054U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1402863459U)))), (var_2)));
                    arr_49 [(short)0] [(signed char)4] [i_12] [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_11]), (arr_0 [i_12])))) ? (((/* implicit */int) arr_33 [i_13] [i_12] [i_11])) : (((/* implicit */int) var_8))));
                    var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_11])) >> (((817303902U) - (817303888U)))))) % (var_6)));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        for (long long int i_15 = 1; i_15 < 11; i_15 += 3) 
                        {
                            {
                                var_33 = ((int) ((var_3) ? (((/* implicit */int) ((var_3) || (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_26 [i_15 + 3] [i_12]))));
                                var_34 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [11U] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (0ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) 26007987)))) : (11102526675499061656ULL))));
                                var_35 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)35)), ((unsigned short)22827)));
                                var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (max((var_12), (arr_31 [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) >= (((/* implicit */int) var_3))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15451524920583314294ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_13] [i_13]))) : (min((817303902U), (((/* implicit */unsigned int) (unsigned char)109))))))) : (min((((15451524920583314295ULL) ^ (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) <= (11784407187292166653ULL)))))))))));
                                arr_56 [i_12] [i_12] [i_12] [i_14] [i_12] = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                }
                for (long long int i_16 = 1; i_16 < 12; i_16 += 3) 
                {
                    arr_59 [i_11] [i_12] [i_12] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 65535ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : (var_4))))), (((((_Bool) var_8)) ? (((/* implicit */int) min((var_5), ((unsigned char)157)))) : (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (short)15872))))))));
                    arr_60 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_50 [(_Bool)0] [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_12])), (((((/* implicit */_Bool) arr_34 [i_12])) ? (arr_12 [i_11] [i_11] [i_12] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_1)) : (13509574048002174375ULL)))))) : (min((((/* implicit */unsigned long long int) ((var_2) != (var_0)))), (var_0)))));
                }
                for (short i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_11)))) + (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((min((var_4), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_57 [i_11] [i_11] [i_11])))))))));
                    arr_65 [i_11] [i_12] = ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_55 [i_11] [i_12] [i_12] [i_12] [i_12])))), (((/* implicit */int) (signed char)13))))) ? (max((((/* implicit */long long int) var_14)), (arr_46 [i_11] [i_12] [i_17] [11ULL]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    var_38 += ((/* implicit */short) var_4);
                    var_39 = ((/* implicit */unsigned short) (~(-7127846675449224063LL)));
                    var_40 = ((((/* implicit */_Bool) min(((~(arr_43 [12] [i_12] [12]))), (((/* implicit */unsigned int) var_10))))) ? (min(((+(var_0))), (((/* implicit */unsigned long long int) ((unsigned int) arr_37 [i_11] [i_11] [i_12]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_11])) % (((/* implicit */int) arr_11 [i_11]))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 4; i_18 < 13; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        {
                            var_41 *= ((/* implicit */short) ((((_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (var_1)))) / (min((((/* implicit */unsigned int) var_14)), (arr_43 [i_11] [i_11] [i_12])))))) : (((((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_1 [i_11])) : (var_9)))))));
                            arr_70 [i_11] [i_11] [i_11] [i_12] = ((/* implicit */unsigned long long int) arr_15 [i_11] [i_11] [i_11] [i_12] [i_12] [i_11]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_42 = ((/* implicit */signed char) ((13509574048002174375ULL) == (((/* implicit */unsigned long long int) -370113533))));
}
