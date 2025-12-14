/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72023
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 151568127))))), (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (arr_0 [i_0] [(_Bool)1])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [3ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_3]))) : (arr_2 [(signed char)4] [i_2])))));
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -151568121)) ? (((/* implicit */unsigned int) 151568127)) : (4294967286U)));
                arr_12 [i_1] = ((/* implicit */unsigned char) arr_8 [i_1] [i_2] [i_1]);
            }
            arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [(signed char)0])) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_1]))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) arr_4 [i_5 - 1]);
                arr_18 [i_4] [i_4] = arr_3 [i_4];
                arr_19 [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (((/* implicit */int) ((signed char) arr_6 [i_5] [i_4] [0ULL]))) : (((int) arr_8 [i_1] [i_4 - 1] [i_1]))))) < (min((((((/* implicit */_Bool) arr_2 [(signed char)8] [i_4])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned long long int) arr_10 [i_4 - 1] [i_5 + 1] [11U]))))));
            }
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            arr_29 [i_1] [i_4] = ((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4]);
                            var_19 = ((/* implicit */unsigned long long int) ((((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4]))) <= (var_9)))) ^ (((/* implicit */int) arr_20 [i_1] [(signed char)16] [i_7]))));
                            var_20 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_17 [i_8]))))));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_1] [i_1] [(signed char)2] [i_4])) / (((/* implicit */int) arr_23 [8] [(signed char)16] [(signed char)16]))))) ? (((/* implicit */int) arr_16 [8ULL] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_1]))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_27 [i_4 - 1] [i_4 + 1] [2ULL] [i_4 + 1])) : (((/* implicit */int) arr_16 [(unsigned char)14] [i_4 - 1] [i_6]))))) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_5 [i_4])) > (((/* implicit */int) arr_8 [9LL] [i_1] [i_1]))))), (((short) var_2))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_20 [i_1] [i_4 + 1] [(unsigned char)14])), (arr_21 [i_1] [i_4 + 1] [4ULL])))))))));
                var_23 = ((signed char) ((unsigned long long int) ((_Bool) var_12)));
            }
            var_24 = arr_17 [i_4];
            var_25 = ((/* implicit */unsigned int) (+(((unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_6 [i_1] [i_4] [i_4])) : (((/* implicit */int) arr_23 [i_4] [i_4] [0ULL])))))));
        }
        arr_30 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_14 [i_1] [i_1] [(signed char)4])))));
        arr_31 [(short)11] = ((/* implicit */signed char) (-(4294967286U)));
        var_26 = ((/* implicit */unsigned int) arr_24 [i_1] [i_1]);
    }
    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)215)) || (((/* implicit */_Bool) (unsigned char)186))));
                                var_28 = ((/* implicit */unsigned char) arr_27 [i_9] [i_10] [i_11] [i_12]);
                            }
                        } 
                    } 
                    var_29 = ((min(((-(((/* implicit */int) arr_3 [i_9])))), (((((/* implicit */_Bool) arr_2 [i_9] [i_9])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_39 [i_9] [i_9])))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_32 [i_9] [i_9])))))));
                    arr_45 [i_11] [i_11] [i_11] = ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))) : (6015146308164651653ULL));
                    arr_46 [1ULL] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) var_9))))), ((-(((/* implicit */int) arr_37 [1ULL] [i_10] [i_10]))))));
                }
            } 
        } 
        arr_47 [(unsigned char)15] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_9] [i_9] [2U] [(unsigned short)12])), ((+(arr_32 [i_9] [i_9])))));
    }
    var_30 = ((unsigned int) (unsigned char)48);
}
