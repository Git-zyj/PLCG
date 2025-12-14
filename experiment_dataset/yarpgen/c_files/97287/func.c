/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97287
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
    var_18 = ((/* implicit */short) ((((((/* implicit */int) var_3)) == (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) - (15732653224426906653ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0 + 1])) - (51)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-19181)) : (((/* implicit */int) arr_0 [i_0]))))) : (((unsigned long long int) var_3))))));
    }
    /* LoopSeq 4 */
    for (short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(((/* implicit */int) var_15)))))));
                        var_21 ^= var_16;
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) (short)533);
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_23 = ((/* implicit */short) (+(((/* implicit */int) ((((2714090849282644968ULL) * (arr_3 [(short)15]))) != (2714090849282644944ULL))))));
        var_24 = var_7;
    }
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (((/* implicit */short) arr_15 [i_8])))))) == (min((arr_22 [i_9]), (max((var_11), (((/* implicit */unsigned long long int) var_0))))))));
                        var_26 = ((/* implicit */unsigned char) ((((unsigned long long int) (signed char)-102)) ^ (((((var_8) ? (arr_3 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))))) ^ (((unsigned long long int) arr_21 [i_6] [i_7]))))));
                        var_27 += ((/* implicit */short) (((!(((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) var_13))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */short) var_7);
    }
    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) ((var_0) ? (((((/* implicit */int) arr_30 [i_10])) & (((/* implicit */int) (short)19180)))) : (((((/* implicit */_Bool) arr_12 [i_10] [i_10 + 1])) ? (((/* implicit */int) arr_11 [2ULL] [i_10 - 1] [i_10 + 1] [(unsigned char)20] [i_10] [2ULL])) : (((/* implicit */int) var_4))))));
        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_10 + 1] [i_10 + 1] [i_10 + 1])) ? (arr_8 [i_10 + 1] [i_10] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) > (((arr_8 [i_10 - 1] [i_10 + 1] [i_10 + 1]) & (arr_8 [(_Bool)1] [(unsigned char)20] [i_10])))));
    }
}
