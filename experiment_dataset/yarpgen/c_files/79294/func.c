/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79294
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))) : (4294967295U)));
        var_21 = ((/* implicit */int) ((((_Bool) max((((/* implicit */int) arr_1 [i_0])), (2054486024)))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */unsigned long long int) var_17)) * (arr_0 [i_0 + 1])))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(1U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)));
    var_23 -= ((/* implicit */unsigned short) ((_Bool) var_15));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_24 += ((/* implicit */_Bool) (+(arr_3 [i_1])));
        var_25 = arr_2 [i_1];
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1])));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    var_27 = ((/* implicit */int) 1U);
                    var_28 -= ((/* implicit */unsigned char) var_2);
                    arr_10 [i_3] [i_3] = ((/* implicit */signed char) var_12);
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) arr_5 [i_2])))) || (((((/* implicit */_Bool) 3268557304U)) || (((/* implicit */_Bool) arr_5 [i_2])))))) ? (((/* implicit */int) (!(var_16)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_5 [i_5 + 2])))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_14))) : ((+(arr_11 [i_5])))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 16; i_7 += 4) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_12 [i_6] [i_6])))) ? ((-(min((((/* implicit */unsigned long long int) var_6)), (arr_4 [i_6] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7])))));
                                var_32 = ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))))) >= (min((arr_14 [i_7 + 1] [i_8 - 1]), (arr_14 [i_7 - 3] [i_8 - 1]))));
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_6] [i_7])) ? (((arr_12 [i_5] [i_7]) >> (((/* implicit */int) arr_19 [i_5] [i_5] [i_6] [i_7] [i_6])))) : ((~(var_6)))))) ? (arr_16 [i_2] [i_5] [i_6] [16] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                                arr_23 [i_6] [i_5 - 1] |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_5 + 2] [i_6])), ((-(((/* implicit */int) arr_7 [i_6] [i_8]))))))) ? (arr_5 [i_2]) : (((/* implicit */long long int) ((int) ((_Bool) arr_13 [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 4) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        var_34 = (~(((arr_11 [i_9]) ^ (((arr_22 [i_11] [i_2] [i_9 - 3] [i_9] [i_2]) | (((/* implicit */unsigned long long int) var_15)))))));
                        var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_9] [i_10] [i_10]))))) ? (1760990633U) : (((14U) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (min((9084310836788880399LL), (((/* implicit */long long int) 2094966332)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [(short)14] [(short)14])))))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_12 = 3; i_12 < 16; i_12 += 2) 
    {
        var_36 = ((/* implicit */long long int) arr_34 [1U] [i_12 - 3]);
        arr_37 [i_12] = ((/* implicit */unsigned char) (-(arr_35 [i_12] [i_12])));
    }
}
