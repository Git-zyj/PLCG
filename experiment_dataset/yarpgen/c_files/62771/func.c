/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62771
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 -= ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0])))) - (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */short) (((((~(((/* implicit */int) arr_1 [i_0] [i_0])))) <= (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((unsigned int) arr_0 [i_0] [i_0])) : (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((arr_4 [i_1 - 1]), (arr_0 [i_1] [i_1])))) > (((((/* implicit */int) arr_0 [i_1] [i_1 - 1])) * (((/* implicit */int) arr_1 [i_1] [i_1])))))))) >= ((~((+(arr_3 [i_1])))))));
        arr_6 [i_1] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_3 [i_1 - 2]))) + ((-(((/* implicit */int) arr_0 [i_1 + 3] [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            arr_9 [1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2 - 2]))) * (((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_1])) & (((/* implicit */int) arr_8 [i_1] [i_1]))))) + (((arr_3 [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1 + 1])))))))));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_2 + 1] [i_2 - 1])) != (((/* implicit */int) arr_1 [i_1 - 2] [i_2 - 3]))))))));
            arr_10 [(signed char)0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_15 [i_4] [i_4] [i_3 - 1] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((int) ((signed char) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1 + 4] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) arr_7 [(signed char)8] [(signed char)8] [i_3]))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [7ULL] [i_3] [2LL] [i_4])) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_3] [i_4])) & (((/* implicit */int) arr_4 [i_1]))))) ^ (((((/* implicit */long long int) arr_3 [i_1])) & (arr_14 [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2 + 1] [i_3 + 3])) ? (((((/* implicit */int) arr_7 [i_1] [i_1] [i_4])) | (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_3 + 1] [i_4] [i_4])))))));
                    }
                } 
            } 
        }
        var_18 = ((/* implicit */int) (!(((((arr_12 [i_1] [i_1] [(short)4]) | (((/* implicit */int) arr_7 [i_1 + 4] [i_1] [i_1])))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) && (((/* implicit */_Bool) arr_8 [i_1] [i_1])))))))));
    }
    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) arr_8 [(unsigned short)5] [i_5])))), (((arr_12 [i_5] [i_5] [i_5]) ^ (((/* implicit */int) arr_1 [i_5] [i_5])))))) - (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [(unsigned char)10] [(unsigned short)12]))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 2; i_6 < 8; i_6 += 2) 
        {
            arr_22 [i_5] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((unsigned int) arr_16 [i_5] [i_6])) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_5] [i_6 + 1])) % (((/* implicit */int) arr_1 [i_5] [i_6])))))))), (((arr_20 [i_6 + 2] [i_6]) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5] [i_6 - 1])) & (((/* implicit */int) arr_0 [16] [i_6])))))))));
            var_19 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6 + 2] [i_6] [i_6 + 2]))) - (arr_17 [i_5] [i_6]))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]))) <= (arr_20 [(_Bool)1] [i_6])))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 4) 
            {
                arr_26 [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) ((max((((arr_25 [i_5] [i_5] [i_5]) * (((/* implicit */unsigned long long int) arr_12 [i_5] [(short)11] [i_7 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [(unsigned short)6] [i_5] [i_6] [i_6 - 2] [i_7])) == (((/* implicit */int) arr_0 [i_6] [i_7]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_11 [(unsigned short)13] [(unsigned short)13] [i_7] [i_7 - 3])) != (((/* implicit */int) arr_0 [i_5] [i_5]))))))))));
                arr_27 [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_5] [i_6] [i_6] [i_7] [i_7 - 2])), (arr_3 [i_5])))) && (((/* implicit */_Bool) (+(arr_14 [i_5])))))) ? (((((arr_3 [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5]))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_6] [1U]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [i_6 - 1])))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 3; i_9 < 8; i_9 += 2) 
                    {
                        var_20 += ((/* implicit */unsigned short) min((arr_17 [i_7 - 4] [i_6 - 1]), (((/* implicit */unsigned long long int) arr_3 [i_5]))));
                        arr_32 [i_5] [i_6] [i_7] [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_9 - 3] [i_9 - 2] [i_9 - 3] [i_9 + 2])) ^ (((((/* implicit */_Bool) arr_0 [i_6 + 2] [i_9 - 3])) ? (((/* implicit */int) arr_29 [i_6 + 1] [i_7 - 1] [i_9 - 1])) : (((/* implicit */int) arr_28 [i_9 - 3] [i_9 - 2] [i_9 - 1] [i_7 - 2] [i_6 - 2]))))));
                        arr_33 [i_5] [i_5] [i_6 + 2] [i_7] [i_8] [i_9 - 1] [i_9] = ((/* implicit */unsigned int) (-(arr_14 [i_8])));
                    }
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((max((arr_24 [i_5] [7U]), (arr_24 [i_7] [i_5]))), (((arr_24 [i_7 - 1] [i_8]) + (arr_24 [i_6 + 2] [i_7]))))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_5] [i_7])))))));
                }
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_5] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5]))) : (arr_3 [i_10]))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_5] [i_5] [i_10] [i_5])) - (((/* implicit */int) arr_29 [4LL] [i_10] [i_5])))))))) - (((((((/* implicit */int) arr_34 [i_5] [i_10] [i_10])) < (((/* implicit */int) arr_21 [i_10])))) ? (((unsigned long long int) arr_21 [i_5])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_16 [i_5] [i_10]))))))));
            var_24 += ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_0 [i_5] [i_10])) - (((/* implicit */int) arr_0 [i_5] [i_5])))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        var_25 = ((((((/* implicit */_Bool) (+(arr_37 [i_11])))) ? (arr_38 [i_11] [i_11]) : (min((arr_38 [(unsigned short)16] [i_11]), (arr_38 [(signed char)1] [i_11]))))) + ((-(arr_37 [i_11]))));
        arr_39 [i_11] = ((/* implicit */unsigned short) arr_38 [i_11] [i_11]);
        var_26 += ((/* implicit */unsigned int) ((((((arr_38 [i_11] [i_11]) * (arr_38 [i_11] [i_11]))) >> (((arr_37 [i_11]) - (5058435731396551935ULL))))) << (((((((arr_37 [(_Bool)1]) | (arr_38 [i_11] [i_11]))) - (arr_37 [i_11]))) - (10466598082944506485ULL)))));
    }
}
