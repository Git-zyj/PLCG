/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94339
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -6480995926435125070LL))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) max((max((max((((/* implicit */short) var_19)), (var_9))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [7] [7]))))))), (((/* implicit */short) (!(((/* implicit */_Bool) ((var_14) - (-1)))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (((!(((1) != (-1))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_17)) | (((/* implicit */int) arr_5 [i_2] [i_1] [i_0] [i_0])))) << (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_4 [i_2] [i_0 - 1])))))))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) && ((!(((/* implicit */_Bool) var_4)))))))) & ((~(18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_1] [(unsigned short)8] [i_1] [8LL] = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) -6)))), (((((/* implicit */_Bool) arr_6 [(short)7] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)5))) : (var_18))))), (-4292013465200038056LL)));
                                arr_12 [i_0] [4] [4] [4] [4] [i_0] = ((/* implicit */short) min((-5), (((/* implicit */int) (short)-3622))));
                                arr_13 [(unsigned short)2] [i_0 + 1] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [i_2])))) << ((((-(arr_10 [i_3] [i_3] [i_3]))) - (599941909)))));
                                arr_14 [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    arr_15 [i_0 + 2] [i_1] [i_1] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1])) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
        arr_16 [i_0 + 1] = ((/* implicit */_Bool) (~(((((/* implicit */int) (short)-18717)) - (((/* implicit */int) (unsigned char)241))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 7; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */short) var_19);
                        arr_28 [i_6] [7] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1610612736) / (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((short) 2120688456U)))));
                        var_25 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) >= (arr_10 [i_5] [i_5] [1U]))));
                    }
                    for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_35 [i_6] = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_26 [i_6] [i_6] [i_7] [7U] [i_10])))) != (arr_17 [i_5] [(unsigned short)9]));
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((2174278840U) > (((/* implicit */unsigned int) -1610612736)))))));
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (((((/* implicit */unsigned long long int) var_4)) / (16190590247475159668ULL)))));
                        }
                        var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) / (arr_17 [i_5] [i_5])));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_7] [i_7])) && (((/* implicit */_Bool) -1610612725))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) 1))));
                                var_30 = ((/* implicit */unsigned long long int) var_2);
                                var_31 = ((/* implicit */unsigned short) ((long long int) arr_17 [i_12] [i_6]));
                                arr_42 [i_6] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) -1610612725)) ? (var_0) : (((/* implicit */int) arr_21 [i_6] [i_7])))));
                                arr_43 [i_6] [i_6] [(unsigned char)7] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)23547))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 7; i_13 += 2) 
                    {
                        for (long long int i_14 = 3; i_14 < 9; i_14 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_3 [i_5] [i_13 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) > (((/* implicit */int) var_19)))))) : (((((/* implicit */_Bool) var_17)) ? (var_13) : (var_18)))));
                                var_33 = ((((/* implicit */_Bool) arr_38 [i_5] [i_6] [i_7] [4ULL])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6] [i_7] [i_14])))))));
                                arr_50 [i_5] [i_6] = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    arr_51 [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(3763105385U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)1843)) || (((/* implicit */_Bool) var_7))))) : (var_14)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_15 = 3; i_15 < 9; i_15 += 4) 
        {
            for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_60 [i_15] [0U] [i_16] [i_17] = ((/* implicit */int) (+(var_3)));
                        var_34 *= ((/* implicit */signed char) ((long long int) var_16));
                        var_35 = arr_32 [i_5] [i_5] [i_5] [i_5] [9LL] [i_5] [8LL];
                    }
                } 
            } 
        } 
        arr_61 [i_5] [i_5] &= (-(((/* implicit */int) (_Bool)0)));
        var_36 = ((/* implicit */int) ((signed char) ((var_12) / (((/* implicit */int) arr_52 [i_5] [i_5] [i_5])))));
    }
}
