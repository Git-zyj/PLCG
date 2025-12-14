/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96934
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) 0ULL)) ? (arr_11 [i_4] [i_1] [i_2] [i_1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))) + (((/* implicit */unsigned long long int) ((unsigned int) -1831070148)))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */signed char) 244794679U);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 4294967294U))) & ((+(((/* implicit */int) arr_0 [i_0 - 1])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5 + 1] [10ULL]))))), ((~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (9223372036854775796LL) : (((/* implicit */long long int) arr_8 [i_5 + 1] [i_5 + 1] [13]))))))));
        var_22 = (((((-(592441884003145050ULL))) >= (((/* implicit */unsigned long long int) arr_4 [i_5 + 1] [i_5 + 1] [i_5 + 1])))) ? ((~((~(946464449U))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5 + 1]))) | (max((((/* implicit */unsigned int) (short)32767)), (arr_16 [12LL]))))));
        var_23 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_10 [10U] [i_5 + 1] [10U])))) * (((/* implicit */int) arr_5 [i_5] [i_5 + 1] [2LL]))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
    {
        var_24 *= ((/* implicit */signed char) (((~(arr_8 [i_6] [i_6] [i_6]))) & (arr_8 [(_Bool)1] [i_6] [i_6])));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (signed char i_8 = 1; i_8 < 8; i_8 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        arr_32 [i_6] [i_7] [i_6] [i_6] = arr_23 [i_9 + 1];
                        arr_33 [i_6] [i_6] [i_8 + 2] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) 14680064U)), (2320665945170100377ULL)));
                        arr_34 [i_6] [i_7] [i_7] [(signed char)8] [9] [i_6] = ((/* implicit */_Bool) min(((~(arr_17 [i_9 + 1] [i_8 + 1]))), (((/* implicit */long long int) 8388607U))));
                    }
                    var_25 ^= ((/* implicit */int) ((((((((/* implicit */_Bool) (short)-2639)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(signed char)0] [(signed char)0]))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))))) < (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_7] [i_7] [(_Bool)1])) == (((/* implicit */int) (_Bool)1))))))))));
                    arr_35 [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_28 [i_6] [i_6] [i_6] [i_6]);
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
    {
        arr_38 [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_30 [i_10] [8])) <= (((/* implicit */int) ((short) arr_30 [i_10] [(signed char)2])))));
        var_26 *= ((/* implicit */_Bool) ((int) (((+(arr_29 [i_10] [(signed char)0] [(signed char)0] [i_10]))) >> (((/* implicit */int) arr_5 [i_10] [i_10] [6LL])))));
        var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4389))) & (19LL)))))), ((+(16126078128539451259ULL)))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 2; i_11 < 7; i_11 += 1) 
        {
            for (unsigned short i_12 = 3; i_12 < 9; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    {
                        arr_47 [i_13] [i_12] = ((((((/* implicit */_Bool) 4242484698U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-23))))) : (min((((/* implicit */unsigned int) (signed char)-25)), (arr_27 [i_10] [i_10]))))) >> ((((((+(8388581U))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_10] [i_11] [i_11] [(_Bool)1] [1ULL] [i_13])) | (((/* implicit */int) (signed char)-81))))))) - (3749709501U))));
                        var_28 |= ((/* implicit */unsigned int) arr_20 [i_13]);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            var_29 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            arr_52 [i_10] [i_14] [(signed char)1] &= ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_48 [9] [i_10])))) & (((((/* implicit */_Bool) -13LL)) ? (((/* implicit */int) (unsigned short)35877)) : (((/* implicit */int) (signed char)5))))));
        }
        for (signed char i_15 = 2; i_15 < 7; i_15 += 4) 
        {
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [i_10] [i_10] [i_15 + 3])) % (((/* implicit */int) arr_42 [i_10] [i_15 - 2] [i_10] [i_15 - 2])))) + (((/* implicit */int) arr_26 [i_10] [i_15] [i_15])))))));
            arr_55 [7ULL] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_40 [i_15 - 1] [i_15])) << (((arr_15 [i_15 + 3]) - (4847837818555006224LL))))) % (((/* implicit */int) ((((/* implicit */int) arr_42 [5LL] [i_15] [i_15] [i_15])) != (((/* implicit */int) (!(((/* implicit */_Bool) 8388579U))))))))));
            var_31 &= (+(min((arr_16 [13U]), (((/* implicit */unsigned int) ((((/* implicit */int) (short)15058)) / (((/* implicit */int) (signed char)73))))))));
        }
    }
    var_32 = ((/* implicit */unsigned short) ((max(((+(2147483647))), ((+(965420115))))) <= (((/* implicit */int) (((~(((/* implicit */int) var_10)))) < (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (10569))))))))));
}
