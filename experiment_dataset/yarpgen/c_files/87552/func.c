/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87552
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
    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) 4184972800U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [(unsigned short)3] = ((/* implicit */short) (-(arr_0 [(unsigned char)9])));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_12 *= ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))))) % (((/* implicit */int) ((signed char) arr_4 [i_0] [i_1]))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                arr_9 [(unsigned char)12] [12U] [10] = ((((unsigned int) (_Bool)0)) | (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [i_2 - 3])) : (((/* implicit */int) arr_7 [5] [5] [1] [i_2 + 1]))))))));
                arr_10 [5] [i_1] [i_1] [i_1] = ((/* implicit */short) (unsigned char)13);
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_3] [i_3] [i_3] [13] = ((/* implicit */unsigned short) (+(arr_12 [i_0] [i_1] [(unsigned char)10])));
                var_13 = ((/* implicit */unsigned short) arr_0 [i_3]);
                arr_14 [i_0] [i_3] = ((/* implicit */unsigned short) ((arr_0 [i_0]) >> (((arr_0 [i_3]) - (1896292095U)))));
                arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_8 [5] [i_1] [4]) >= (arr_8 [i_0] [i_0] [i_0])));
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        arr_20 [9] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((signed char) (-2147483647 - 1)));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_8))) ? (((((/* implicit */_Bool) arr_16 [i_0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0])) ? (((/* implicit */int) arr_6 [i_0] [i_3] [i_5])) : (((/* implicit */int) (short)4592)))) : (arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                        arr_21 [i_0] [i_3] [(short)11] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0] [(unsigned char)9] [i_3] [i_4]))));
                    }
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_24 [i_0] [i_1] [i_3] [i_3] [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_6] [i_1])) ? (((/* implicit */int) arr_6 [i_4] [i_3] [(_Bool)1])) : (((((/* implicit */int) (unsigned char)85)) & (((/* implicit */int) arr_23 [i_0] [i_3] [i_3] [(unsigned char)9] [i_0]))))));
                        arr_25 [i_3] [i_3] = ((((((/* implicit */_Bool) (short)4610)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4592)))) >= (((/* implicit */int) arr_19 [i_3] [i_1] [i_1] [i_3] [i_3] [i_1] [(unsigned char)2])));
                        var_15 = ((/* implicit */int) arr_17 [i_0] [i_3] [i_0] [i_0]);
                        var_16 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [(_Bool)1] [i_1] [(_Bool)1]))))) - ((((_Bool)0) ? (arr_4 [i_1] [i_0]) : (((/* implicit */long long int) var_1))))));
                    }
                    arr_26 [i_0] [i_1] [i_0] [i_3] [i_1] [i_0] = (~(((/* implicit */int) arr_6 [i_1] [i_3] [i_4])));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_4])) && ((!(((/* implicit */_Bool) var_1)))))))));
                        var_18 &= ((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)11]);
                        arr_30 [i_7] [i_7] &= ((/* implicit */short) arr_5 [i_1] [i_4] [i_1]);
                        var_19 = (~(((/* implicit */int) arr_27 [i_0] [(unsigned char)4] [(unsigned char)4] [i_1] [i_7] [i_0])));
                    }
                    for (unsigned char i_8 = 1; i_8 < 13; i_8 += 4) 
                    {
                        var_20 = var_4;
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((1181735643) << (((((/* implicit */int) arr_1 [i_1])) - (73))))) : (((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (unsigned char)54))))));
                        var_22 = ((/* implicit */long long int) arr_23 [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1]);
                        arr_33 [i_3] [i_1] [(unsigned char)11] [(unsigned char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_28 [7] [i_3] [i_3] [(unsigned char)6] [i_1] [i_0])) : (((/* implicit */int) arr_16 [(unsigned char)12] [i_1] [i_1] [i_1]))))) ? (1181735643) : (arr_8 [i_1] [i_4] [(short)6])));
                    }
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [(unsigned short)11] [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [7])) : (((/* implicit */int) arr_31 [i_0] [8LL] [i_3] [i_3] [i_9]))));
                        arr_37 [i_0] [i_1] [i_3] [7LL] [i_9] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))))) == (((/* implicit */int) arr_27 [i_0] [i_0] [(unsigned short)0] [(signed char)5] [(unsigned short)0] [i_9])));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                    }
                    arr_38 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_3] [(unsigned char)9] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_3]))) : (((long long int) arr_35 [13] [i_3] [i_3] [i_3] [i_3]))));
                }
                for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_25 = ((int) ((arr_28 [i_0] [(signed char)13] [2U] [(unsigned char)1] [(unsigned char)1] [i_3]) ? (((/* implicit */int) arr_40 [i_0] [i_1] [i_10] [2LL])) : (((/* implicit */int) arr_40 [0LL] [12] [i_10] [(unsigned char)8]))));
                    var_26 = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)4592)) ? (((/* implicit */int) (signed char)127)) : (-1181735634))))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_11 - 1] [i_1] [i_3] [i_3] [i_1])) ? (((/* implicit */int) arr_36 [i_11 - 1] [10] [i_3] [i_11 - 1] [(_Bool)1])) : (((/* implicit */int) arr_36 [i_11 - 1] [i_1] [(unsigned short)8] [i_11 - 1] [(unsigned short)8])))))));
                    arr_45 [i_3] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_11] [i_1])) ? (arr_4 [i_3] [i_1]) : (arr_4 [i_3] [i_0])));
                }
            }
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                var_29 = ((/* implicit */signed char) arr_40 [i_0] [(_Bool)1] [i_12] [(_Bool)1]);
                arr_49 [i_0] [i_0] [i_12] = ((/* implicit */int) arr_7 [i_0] [i_1] [(signed char)13] [i_0]);
            }
            arr_50 [i_0] = (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])));
            arr_51 [i_0] [(signed char)6] [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_18 [i_0] [10U] [i_1]), (arr_18 [i_0] [i_0] [i_1])))) / (((/* implicit */int) arr_34 [i_0] [(signed char)4] [i_0] [(signed char)6] [i_0]))));
        }
        for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_14 = 1; i_14 < 10; i_14 += 4) 
            {
                arr_58 [i_0] [i_13] [i_14 + 2] [(unsigned char)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_14 - 1] [i_13] [12U]))));
                var_30 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_13])) ? (arr_0 [i_0]) : (arr_0 [i_13]))), (((/* implicit */unsigned int) arr_2 [1LL] [i_13]))));
                var_31 *= ((/* implicit */unsigned char) (short)32744);
                var_32 = (~(((/* implicit */int) (signed char)127)));
            }
            /* vectorizable */
            for (long long int i_15 = 4; i_15 < 13; i_15 += 1) 
            {
                arr_61 [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_15 - 4] [i_15] [i_15 - 3] [i_15])) ? (((((/* implicit */_Bool) arr_54 [i_13])) ? (((/* implicit */int) (short)4592)) : (((/* implicit */int) (unsigned char)54)))) : (((((/* implicit */_Bool) arr_19 [i_13] [i_0] [i_0] [i_13] [i_13] [i_13] [i_15])) ? (((/* implicit */int) arr_31 [i_0] [2] [i_0] [i_13] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [(signed char)6]))))));
                arr_62 [i_0] [i_13] [2U] [(_Bool)1] &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [(unsigned short)6] [(signed char)9] [i_15] [i_15 - 1] [i_15 - 3]))));
            }
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_33 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)52055))));
                var_34 *= ((/* implicit */unsigned short) arr_53 [(unsigned short)12] [(_Bool)1] [i_16]);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_17 = 1; i_17 < 11; i_17 += 4) 
            {
                arr_69 [i_13] [i_13] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_17] [i_13] [i_0] [i_0])) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */int) arr_65 [i_17 + 3])) : (((/* implicit */int) arr_57 [i_17 + 2] [i_17 + 2] [(unsigned char)10] [i_17]))));
                arr_70 [8] [(signed char)5] [(_Bool)1] [i_13] = ((/* implicit */unsigned short) ((signed char) 188187915));
            }
        }
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_66 [(short)10] [(_Bool)1] [i_0] [i_0])) & ((+(((/* implicit */int) arr_57 [i_0] [(short)13] [i_0] [i_0]))))));
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32744)) ? (var_1) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((/* implicit */int) ((_Bool) 4611686018427387903LL)))))));
}
