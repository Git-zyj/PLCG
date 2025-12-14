/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66786
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
    var_20 = ((/* implicit */unsigned char) 4146149954U);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_14);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            arr_17 [i_0] [5ULL] [i_1] [i_0] [(unsigned short)2] [i_3] [i_1] = ((((/* implicit */_Bool) 8791798054912LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_1])), ((unsigned char)18))))) : (((((/* implicit */_Bool) arr_14 [(signed char)5] [i_1] [i_0] [i_1] [i_1] [(unsigned char)7])) ? (max((arr_13 [i_0] [i_1] [i_1] [i_3] [(unsigned char)13]), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))))));
                            arr_18 [11U] [i_1] [3ULL] [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_1]) / (((/* implicit */int) (_Bool)1))))) / (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (255)))) ^ (((((/* implicit */_Bool) (unsigned short)9051)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                        }
                        arr_19 [(unsigned char)9] [(unsigned char)9] [i_1] [i_1] [(unsigned char)12] = ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_3]));
                        arr_20 [i_1] [(_Bool)0] [i_0] [i_1] [(unsigned char)6] [(unsigned char)7] = ((/* implicit */short) arr_8 [i_1] [6ULL] [i_3]);
                        arr_21 [i_0] [i_0] [i_1] [(signed char)12] [i_0] [i_1] = ((/* implicit */_Bool) ((((((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11823)) ? (((/* implicit */int) var_5)) : (-256)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_3]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (arr_3 [i_1] [i_1])))))) : (((unsigned long long int) (unsigned char)247))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((~(arr_23 [i_6] [i_6]))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_24 [i_5])) : (((/* implicit */int) (unsigned char)26))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_28 [i_5] [i_5])))) ? (((/* implicit */unsigned int) min((-708139854), (((/* implicit */int) (unsigned char)120))))) : (arr_28 [(short)19] [i_5])))) : (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) -249)) : (var_0))) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_5)) + (((/* implicit */int) arr_24 [(short)7]))))))) ? (((((/* implicit */_Bool) ((arr_22 [i_6] [i_8]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_5])))))) ? ((-(4294967295U))) : (((((/* implicit */_Bool) var_19)) ? (arr_33 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                } 
            } 
        } 
        arr_35 [i_5] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_32 [i_5] [i_5] [19] [i_5] [10] [i_5]) : (((/* implicit */int) arr_34 [i_5] [i_5] [i_5] [10ULL] [6ULL] [(unsigned char)7]))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)136)), (arr_25 [i_5] [i_5] [i_5]))) : (((((/* implicit */_Bool) (unsigned short)15634)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5]))))))));
        arr_36 [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_5])) ? (min((arr_31 [i_5] [14LL] [i_5] [i_5] [i_5] [i_5]), (arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [9U]))) : (2147483648U)));
    }
    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        arr_39 [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_9]))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(7408525760157017913LL)))) ? (max((((((/* implicit */unsigned int) var_11)) - (var_19))), (((/* implicit */unsigned int) arr_27 [i_9])))) : (((/* implicit */unsigned int) var_16))));
    }
}
