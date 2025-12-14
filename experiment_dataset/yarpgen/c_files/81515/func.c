/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81515
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
    var_19 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)0))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((_Bool) arr_1 [9U]);
                arr_6 [i_1] = ((/* implicit */_Bool) max((((arr_2 [i_0]) * (arr_2 [i_0]))), (max((arr_2 [i_0]), (arr_2 [i_1])))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [(unsigned char)7] [i_0] [i_2 - 1] = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [7] [i_2] [i_2 - 1])) && (((/* implicit */_Bool) var_5)))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))));
                        var_22 = ((/* implicit */short) (((!(((((/* implicit */_Bool) (unsigned short)65529)) && ((_Bool)1))))) ? (((((_Bool) (unsigned short)7877)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (arr_9 [i_3] [i_2 - 1] [i_2] [i_2]))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [(unsigned char)8] [i_1])))))))));
                        arr_13 [10] = ((/* implicit */int) arr_2 [i_2]);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) arr_7 [i_2] [i_1]);
                        var_24 = arr_12 [i_4] [i_1] [i_1] [i_0];
                    }
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (var_11)))) ? (((/* implicit */unsigned long long int) var_11)) : (arr_4 [i_1])));
                        var_25 = ((/* implicit */unsigned long long int) (unsigned short)39069);
                        var_26 = ((/* implicit */long long int) var_6);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) min((((((/* implicit */int) arr_14 [1ULL] [i_2 - 1] [i_5 - 1] [(unsigned char)5] [i_6 - 2])) * (((/* implicit */int) arr_14 [i_1] [i_2 - 1] [i_5 - 2] [i_5] [i_6 - 1])))), ((+(((((/* implicit */int) var_3)) * (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            arr_21 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((((/* implicit */unsigned long long int) arr_9 [i_2 - 1] [i_2 - 1] [i_5 - 2] [i_6 + 2])), (min((var_16), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                            arr_22 [(short)11] [(short)11] [i_2] = max((((long long int) min((((/* implicit */short) var_15)), (arr_20 [i_1] [i_1] [i_1] [i_5] [(signed char)5] [i_2])))), (((/* implicit */long long int) var_3)));
                        }
                        arr_23 [i_0] [i_0] [11LL] [i_0] [i_5] = ((/* implicit */short) (((-((~(arr_2 [i_5]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) var_14))))) < (((unsigned long long int) var_14))))))));
                    }
                }
                for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    arr_28 [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */short) var_6)), (((short) (+(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [10ULL] [i_7] [i_7])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */short) var_15);
                        var_29 = ((/* implicit */unsigned char) ((max((((arr_8 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) var_11)))), (((((/* implicit */_Bool) var_5)) ? (6068410803716079572ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])))))) != (arr_4 [(_Bool)1])));
                        var_30 = ((/* implicit */short) ((((min((((/* implicit */long long int) min((arr_20 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8]), (((/* implicit */short) var_13))))), (var_9))) + (9223372036854775807LL))) >> (((((((((/* implicit */int) arr_29 [i_0] [i_1] [i_7] [i_7] [8LL] [i_0])) != (((/* implicit */int) (unsigned short)26490)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_8 [i_0] [i_8] [i_0]))) - (4579ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_31 += var_4;
                        arr_35 [i_9] [i_9] [i_7] [i_0] [i_1] [i_0] = var_16;
                        arr_36 [i_0] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
                        arr_37 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (arr_32 [i_0]) : (arr_32 [i_7])));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (-((-(min((var_18), (((/* implicit */unsigned long long int) arr_1 [i_1])))))))))));
                        var_33 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) arr_31 [i_0] [i_0] [i_7] [6ULL] [i_10] [4LL])), ((-(((/* implicit */int) var_6)))))));
                    }
                    arr_40 [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_0] [i_0] [i_7] [(short)2])) + (2147483647))) << (((((/* implicit */int) (unsigned short)39069)) - (39069)))));
                }
                var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (-(((/* implicit */int) var_3)))))));
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (~(min((var_16), (((/* implicit */unsigned long long int) var_2)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        var_36 = ((/* implicit */int) min((var_36), ((+(((/* implicit */int) min((arr_38 [i_11] [i_11] [i_11] [(short)1] [i_11]), (arr_38 [i_11] [i_11] [i_11] [(unsigned char)1] [(_Bool)1]))))))));
        arr_43 [i_11] = ((/* implicit */signed char) arr_39 [(signed char)1]);
        /* LoopNest 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                {
                    var_37 = ((/* implicit */signed char) max((arr_47 [i_11] [i_12] [i_13] [i_13]), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_49 [i_11] [i_11] [i_13] = ((/* implicit */unsigned long long int) (((+(((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) min((var_10), (var_15)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 12; i_14 += 3) 
    {
        var_38 = ((/* implicit */unsigned char) arr_5 [(short)4] [(short)4]);
        arr_54 [i_14] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_31 [i_14] [6U] [(signed char)4] [(signed char)0] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_4))) >> (((arr_24 [i_14]) - (1870192819U)))));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 12; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            {
                                arr_63 [i_15] [i_17] [i_16] [(_Bool)1] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_14] [i_15])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
                                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (((-(var_16))) << (((((/* implicit */int) (unsigned short)26473)) - (26466))))))));
                                var_40 = ((/* implicit */unsigned short) var_9);
                                arr_64 [i_14] [i_15] [i_17] [5LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_39 [i_14]))));
                            }
                        } 
                    } 
                    var_41 = (+(((/* implicit */int) var_13)));
                    arr_65 [i_15] [(signed char)10] [i_14] [(signed char)10] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_1 [i_16])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [(short)1])))))));
                }
            } 
        } 
        arr_66 [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_14] [i_14] [8LL] [i_14] [(signed char)5] [i_14]))));
    }
}
