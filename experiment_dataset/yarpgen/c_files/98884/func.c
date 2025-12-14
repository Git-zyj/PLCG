/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98884
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) var_15);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) arr_7 [(signed char)2] [i_3])))))));
                        var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_1] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_2] [i_3] [i_3] [i_2]))))), (arr_1 [i_2 - 1])))), (max((((((/* implicit */unsigned long long int) 6072798687343339915LL)) & (arr_0 [i_3] [i_1]))), (((/* implicit */unsigned long long int) arr_3 [i_2 + 1] [i_3] [i_3]))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1] [i_2 + 1]))));
                        arr_9 [i_0] [i_0] [(_Bool)1] [3LL] [8U] [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [3])) ? (min((((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) arr_3 [(unsigned char)7] [(signed char)2] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_1] [5] [i_1])))), (((/* implicit */int) arr_3 [7] [i_1] [7LL])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2 + 1] [(signed char)6] [i_2 + 1])) < (((/* implicit */int) arr_8 [i_2 + 2] [1] [i_2] [i_2 + 2])))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned int) ((unsigned char) arr_11 [i_4] [(unsigned char)0]));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_11 [i_4] [i_4]))))) ? (((/* implicit */int) min((arr_12 [i_4]), (arr_11 [i_4] [i_4])))) : ((-(((((/* implicit */int) arr_11 [i_4] [i_4])) << (((9908813849437878871ULL) - (9908813849437878854ULL))))))));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 21; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        arr_22 [i_4] [i_5] [(short)5] [i_6] [(unsigned char)19] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)63), (((/* implicit */signed char) arr_18 [i_5 - 3] [i_5 + 1]))))) ? (((/* implicit */int) (!(arr_18 [i_5 - 1] [i_5 - 2])))) : (((((/* implicit */_Bool) arr_21 [i_5 - 2] [i_5 - 3] [i_5] [i_5 - 2])) ? (((/* implicit */int) arr_18 [i_5 + 2] [i_5 + 2])) : (((/* implicit */int) arr_18 [i_5 + 1] [i_5 + 1]))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 + 1] [i_5 + 1]))) - (arr_19 [i_4] [(_Bool)1] [i_4] [(_Bool)1])));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 3; i_8 < 22; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) arr_14 [(unsigned char)17] [3])), (arr_19 [i_4] [i_5 - 3] [i_6] [i_8 - 1]))), (((/* implicit */long long int) var_8))));
                            arr_26 [i_4] [(_Bool)1] [i_6] [i_7] [i_8 + 2] [i_8 - 3] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_11 [i_4] [i_9]))));
                            arr_29 [i_4] [i_4] [(_Bool)1] = ((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4]);
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [(signed char)5] [16] [i_6] [i_6])) && (arr_18 [i_4] [i_4])))), (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_4]))) / (arr_19 [i_4] [i_4] [20LL] [i_4])))))) ? (((/* implicit */int) ((((8537930224271672731ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7]))))) > (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_5] [i_5 + 1])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_7] [i_7])) || (((/* implicit */_Bool) arr_17 [i_5] [15LL] [i_9])))))));
                            arr_30 [(signed char)14] [i_5] [i_5] [(signed char)14] [i_7] [i_9] &= ((/* implicit */signed char) min((((/* implicit */long long int) arr_11 [i_5 + 1] [i_5 + 2])), (((arr_11 [i_5 + 4] [i_5 - 3]) ? (arr_27 [i_5 + 4] [i_5 - 1] [i_5 - 3]) : (((/* implicit */long long int) arr_20 [i_5 + 1] [i_5 + 3] [i_5 + 3] [i_5 + 4]))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */signed char) arr_18 [i_5 - 3] [i_5 + 2]);
                            arr_33 [i_4] [i_4] [i_6] [1U] [1U] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_6] [i_4])) ? (arr_20 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */int) (signed char)-27)))) / ((~(((/* implicit */int) arr_11 [i_4] [i_5])))))), (((/* implicit */int) ((arr_11 [i_4] [8LL]) || (((/* implicit */_Bool) arr_31 [i_4] [i_5 + 2] [i_5] [(signed char)17] [(_Bool)1])))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        arr_38 [i_11] [i_11] |= ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_10 [i_11]))) > (arr_4 [i_11] [i_11])));
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [0LL] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (arr_2 [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_11] [i_11]))))))));
    }
    var_29 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_12) : (((/* implicit */int) (unsigned char)46))))))));
}
