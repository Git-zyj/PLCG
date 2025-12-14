/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75311
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
    var_20 = ((/* implicit */long long int) ((signed char) ((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)207)), ((short)7))))))));
    var_21 ^= ((/* implicit */short) min((var_0), (262143)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */int) (!(arr_2 [i_0] [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_2] [i_2])))))));
                    var_23 += arr_4 [(_Bool)1] [i_1] [(_Bool)1];
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                                arr_14 [i_4 - 1] [i_3] [i_3] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_3] [i_2]))) / (arr_7 [i_3] [i_1] [i_0 - 1])))));
                                arr_15 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [i_4 - 1] [i_4 - 1])) ? (arr_9 [i_3] [i_1] [(unsigned char)8] [(unsigned char)8] [i_1 - 1] [i_3]) : (arr_9 [i_3] [i_0 - 1] [i_0 - 1] [(signed char)4] [i_1 - 1] [i_4])));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_3 [i_0 - 1]));
                }
            } 
        } 
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 2]))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))));
            arr_19 [i_5] = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)534))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
            {
                for (long long int i_7 = 2; i_7 < 15; i_7 += 2) 
                {
                    {
                        arr_26 [i_5] [i_5 + 1] [i_5 + 1] [i_5] = ((/* implicit */unsigned char) arr_9 [i_5] [(_Bool)1] [i_5 + 1] [i_5] [i_6 + 1] [i_7]);
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_5] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))));
                        arr_28 [i_0 + 2] [i_5 + 1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1828349537U)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (_Bool)0))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (((~(((/* implicit */int) (short)-29852)))) << (((((((var_2) + (9223372036854775807LL))) << (((/* implicit */int) arr_1 [i_0 - 1])))) - (5013927919955553222LL))))))));
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) (+(-294617343739694844LL)));
            arr_32 [(unsigned short)12] = ((((/* implicit */_Bool) ((arr_9 [i_0] [i_8] [i_0] [i_0] [(unsigned short)4] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0])))))) ? ((+(((/* implicit */int) arr_4 [(signed char)0] [(short)11] [i_0 + 1])))) : (((/* implicit */int) var_1)));
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (signed char i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    for (long long int i_11 = 4; i_11 < 15; i_11 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) / (arr_9 [i_10] [i_11 - 4] [i_10 - 1] [i_10] [i_8] [i_10])));
                            arr_41 [i_8] [i_10] = ((/* implicit */_Bool) ((arr_2 [i_10 - 1] [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_9] [i_10])) & (((/* implicit */int) arr_17 [i_10]))))) : (arr_0 [i_0 + 2])));
                            var_30 *= ((/* implicit */int) (_Bool)0);
                            arr_42 [i_0 - 1] [i_0 - 1] [i_10] [i_0 - 1] [i_10] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_10])) ? (((/* implicit */int) arr_8 [i_10])) : (((/* implicit */int) arr_8 [i_10]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                for (long long int i_13 = 1; i_13 < 14; i_13 += 2) 
                {
                    {
                        var_31 -= ((/* implicit */short) ((long long int) (unsigned short)32414));
                        arr_50 [0LL] [i_8] [i_12] = ((/* implicit */short) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_51 [i_12] [i_13] [i_13 + 2] [i_13 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_8] [i_0 - 2] [i_0 - 2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [i_0 - 1] [i_0] [i_0 + 2] [(short)15])))));
        }
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-24533)) * (((/* implicit */int) (unsigned char)7)))))));
    }
    for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                {
                    arr_60 [i_14] [i_14] [i_15] = (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_52 [i_14 + 2])) : (((/* implicit */int) arr_52 [i_14 + 2])))));
                    var_34 = ((/* implicit */_Bool) min((var_34), (((arr_53 [i_16]) > (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) arr_56 [i_16] [i_15] [i_14 - 1])) : (((((/* implicit */_Bool) arr_58 [2U] [2U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)43)))))))))));
                    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1881085711U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                }
            } 
        } 
        var_36 = ((/* implicit */_Bool) var_4);
    }
    var_37 |= ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_12))))), (((var_3) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
}
