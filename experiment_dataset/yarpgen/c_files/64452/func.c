/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64452
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)18])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [(short)5] [(short)11]))))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)15])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((var_7) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */signed char) (_Bool)1))))) - (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((-182148274) & (((/* implicit */int) arr_1 [i_0]))))));
        var_13 |= ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) arr_1 [i_0]))))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (var_1))))) : (((long long int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_4 [i_1] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((((/* implicit */int) arr_1 [i_1 + 3])) & (((/* implicit */int) arr_1 [i_1 - 1])))) : (((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1 - 1]))))));
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_3 [i_1 + 2] [i_1 + 1])), (arr_1 [i_1 + 1])))) ? (((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (signed char)93)))) : (((/* implicit */int) (short)0)))) : (((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 2])) % ((~(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)93))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    {
                        arr_14 [(signed char)0] [9LL] [7ULL] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (~(var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0LL]))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8626220566898993864LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) * (((unsigned int) var_7))))));
                        arr_15 [i_1] [i_2] [i_1] [i_4 + 2] [5LL] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_2] [(_Bool)1] [i_4 - 2] [(short)10])) ? (((/* implicit */int) arr_12 [i_4] [i_1] [i_3] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_1 + 1] [i_2] [(_Bool)1] [i_4] [i_4 + 2])))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_1 + 2] [i_1] [i_1] [i_1] [i_1 + 2]) : (((/* implicit */long long int) var_6)))));
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-7795162567651297678LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))) : (arr_6 [i_5] [i_5] [i_5]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [(unsigned short)3] [i_5])))))));
        var_17 = ((/* implicit */unsigned short) var_0);
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_7))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_19 [i_7])))) * (arr_6 [i_5] [i_7] [i_8]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_9 = 2; i_9 < 10; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (short)-17)) : (((/* implicit */int) arr_30 [(unsigned short)12] [i_9 - 1] [(unsigned short)12]))))) ? (((((/* implicit */_Bool) arr_8 [i_9] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))) : (arr_32 [i_7] [i_6] [i_7] [i_8] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -805911160)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) var_0)))))))));
                            arr_33 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_9 + 4] [i_9 - 2] [i_9] [i_9 - 1] [i_9])) ? (arr_10 [i_9 + 4] [i_9] [1LL] [i_9] [i_9]) : (arr_10 [i_9 - 2] [i_9] [(unsigned short)1] [i_9 - 2] [(signed char)4])));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_37 [i_5] [i_5] [i_10] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)29282))));
                            var_22 = ((/* implicit */unsigned long long int) ((arr_17 [i_6 - 1]) ? (((/* implicit */int) arr_17 [i_6 + 1])) : (((/* implicit */int) (unsigned char)107))));
                        }
                        arr_38 [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_27 [i_5] [i_6 + 1] [i_5] [i_8])) : (((/* implicit */int) arr_27 [i_6] [i_6 + 1] [5ULL] [(short)1])))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (var_6) : (((/* implicit */int) ((((/* implicit */int) (short)-13)) != (((/* implicit */int) var_2)))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_11 = 2; i_11 < 19; i_11 += 2) 
    {
        var_23 *= ((/* implicit */_Bool) -174395005);
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_39 [i_11])) * (((/* implicit */int) arr_40 [i_11])))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_40 [0LL])))) - (13491)))));
        arr_41 [(unsigned short)16] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_8)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_11])))))));
    }
    /* LoopNest 2 */
    for (long long int i_12 = 1; i_12 < 19; i_12 += 4) 
    {
        for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned int) (~(min((((long long int) arr_40 [9ULL])), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-65))))))));
                var_26 = ((/* implicit */unsigned long long int) arr_44 [i_12]);
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_12 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) (short)30199)) & (((/* implicit */int) var_1))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55072))) : (4398046511103LL)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-4491)) ? (((/* implicit */int) arr_43 [i_12 - 1] [i_13])) : (((/* implicit */int) var_1)))) >> (((((((/* implicit */_Bool) arr_43 [4LL] [i_13])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) - (13468)))))) : (((((/* implicit */_Bool) arr_1 [i_13 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_12 - 1]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1110163085U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_14 = 1; i_14 < 20; i_14 += 2) 
    {
        for (short i_15 = 2; i_15 < 18; i_15 += 3) 
        {
            for (unsigned int i_16 = 1; i_16 < 20; i_16 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) arr_54 [(_Bool)1]);
                        var_29 = ((/* implicit */long long int) ((unsigned char) arr_50 [i_15 + 4] [i_15 + 2]));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_14] [i_14] [i_14 - 1])) ? (arr_52 [i_14] [i_14] [i_14 + 2]) : (arr_52 [14LL] [i_14] [i_14 - 1])));
                    }
                    for (signed char i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                    {
                        var_31 = var_6;
                        arr_59 [i_14] [i_15] [i_16] [i_14] = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) (unsigned char)28)))))) & (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_18] [i_18] [i_16])))))))));
                        arr_60 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), ((+(((/* implicit */int) arr_46 [i_15]))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_14]))) > ((+(arr_49 [i_14 + 2] [i_15] [i_15])))))))));
                    }
                    arr_61 [i_16] [i_16] [i_16] = (short)5;
                }
            } 
        } 
    } 
}
