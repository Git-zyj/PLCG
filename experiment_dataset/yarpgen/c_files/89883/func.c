/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89883
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
    var_12 = var_4;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) (signed char)82)) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 1]))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2]))));
        arr_2 [i_0 - 3] [0ULL] &= ((/* implicit */int) (signed char)82);
        var_14 *= ((/* implicit */short) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3465733944228383384ULL))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_10 [i_2 + 1] [i_0] [i_0 + 2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_3 [i_2 - 2] [i_1] [i_2 - 3]))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((arr_5 [i_0 + 1] [i_1] [i_2 - 2]) + (((/* implicit */int) (unsigned char)34)))))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 2]))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 69818988363776ULL)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (unsigned char)136))));
                    arr_11 [i_2 - 3] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) min((min((((((/* implicit */unsigned long long int) 224)) | (arr_3 [i_0 - 2] [i_0 + 1] [i_0 + 1]))), (max((13731004972956770514ULL), (((/* implicit */unsigned long long int) arr_4 [i_2 + 1])))))), (max((max((var_9), (((/* implicit */unsigned long long int) 536869888)))), (((/* implicit */unsigned long long int) (-(arr_9 [i_0 + 1] [i_0 - 2] [i_1] [i_2 - 3]))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) var_4);
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((arr_6 [i_3 - 3] [i_4 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4 + 1] [i_5] [i_6 - 2])))))))))));
                        arr_23 [i_3 - 2] [i_6 - 1] [i_5] [i_6 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (((((/* implicit */_Bool) (unsigned char)221)) ? (((((/* implicit */_Bool) (signed char)121)) ? (17831946849677100911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20068))))) : ((+(18446674254721187839ULL)))))));
                    }
                } 
            } 
        } 
        var_19 = ((((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 3])) ? (var_1) : (((/* implicit */unsigned long long int) arr_9 [i_3 - 2] [i_3 + 2] [i_3 + 2] [i_3 + 1])))) * (min((((/* implicit */unsigned long long int) arr_13 [i_3 + 1] [i_3 + 2])), (var_1))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 4) /* same iter space */
    {
        arr_27 [i_7 + 2] = ((/* implicit */unsigned char) (+(arr_20 [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7 + 2])));
        arr_28 [i_7 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [0ULL] [i_7 - 3] [i_7 - 3] [i_7 - 3])) >> (((((/* implicit */int) (short)-6419)) + (6447)))));
    }
    var_20 *= ((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_11)))) >> (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-27))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)12)), (614797224032450707ULL))))))));
}
