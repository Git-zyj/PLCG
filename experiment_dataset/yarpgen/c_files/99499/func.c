/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99499
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((((/* implicit */_Bool) 3856090109U)) && (((/* implicit */_Bool) arr_0 [i_0])))))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? ((+(438877186U))) : (3306382830U)));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) var_12);
        arr_7 [(unsigned char)0] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) var_13)), ((-(var_9))))), (((/* implicit */long long int) max((2549876902U), (988584465U))))));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_3)), (max((17140545309209984288ULL), (((/* implicit */unsigned long long int) (short)4)))))), (((/* implicit */unsigned long long int) var_15))));
                    arr_17 [(unsigned char)8] [i_3] [i_2] [i_4] = ((/* implicit */unsigned char) arr_16 [i_2] [i_3] [i_4] [(unsigned short)12]);
                }
            } 
        } 
        arr_18 [i_2] = max((max((arr_1 [i_2]), (((/* implicit */unsigned long long int) var_6)))), (((arr_12 [i_2] [i_2]) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_2]))))))));
    }
    for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned char) var_2);
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_20 [i_5] [(short)10]))));
            arr_24 [9U] [6ULL] [10U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 1] [5ULL]))) : (var_3)));
            arr_25 [i_5] [5U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (arr_20 [i_5 + 1] [(short)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 + 2])))));
        }
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (unsigned int i_8 = 4; i_8 < 10; i_8 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) arr_5 [i_7]))));
                    var_24 ^= 3306382830U;
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (unsigned int i_10 = 2; i_10 < 9; i_10 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) var_2);
                    arr_35 [i_5] [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_5] [(_Bool)1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 + 2]))) * (min((((/* implicit */unsigned long long int) var_18)), (arr_29 [i_5] [i_5] [i_5 + 1] [i_5]))))) : (var_0)));
                    arr_36 [(unsigned short)9] [i_9] [(unsigned short)9] [i_10] = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_12)), (((4286320976629964844ULL) >> (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
    {
        arr_39 [i_11] = ((/* implicit */_Bool) 3856090119U);
        arr_40 [6ULL] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_11])) ? (((((/* implicit */_Bool) var_5)) ? (17140545309209984288ULL) : (arr_1 [i_11]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10981)) ? (((/* implicit */long long int) var_14)) : (var_12))))));
        arr_41 [i_11] [i_11] = ((/* implicit */_Bool) arr_38 [i_11]);
    }
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
    {
        var_27 ^= max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_13 [i_12]))))))), (((((/* implicit */_Bool) arr_0 [i_12])) ? (((((/* implicit */unsigned long long int) arr_37 [i_12])) & (var_5))) : (((/* implicit */unsigned long long int) (~(3306382830U)))))));
        arr_46 [i_12] [i_12] = ((/* implicit */short) max((arr_13 [0U]), ((((+(((/* implicit */int) arr_10 [3U])))) <= (var_7)))));
    }
}
