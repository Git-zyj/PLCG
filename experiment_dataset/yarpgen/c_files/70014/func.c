/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70014
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) & (1LL)))));
        var_20 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) arr_1 [i_0])), (max((((/* implicit */int) (unsigned char)8)), (-756267799)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] [0U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) : (var_15)));
            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2])) & (((/* implicit */int) arr_4 [3ULL] [i_1]))))) >= (arr_8 [i_2])));
        }
        for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
        {
            arr_12 [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) - (arr_8 [i_3])))) ? (((-2LL) * (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_14)))))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_20 [i_1] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_19 [8ULL] [i_4] [i_3] [8ULL] [8ULL] [8ULL])))) : (((/* implicit */int) arr_7 [i_3]))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) var_18)) << (((var_17) + (668149224)))));
                        var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_8)) ? (arr_13 [i_3] [(unsigned short)5] [i_4] [i_5]) : (((/* implicit */unsigned long long int) 130816))))));
                    }
                } 
            } 
            var_24 ^= ((((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_1] [i_3])) - (5594))))) != (((((/* implicit */int) arr_7 [4])) << (((((((/* implicit */int) var_11)) + (53))) - (15))))));
        }
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((arr_13 [2U] [8U] [(unsigned char)2] [0U]) << (((((((/* implicit */_Bool) arr_16 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [(unsigned char)3] [(unsigned char)4] [(unsigned char)1])))) - (6496))))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
        var_27 = ((/* implicit */unsigned long long int) var_2);
    }
    var_28 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))) ? (130786) : (((/* implicit */int) min((((/* implicit */unsigned char) var_16)), (var_14))))))));
    var_29 = ((/* implicit */_Bool) min((var_29), ((((+(var_3))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (((var_13) >> (((var_0) - (16477196862158954722ULL))))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (var_17)))))))))));
    var_30 ^= ((/* implicit */_Bool) ((min((((/* implicit */long long int) var_18)), (((((/* implicit */_Bool) 130816)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (28LL))))) - (((/* implicit */long long int) var_8))));
}
