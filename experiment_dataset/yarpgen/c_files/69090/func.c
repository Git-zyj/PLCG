/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69090
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
    var_17 = var_1;
    var_18 |= min((max(((-(14939916769655516819ULL))), (min((5434265661068736761ULL), (((/* implicit */unsigned long long int) var_6)))))), (min((18446744073709551598ULL), (((/* implicit */unsigned long long int) var_13)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 ^= arr_1 [i_0];
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((9518894280852797213ULL), (9970999935218130198ULL)))));
                    var_21 = min((max((((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_0] [i_1] [16ULL])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : (arr_4 [i_0] [i_1] [i_0] [i_1]))))), (min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [1ULL] [i_0])) ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : (arr_7 [i_0] [i_0] [21ULL] [i_0]))), (var_11))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) (((+(16450134841820897123ULL))) & ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (var_15)))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_12 [i_3] = ((((/* implicit */_Bool) 13012478412640814867ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [18ULL])) ? (arr_0 [i_3]) : (var_15)))) ? (((8927849792856754430ULL) - (7664583298667813339ULL))) : (((12443385675783272723ULL) & (arr_7 [i_3] [i_3] [i_3] [i_3]))))) : ((~(max((arr_3 [i_3] [i_3] [i_3]), (16683101358997528806ULL))))));
        arr_13 [i_3] [i_3] = max((min((arr_0 [i_3]), (arr_8 [i_3]))), (((min((var_2), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3])))) ^ (((arr_1 [i_3]) | (var_2))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (arr_0 [i_3])));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
            {
                {
                    arr_19 [i_5] [i_5] = ((((((/* implicit */_Bool) arr_3 [i_4 + 3] [i_4 - 1] [i_5])) ? (arr_3 [i_4 + 3] [i_4 - 4] [i_5]) : (arr_3 [i_4 - 3] [i_4 + 2] [i_5]))) ^ (min((((/* implicit */unsigned long long int) var_6)), ((~(var_8))))));
                    var_24 = min((((((/* implicit */_Bool) arr_10 [6ULL])) ? (arr_0 [i_5]) : (11418806049681574699ULL))), (max((arr_0 [i_5]), (arr_4 [i_5] [i_3] [i_4] [i_3]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_25 = ((/* implicit */long long int) arr_18 [i_6] [14LL] [i_6] [14LL]);
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 4) 
                {
                    {
                        var_26 -= ((((/* implicit */_Bool) arr_0 [i_8])) ? (arr_4 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_9 - 1]) : (((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6] [i_6])) ? (12677279736763284946ULL) : (((/* implicit */unsigned long long int) arr_9 [i_7])))));
                        var_27 ^= arr_3 [i_7] [i_8] [i_6];
                    }
                } 
            } 
        } 
        arr_32 [13ULL] = ((/* implicit */long long int) ((9251612404685166592ULL) >> (((2640113022719818703ULL) - (2640113022719818688ULL)))));
        var_28 = ((((/* implicit */_Bool) var_9)) ? (((13012478412640814855ULL) * (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (arr_18 [i_6] [i_6] [i_6] [12ULL]));
        var_29 = ((((/* implicit */_Bool) arr_24 [i_6])) ? (arr_24 [i_6]) : (arr_24 [i_6]));
    }
    var_30 = ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_16)))))))));
    var_31 = ((((/* implicit */_Bool) var_13)) ? (((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551596ULL) != (18446744073709551612ULL))))))) : (var_2));
}
