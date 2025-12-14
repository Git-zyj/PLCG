/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75372
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((arr_1 [i_0]) > (((unsigned int) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_14 |= ((/* implicit */short) ((((((/* implicit */int) ((arr_1 [(short)4]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_1])))))) - (((/* implicit */int) arr_0 [i_1] [i_2])))) == ((~(((/* implicit */int) (short)-6925))))));
                        arr_10 [(signed char)11] [i_0] = ((/* implicit */short) arr_4 [i_0] [14U] [i_0] [i_3]);
                        var_15 = ((/* implicit */short) arr_6 [i_0] [(_Bool)0] [i_0] [i_0]);
                        var_16 = ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [(short)9] [i_3])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    var_17 |= ((/* implicit */signed char) arr_3 [i_4 + 2]);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_6] [i_5] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7] [i_0] [i_5] [i_0] [i_0]))) % (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned short)6] [i_0] [i_0] [i_4])) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_4] [14U] [i_7])))))) && (((/* implicit */_Bool) arr_21 [i_0] [i_4] [i_5] [i_6] [i_7] [i_0]))))));
                                var_18 += ((/* implicit */signed char) ((_Bool) arr_3 [5U]));
                            }
                        } 
                    } 
                    arr_24 [i_5] &= ((/* implicit */_Bool) ((9348363348287807601ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27193)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            arr_29 [i_0] [i_8] = arr_11 [i_0];
            /* LoopNest 2 */
            for (unsigned int i_9 = 4; i_9 < 24; i_9 += 4) 
            {
                for (unsigned char i_10 = 1; i_10 < 24; i_10 += 3) 
                {
                    {
                        var_19 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_9])) || (((/* implicit */_Bool) arr_1 [i_8])))))) & (arr_21 [i_0] [(unsigned char)12] [(unsigned char)12] [i_8 - 1] [i_9] [i_9]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [i_9] [i_8])) + (2147483647))) << (((((/* implicit */int) arr_20 [16U] [i_8] [(signed char)22] [i_9] [i_10])) - (1)))))) ? (((/* implicit */int) ((arr_5 [i_9]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned short)6])))))) : ((-(((/* implicit */int) arr_26 [i_9] [i_9])))))))));
                        arr_36 [i_0] [i_10] [i_0] [(_Bool)0] = ((/* implicit */unsigned long long int) ((signed char) arr_14 [i_0] [i_8] [i_0]));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_26 [(short)12] [i_11]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_11] [(signed char)13] [(short)18] [(short)18])) ? (((/* implicit */int) arr_33 [i_11] [i_11] [10U] [i_11] [(short)12])) : (((/* implicit */int) arr_38 [10U]))))))))));
        var_21 = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) arr_26 [i_11] [i_11])))));
        var_22 = ((/* implicit */unsigned short) arr_7 [i_11]);
    }
    for (short i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_13 = 3; i_13 < 24; i_13 += 1) 
        {
            for (signed char i_14 = 3; i_14 < 24; i_14 += 2) 
            {
                {
                    arr_47 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_18 [i_12] [i_13] [i_14])) * (((((/* implicit */unsigned long long int) ((unsigned int) arr_43 [i_12] [i_12] [i_14]))) + (((arr_25 [i_12]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_14])))))))));
                    arr_48 [i_12] [i_13] [i_12] [i_12] = arr_22 [i_12] [i_13] [i_12] [i_12] [i_12];
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_12] [i_12] [i_12]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_12]))))))) * ((~(arr_30 [i_12] [i_12] [(short)13])))));
        var_24 = ((/* implicit */short) arr_46 [i_12] [i_12] [i_12] [i_12]);
    }
    /* LoopSeq 1 */
    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) arr_31 [i_15] [i_15] [i_15]);
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            for (short i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_15] [i_18])) ? (((/* implicit */unsigned long long int) ((arr_1 [i_18]) >> ((((~(arr_22 [i_16] [i_16] [i_16] [17LL] [i_16]))) - (2089471906U)))))) : (((((/* implicit */_Bool) arr_5 [i_16])) ? (arr_5 [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_17])))))));
                        var_27 = ((/* implicit */unsigned int) arr_50 [i_18]);
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11))))) ^ (((/* implicit */int) var_7)))) % ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    var_29 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((var_8) > (var_12)))) : (((/* implicit */int) var_7)))))));
}
