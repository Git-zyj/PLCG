/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77897
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) >> (((arr_3 [i_1] [i_1] [i_0]) - (1745776280U))))) != (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_1]))))));
            var_16 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 415925207505299940LL)) : (8071983542382673188ULL))) << (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_3 [i_0] [i_0] [i_1])))));
        }
        var_17 = ((/* implicit */unsigned short) ((((3456226998623982334LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-31))))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) << (((arr_6 [(signed char)0]) + (1920274296)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_6 [i_2]) : (((/* implicit */int) var_12))))) : (min((arr_3 [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) arr_0 [i_2]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)56907))))) ? (((/* implicit */int) arr_1 [i_2])) : (((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) var_1)))))) : ((+(((/* implicit */int) (short)12288))))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) min((var_6), (min((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_3 [i_2] [4U] [i_2]) : (arr_7 [i_2] [i_2]))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (arr_7 [i_2] [i_2])))))));
    }
    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (unsigned int i_6 = 1; i_6 < 8; i_6 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_3] [i_4] [8]))))) : (((arr_3 [i_3] [7U] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6])))))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3 - 1])))))));
                        }
                        for (int i_8 = 4; i_8 < 6; i_8 += 1) 
                        {
                            arr_28 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_3] [i_4] [i_3] [i_6 - 1]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) >= (arr_14 [i_5] [i_6] [i_8])))) : (((/* implicit */int) ((arr_16 [i_5]) || (((/* implicit */_Bool) var_6))))))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)113)) << (((89089694U) - (89089679U)))));
                            var_21 -= ((/* implicit */long long int) arr_13 [i_3]);
                            var_22 = (((-(arr_26 [i_3 + 1] [i_4] [i_6 + 2] [(_Bool)1] [i_6 - 1] [i_8 + 2] [i_8]))) ^ ((+(arr_26 [i_3 + 1] [i_3] [i_6 - 1] [i_3] [i_6 + 2] [i_8 + 2] [i_8]))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 3; i_9 < 8; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */int) arr_18 [i_3] [(unsigned char)8] [i_4] [i_3]);
                            var_24 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_3 [i_4] [i_5] [i_9]) << (((((/* implicit */int) var_1)) - (28834))))))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5] [(signed char)8] [i_6 + 1])) | (((/* implicit */int) arr_0 [i_3]))))) || (((/* implicit */_Bool) (+(arr_15 [i_5] [i_4] [i_4])))))))));
                            arr_32 [i_9] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_6 - 1])) ? (arr_15 [i_3] [i_4] [i_6 - 1]) : (arr_15 [i_3] [0ULL] [i_6 - 1])));
                        }
                        arr_33 [i_4] [0ULL] [i_3] [i_4] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_7 [i_3] [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3]))))))))) < (((/* implicit */int) arr_21 [7U] [i_4] [i_4] [i_4]))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((arr_11 [4U]) | (((/* implicit */int) arr_19 [i_5] [i_5] [i_6 + 1]))))))), (((arr_15 [i_5] [i_5] [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_4] [i_4]))))))))));
                    }
                } 
            } 
        } 
        arr_34 [i_3] = ((/* implicit */unsigned short) ((min((((/* implicit */int) arr_19 [i_3] [i_3 - 1] [i_3])), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-12289)) + (12319))))))) % (((/* implicit */int) ((unsigned short) ((arr_0 [2U]) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [(unsigned char)9] [i_3])))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) arr_35 [i_10]);
        /* LoopNest 2 */
        for (unsigned int i_11 = 2; i_11 < 15; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                {
                    arr_43 [(unsigned short)2] [i_11 - 1] [i_12] = ((/* implicit */unsigned int) arr_41 [i_10] [i_11] [i_12]);
                    arr_44 [i_10] [i_12] = ((/* implicit */_Bool) arr_35 [i_12]);
                    arr_45 [1LL] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)-12289)) + (((/* implicit */int) (short)-12300))))) / (arr_40 [i_12] [i_11] [i_11 - 2] [i_11 + 1])))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_36 [i_11 - 2] [i_11 - 2])) + (2147483647))) << (((((((((/* implicit */_Bool) arr_35 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10] [i_11 + 3]))) : (arr_35 [5ULL]))) + (1748LL))) - (14LL)))))) : (((max((arr_35 [i_11]), (((/* implicit */long long int) arr_42 [i_10] [14ULL] [(_Bool)1])))) - (((((/* implicit */long long int) var_6)) ^ (arr_38 [i_10])))))));
                    var_28 |= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((arr_38 [i_11]) <= (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_10] [i_11] [i_12]))))))) < (((((/* implicit */_Bool) arr_41 [i_10] [i_11 - 2] [i_12])) ? (arr_38 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10] [i_10]))))))) && (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [(unsigned short)7] [i_11 + 1]))) - (arr_35 [i_10])))) && (((((/* implicit */_Bool) arr_39 [i_10] [i_11] [i_11 + 3])) || (((/* implicit */_Bool) arr_38 [i_10]))))))));
                }
            } 
        } 
        var_29 |= arr_42 [i_10] [i_10] [2ULL];
    }
    var_30 = ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != ((-(((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
    var_31 *= max((var_15), ((((-(var_0))) < (((/* implicit */unsigned long long int) var_3)))));
}
