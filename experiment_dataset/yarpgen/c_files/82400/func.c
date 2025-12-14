/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82400
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_0)))) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) (short)-12692)))) : ((-(var_9)))))) : ((+(max((0U), (2080391039U)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            var_11 = (+(max((((((/* implicit */unsigned long long int) arr_1 [i_1])) % (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)14))))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [(unsigned char)5] [i_3] [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [0ULL] [i_4])) || (arr_4 [7U])))) >> (((((/* implicit */int) arr_6 [i_0 + 1] [i_1 - 1] [i_1 + 2])) - (6666)))))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25)) & (arr_9 [i_0] [7LL] [i_2] [i_3] [9ULL])))), ((-(1630739005157573865ULL)))))));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 3]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 3])))) : ((-(((/* implicit */int) arr_0 [i_0 + 3]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_17 [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)22))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_10 [i_5])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_5] [(short)0])))))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [6U])) & (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (~(arr_10 [i_5])))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_0] [i_5] [i_0])) / (arr_7 [i_0] [i_0] [i_5] [2]))))))));
            var_14 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (arr_16 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32758))))))))), (((((/* implicit */_Bool) (+(arr_10 [5])))) ? (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_0] [i_0]))) : (arr_3 [i_0]))) : (arr_3 [i_0])))));
        }
        var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0])) ^ (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_0] [5U] [i_0]) : (arr_10 [i_0])))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? ((~(arr_12 [i_0] [i_0] [i_0] [i_0] [(short)5] [i_0 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1481757994)) > (4294967278U))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-2122125501)))) ? (((/* implicit */int) (unsigned char)255)) : (402653184))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    arr_22 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_19 [i_0]) : (arr_19 [i_7]))) >> (((((int) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0 + 2])) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [(unsigned char)11] [(unsigned char)2]))))) + (13)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_26 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8] [11] [i_6] [i_0 + 3] [i_0])) ? (arr_2 [i_0 + 3] [11ULL]) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_6 - 1]))))) ? ((+(arr_12 [11] [i_6] [i_7] [i_8] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_8]) + (((/* implicit */long long int) arr_1 [i_7])))))))) ? (arr_3 [i_8]) : (((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_2 [i_0] [i_8]))))));
                        arr_27 [4ULL] [i_6] [i_7] [i_6] = (-(max((((/* implicit */int) arr_6 [i_0] [4ULL] [i_0])), ((-(((/* implicit */int) arr_14 [3U] [3U] [i_7])))))));
                        var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) 8232229857148523109LL)) : (arr_2 [i_0] [i_0]))) : (arr_12 [i_0] [i_0] [i_0] [i_0 + 3] [i_6] [i_6 + 3]))) >= (((/* implicit */unsigned long long int) ((int) (+(928003091064989412LL)))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_10 = 3; i_10 < 9; i_10 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_8 [i_10 - 3] [i_7] [i_6] [i_0]))) ^ (((arr_1 [i_7]) ^ (arr_31 [i_6] [i_6] [i_7] [i_6] [i_0])))))));
                            var_18 = (-(((((/* implicit */_Bool) (+(arr_2 [i_0] [i_7])))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_18 [i_7] [i_7] [i_6]))) : (((/* implicit */unsigned long long int) (+(952260100U)))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0 - 2] [i_6 + 1] [i_7] [i_9] [(short)8] [i_10 - 2]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65521))))) : ((-(((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_2 [i_0] [i_0])))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((short) arr_14 [(unsigned char)9] [i_6] [i_0 - 1]))), ((+((-(arr_18 [i_0] [i_9] [i_6])))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(max((arr_19 [i_9]), (((/* implicit */unsigned int) arr_10 [i_11]))))))) & ((-(min((arr_36 [i_0] [i_6] [i_7] [i_9] [i_7]), (18446744073709551606ULL)))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            arr_40 [i_6] [i_6] [i_6] [i_9] [i_12] [8LL] = ((/* implicit */long long int) (-(min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 - 2]), (((arr_10 [i_0]) >> (((2147483638) - (2147483622)))))))));
                            var_22 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_37 [i_6] [i_6]))))), (arr_2 [i_0] [i_9])))));
                        }
                        var_23 = ((/* implicit */unsigned short) (-(0)));
                        arr_41 [i_0 - 1] [4ULL] [i_0] [i_0 - 1] [2U] [i_6] = ((/* implicit */long long int) arr_11 [8U] [i_6] [i_7] [6LL] [6LL] [i_9]);
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 + 3] [i_15 + 1])) ? (((((/* implicit */_Bool) -402653166)) ? (((/* implicit */int) arr_42 [i_15])) : (((/* implicit */int) arr_11 [i_0] [(unsigned short)4] [(unsigned short)4] [1U] [i_14] [i_15])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_14] [(unsigned char)5]))))))))));
                        var_25 = ((/* implicit */int) (-((((!(((/* implicit */_Bool) arr_23 [i_0] [i_0 + 3] [i_0 + 3])))) ? (((/* implicit */long long int) (-(arr_44 [i_15] [i_14] [i_13] [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_15])) ? (-3745627962974067843LL) : (((/* implicit */long long int) (-2147483647 - 1)))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */short) (-((-(arr_30 [i_0])))));
    }
}
