/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89782
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_13 [i_1] [3ULL] = var_8;
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_11 = ((/* implicit */unsigned short) min((var_11), (min((var_1), (((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned char) arr_1 [i_0])))))))));
                                arr_18 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) min((var_8), (-7246742581370729321LL)))) <= ((~(17339442704908648727ULL))))));
                                var_12 ^= ((/* implicit */unsigned short) (!((!(var_10)))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((max((arr_10 [i_3] [i_1] [i_0]), (((/* implicit */unsigned int) var_2)))) / (((/* implicit */unsigned int) ((arr_1 [i_1]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))))))));
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_1] [i_2] [i_3] [i_3] [i_2])) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5])))) ? (((/* implicit */int) ((short) var_6))) : ((+(((/* implicit */int) arr_9 [i_1] [i_2] [i_1] [i_1]))))));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) ((unsigned int) var_0)));
                                arr_25 [i_6] [i_1] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7253072800662341685LL)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_0] [(unsigned char)0] [3U] [i_6])) : (((/* implicit */int) var_5))))) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                            }
                            arr_26 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_23 [i_1] [i_1] [(short)1] [i_1] [i_1] [i_1])))));
                        }
                    } 
                } 
                arr_27 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_14 *= ((/* implicit */unsigned char) (~(arr_28 [i_0] [i_7])));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        arr_34 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_10)), ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)))))));
                        var_15 = ((/* implicit */short) min((arr_2 [i_0]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))) == (((((/* implicit */_Bool) 6697212010537070165ULL)) ? (3631012567U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1]))))))))));
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_38 [i_1] [i_1] [i_9] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [6ULL] [i_9] [i_9])) | (((/* implicit */int) arr_33 [i_9]))))))))) | (((((/* implicit */_Bool) 1107301368800902880ULL)) ? (((/* implicit */unsigned long long int) ((int) var_4))) : (min((1107301368800902887ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]))))))));
                    arr_39 [(_Bool)1] [i_9] [i_1] = var_10;
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    arr_42 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [i_1] [i_10]))))) : (((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_20 [i_1] [i_1] [i_0] [i_10] [i_0])) : (1107301368800902900ULL)))));
                    arr_43 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_10] [i_1])) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) var_10))));
                }
                for (unsigned short i_11 = 3; i_11 < 9; i_11 += 1) 
                {
                    arr_46 [i_0] [i_1] [i_1] [i_11] = ((/* implicit */unsigned int) var_9);
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 8; i_13 += 2) 
                        {
                            {
                                arr_53 [i_13] [i_1] [i_12] [i_0] [i_1] [i_0] = ((unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) arr_23 [i_1] [i_13 + 1] [i_13 + 1] [i_1] [i_1] [i_1]))));
                                arr_54 [i_1] [i_12] [i_11] [i_1] [i_1] = ((/* implicit */signed char) arr_7 [i_1] [i_1] [i_11]);
                                var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) arr_10 [i_11] [i_12] [i_13])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_13] [i_13] [i_1] [i_0] [i_13 + 4])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(arr_8 [i_0])))))) : (min((((/* implicit */unsigned long long int) arr_47 [i_0] [i_1] [i_11])), (arr_16 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    arr_55 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((int) ((12U) & (arr_45 [i_0] [i_0] [i_0] [i_0]))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            for (unsigned char i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                {
                    arr_66 [i_15] [i_15] [i_16] = ((/* implicit */int) min(((unsigned short)57300), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43109)))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_14])) ? (arr_60 [i_15]) : (arr_60 [i_16])))) ? (((((/* implicit */unsigned long long int) var_0)) | (arr_59 [i_15] [i_16]))) : (((((/* implicit */_Bool) arr_60 [i_14])) ? (arr_59 [i_15] [i_16]) : (((/* implicit */unsigned long long int) arr_60 [i_14]))))));
                    arr_67 [i_14] [i_15] [i_15] = ((/* implicit */unsigned int) arr_64 [i_15] [i_16]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 4) 
    {
        for (signed char i_18 = 0; i_18 < 25; i_18 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((max((var_8), (((/* implicit */long long int) arr_72 [(signed char)11] [i_18] [10U])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_72 [i_18] [i_18] [i_17])) ? (((/* implicit */int) arr_72 [i_17] [i_17] [i_17])) : (((/* implicit */int) var_10)))))));
                var_19 = ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_17] [i_17] [i_18]))) : (arr_71 [(signed char)10]))), (((arr_74 [i_17]) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8222))) : (-9223372036854775792LL)))) ? (max((((/* implicit */long long int) var_1)), (var_8))) : (((/* implicit */long long int) var_4))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)))), (((long long int) var_1)))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_5)))))));
}
