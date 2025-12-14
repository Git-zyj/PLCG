/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73359
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (-(min((2013953573), (((/* implicit */int) (unsigned char)251)))))));
        var_10 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)236)) + (((/* implicit */int) (unsigned char)243))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((long long int) arr_2 [i_0]))))) ? (((/* implicit */int) ((max((-428406901), (((/* implicit */int) (short)29856)))) > (((/* implicit */int) min(((unsigned char)11), ((unsigned char)30))))))) : (((((/* implicit */_Bool) (unsigned short)376)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)31))))));
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)65143)))) : (((/* implicit */int) (unsigned short)5)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236)))))) ? (((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) (unsigned char)30)))))))))));
    }
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (-(((unsigned int) (signed char)63)))))));
    var_13 = ((/* implicit */long long int) max((var_8), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37316)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_9))));
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-5978)))) ? (((/* implicit */int) arr_12 [i_3] [i_1] [i_3])) : (((/* implicit */int) arr_0 [i_1]))));
                    arr_14 [i_3] [12LL] = ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1]))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            arr_29 [i_1] [i_4] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((_Bool) arr_27 [i_1] [7ULL] [i_5] [i_6] [i_7 - 2]));
                            arr_30 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7 + 1])) && (((/* implicit */_Bool) arr_9 [i_7 - 1]))));
                            var_16 -= arr_23 [i_1] [i_1] [i_5] [i_6] [i_7];
                        }
                        var_17 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_0 [i_1])) - (arr_18 [(short)2] [(short)2]))));
                        var_18 = ((/* implicit */long long int) ((unsigned long long int) arr_23 [i_1] [i_4] [i_5] [i_6] [i_6]));
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 3; i_8 < 21; i_8 += 2) 
    {
        arr_33 [(unsigned short)18] &= ((((/* implicit */_Bool) arr_32 [i_8] [i_8])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) max(((unsigned char)34), ((unsigned char)236)))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */int) arr_32 [i_8] [i_8 + 2])));
        arr_34 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)393)) || (((/* implicit */_Bool) arr_31 [i_8])))))))) ? (((((/* implicit */_Bool) (short)0)) ? (max((((/* implicit */unsigned long long int) (signed char)-88)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)87)), ((short)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_8] [i_8 - 3])) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_3)))))))));
        arr_35 [(signed char)2] &= ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) -1102955447)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) arr_31 [10LL])))))), (((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_31 [2ULL])) + (14336))))) & (((/* implicit */int) ((short) var_8)))))));
        arr_36 [i_8] [i_8] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8] [i_8])) ? (((/* implicit */int) arr_31 [i_8])) : (((/* implicit */int) arr_31 [i_8]))))) ? (((/* implicit */int) arr_31 [i_8])) : (((/* implicit */int) arr_31 [i_8])))), (((/* implicit */int) min((arr_31 [i_8]), (arr_32 [i_8 - 3] [i_8 + 2]))))));
    }
}
