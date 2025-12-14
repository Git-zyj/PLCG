/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69023
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_14 = (-(((unsigned long long int) (+(arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0])) << ((((+(var_9))) + (1065475365)))));
                        var_15 = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_2 [(short)12] [i_0] [i_2]))))));
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_4)) + (arr_7 [i_0] [4] [17U] [i_3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_2]))))))) ? (((long long int) arr_8 [i_1 - 1] [i_0])) : (((/* implicit */long long int) (+(((((/* implicit */int) arr_8 [5LL] [i_0])) + (((/* implicit */int) var_11)))))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_0] [9] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [7] [i_1] [i_4] [i_4 + 1] [i_1] [i_0]), (arr_12 [i_0] [i_1] [i_2] [i_4 + 1] [i_0] [6LL])))) && (((/* implicit */_Bool) min((arr_12 [i_2] [i_1] [i_2] [i_4 + 1] [i_4] [i_4]), (arr_12 [i_1] [i_0] [i_2] [i_4 + 1] [(short)6] [i_0]))))));
                        arr_15 [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((min((var_13), (((/* implicit */int) var_8)))), (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0]))))) > (((max((((/* implicit */unsigned long long int) var_6)), (var_7))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    }
                    arr_16 [i_0] [(signed char)6] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_0]);
                    arr_17 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_1 - 1] [i_0]))))) | (((unsigned long long int) arr_8 [i_0] [i_0]))));
                    arr_18 [(unsigned short)18] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_3 [i_0]))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_0])), (var_6)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) <= (max((arr_4 [i_1 + 2] [5]), (arr_4 [i_1 - 1] [i_1]))));
                    arr_19 [i_0] [11ULL] [i_0] = ((/* implicit */int) ((max((arr_1 [i_0] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_11 [i_0] [(_Bool)1] [i_1] [i_0])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7)))))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) var_3))))))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_24 [i_5] [4LL] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (((((/* implicit */_Bool) ((arr_3 [i_5]) / (((/* implicit */unsigned long long int) arr_22 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_5] [i_5]), ((_Bool)1))))) : (((unsigned int) var_13))))));
        arr_25 [i_5] [i_5] |= ((int) ((var_0) ? (((int) var_0)) : (((/* implicit */int) arr_6 [i_5] [i_5]))));
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_7 [i_5] [i_5] [i_5] [i_5]) << (((arr_23 [i_5]) - (849647171))))) << (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_5])))))))));
    }
    var_17 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) (unsigned short)57861)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551615ULL))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] = ((/* implicit */long long int) var_0);
        arr_30 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2562728535706942554ULL)) && (((/* implicit */_Bool) 0ULL)))))) >= (((((/* implicit */_Bool) arr_12 [16ULL] [5] [15ULL] [i_6] [i_6] [i_6])) ? (arr_27 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [7] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (int i_9 = 4; i_9 < 11; i_9 += 1) 
                {
                    {
                        arr_39 [i_6] [i_6] [3LL] [11] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((unsigned int) var_8)))))) / ((((-(((/* implicit */int) arr_28 [i_8])))) - ((-(arr_36 [i_6] [i_6] [i_7] [i_8] [i_9] [i_9])))))));
                        arr_40 [i_6] [2LL] [i_6] [4] [i_6] [7U] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_12)) && (arr_8 [i_6] [i_6]))), (max((arr_8 [i_7] [i_6]), (arr_8 [i_7] [i_6])))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))) & (1217499254U)));
    }
    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned short) var_12);
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
        {
            arr_47 [i_10] [i_10] [i_10] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_45 [i_10]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_10]))) | (arr_27 [i_10])))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) ((arr_37 [i_11] [0] [i_11] [(signed char)4]) ^ (var_2))))))));
            var_21 = ((/* implicit */unsigned char) max((arr_6 [i_10] [14ULL]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_32 [i_11] [i_10] [10ULL])) < (arr_3 [i_11]))))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 10; i_13 += 1) 
            {
                for (long long int i_14 = 3; i_14 < 9; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_58 [i_10] [i_10] [(_Bool)1] [7] [i_13] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)5277)), (-1955888568)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_53 [i_12] [i_12] [i_13])) / (var_2))) & (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_10] [i_12] [7ULL] [i_14] [i_15] [i_12])))))))) : (((((/* implicit */_Bool) arr_54 [(unsigned char)2] [2] [i_14] [i_15])) ? (arr_1 [i_10] [i_15]) : (((/* implicit */unsigned long long int) arr_22 [i_10]))))));
                            arr_59 [i_12] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_13 - 1] [i_14 - 3] [i_12] [i_14] [i_12])) ? (((/* implicit */long long int) arr_35 [i_14 - 2] [i_14 - 2] [i_13 - 2] [i_13 + 1])) : (((long long int) arr_3 [i_12])))))));
                            arr_60 [2ULL] [i_12] [i_13] [i_13] [i_14] [i_14] [i_13] = ((/* implicit */int) ((unsigned char) var_13));
                        }
                    } 
                } 
            } 
            arr_61 [(unsigned short)11] = ((/* implicit */unsigned int) var_8);
            arr_62 [i_10] [i_12] [i_12] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_10] [i_10] [i_12] [i_12]))))), (var_12)))));
            arr_63 [8LL] [i_12] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) (unsigned char)249)), (5204206516067391765LL))) : (((/* implicit */long long int) min((((/* implicit */int) arr_12 [i_10] [17ULL] [3ULL] [i_10] [i_12] [i_10])), (var_4))))))));
        }
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((-4264696258974044205LL), (((/* implicit */long long int) (_Bool)0))))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_36 [8ULL] [8] [i_10] [i_10] [i_10] [i_10])), (var_2)))), (((((/* implicit */unsigned long long int) arr_2 [i_10] [14] [(unsigned short)2])) | (arr_54 [(_Bool)1] [(unsigned char)10] [i_10] [i_10]))))) : (max((((/* implicit */unsigned long long int) arr_31 [i_10])), (((unsigned long long int) var_13))))));
    }
}
