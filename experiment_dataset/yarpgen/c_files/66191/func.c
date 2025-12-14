/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66191
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
    var_17 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */long long int) min((min(((-(arr_1 [i_0]))), (((/* implicit */unsigned int) arr_3 [i_0])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0])))))));
        var_20 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) ((unsigned char) arr_2 [i_0] [i_0])))), ((+(((/* implicit */int) arr_3 [i_0]))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_21 -= ((/* implicit */short) arr_0 [(_Bool)1]);
        var_22 = (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_4 [i_1 + 1])))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) ((arr_3 [i_1]) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [(unsigned short)5])))))));
            /* LoopNest 3 */
            for (short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_2 - 1] [i_2]))) >= (arr_16 [i_1 + 1] [i_1])))))))));
                            var_25 = ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_1 [i_1 + 1])), (arr_14 [2] [2] [i_1 + 1] [i_1 + 1] [i_5] [i_4]))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_5]))) | (arr_14 [i_5] [i_4] [i_3] [(_Bool)1] [0] [0]))))))));
                            var_26 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((arr_5 [i_3 - 1] [i_5]), (((/* implicit */unsigned char) arr_8 [i_5] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_8 [i_5] [6U] [i_2])) : (((/* implicit */int) arr_12 [i_1] [(short)14])))) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_8 [(signed char)5] [i_4] [(_Bool)1])) : (((/* implicit */int) arr_2 [i_1] [i_4]))))))));
                            var_27 = min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_1] [i_1])) <= (((/* implicit */int) arr_7 [i_5])))) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_3 + 1])) : (((((/* implicit */_Bool) 5106220247404767254LL)) ? (((/* implicit */int) (short)-27297)) : (((/* implicit */int) (_Bool)1))))))), (((unsigned int) arr_14 [i_3 - 1] [i_3] [i_2] [i_1 + 1] [i_1 + 1] [11LL])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_6 = 2; i_6 < 14; i_6 += 2) 
            {
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (((!(arr_7 [i_6]))) ? (((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_6])) ? (((/* implicit */int) arr_17 [i_6] [i_6] [6LL] [i_6])) : (((/* implicit */int) arr_7 [i_2])))) >> (((((unsigned int) arr_1 [i_6 + 1])) - (3203676642U))))) : ((+(((((/* implicit */_Bool) -4212202128174023847LL)) ? (((/* implicit */int) (unsigned short)59813)) : (((/* implicit */int) (unsigned short)1497)))))))))));
                arr_20 [i_1] [i_2] [i_6] [(signed char)12] = ((/* implicit */unsigned char) arr_14 [i_1] [i_1 + 1] [i_1 + 1] [i_2 - 1] [i_6 + 1] [i_1 + 1]);
                arr_21 [i_1] [(short)4] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [i_6 - 1])))))))));
            }
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [(unsigned short)8]))) <= (arr_15 [i_2 + 1]))) ? (arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_7 + 1] [i_7]) : (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_1] [i_2] [i_1])) / (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_7 + 1])))))))) < (min((((/* implicit */unsigned long long int) arr_18 [i_1 + 1] [i_2 + 1])), (arr_15 [i_1 + 1])))));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_8]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_7] [i_7])) ? (((/* implicit */int) arr_6 [i_8])) : (((/* implicit */int) arr_9 [i_8] [i_2] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_7] [i_7 + 1] [i_7 + 1])) <= (((/* implicit */int) arr_22 [i_7 + 1] [i_7 + 1] [i_7 + 1])))))) : (((unsigned int) 4187332616631817268LL))));
                    var_31 = ((/* implicit */unsigned int) arr_16 [(signed char)14] [i_8]);
                    var_32 = ((/* implicit */signed char) (~(((arr_7 [i_1 + 1]) ? (((int) arr_9 [i_2 - 1] [i_2 - 1] [i_8])) : (((/* implicit */int) arr_0 [i_8]))))));
                    /* LoopSeq 1 */
                    for (short i_9 = 3; i_9 < 14; i_9 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_11 [i_1 + 1] [i_2] [11LL] [i_2 - 1])))));
                        var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_1 + 1] [i_2 + 1] [i_8] [i_9 - 1]))));
                    }
                }
                for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    var_35 = ((/* implicit */unsigned int) ((long long int) (-(((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)8] [i_10]))) : (arr_26 [i_1] [i_1] [i_1 + 1] [i_1 + 1]))))));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_23 [i_10] [i_7 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 1])))))) ? (arr_15 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_29 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])), (arr_2 [i_1 + 1] [i_10])))))));
                    var_37 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (signed char)-31)), (14823456788759777382ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_1 + 1] [i_2 + 1] [i_2 + 1])) ? (arr_30 [i_1 + 1] [i_1] [i_2 - 1]) : (arr_30 [i_1 + 1] [i_1] [i_2 + 1]))))));
                }
                var_38 = ((/* implicit */signed char) arr_16 [i_2] [i_1]);
                arr_32 [i_1] [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_7] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_8 [i_7 + 1] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_8 [i_7] [i_7 + 1] [i_7 + 1])))), ((-(((/* implicit */int) arr_8 [i_7] [i_7 + 1] [i_7 + 1]))))));
            }
        }
        arr_33 [i_1] = ((/* implicit */unsigned char) (~((((+(((/* implicit */int) arr_22 [i_1] [i_1] [i_1])))) / ((~(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1]))))))));
        arr_34 [(short)9] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [10U]))))) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1])) : ((-(((/* implicit */int) arr_19 [i_1] [i_1]))))))));
    }
    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) arr_37 [i_11]))))))));
        var_40 += ((/* implicit */short) ((((arr_38 [i_11]) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) arr_38 [i_11])))) >= (max((((/* implicit */int) ((unsigned char) arr_36 [i_11]))), ((-(((/* implicit */int) arr_36 [i_11]))))))));
    }
}
