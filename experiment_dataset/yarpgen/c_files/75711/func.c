/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75711
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))))) && (((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] [i_3] [i_1 + 1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-123)))) / (((/* implicit */int) arr_11 [i_0] [i_1 + 3] [i_2 + 4] [i_2 + 4]))))) ? (((((/* implicit */int) var_6)) << (((/* implicit */int) arr_11 [i_0] [i_3] [i_1 + 2] [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20134)) + (arr_10 [i_0] [(short)20] [i_2] [i_3])))) < (min((((/* implicit */unsigned long long int) (signed char)125)), (var_4))))))));
                        arr_13 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2119734485), (((/* implicit */int) (unsigned short)37968))))) ? (arr_10 [i_0] [i_0] [i_0] [i_3]) : (min((((((/* implicit */int) (signed char)116)) | (((/* implicit */int) (short)-16893)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_8))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 4) 
        {
            for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_18 [i_4] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (_Bool)1))))) ? (19467265) : (((/* implicit */int) (unsigned short)30117)))));
                    arr_19 [(unsigned char)22] [i_4] [i_4] [i_5] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80))) : (((max((((/* implicit */unsigned long long int) arr_6 [i_5] [i_0])), (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)30075))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)(-32767 - 1)))));
        arr_23 [i_6] [i_6] = 4843816684254575002LL;
    }
    var_13 &= var_3;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))) : (arr_2 [i_7])));
        arr_27 [i_7] = ((((((/* implicit */int) (unsigned char)251)) & (((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) (short)(-32767 - 1))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                {
                    var_14 += (+(((/* implicit */int) arr_5 [i_10] [i_9] [i_9] [i_8])));
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 17; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_11 + 1] [i_11 + 1] [i_10] [i_11]))));
                                var_16 = ((/* implicit */unsigned short) arr_9 [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_10]);
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */signed char) ((long long int) arr_37 [i_9] [i_9] [i_10] [i_10] [i_9]));
                    arr_43 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_8] [i_8] [i_9] [i_9] [i_10])) ^ (((((/* implicit */_Bool) -19467266)) ? (arr_25 [i_10]) : (((/* implicit */int) (short)-32755))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((int) ((int) arr_29 [(_Bool)1] [i_8])));
        var_19 = ((/* implicit */int) min((var_19), (arr_10 [i_8] [i_8] [i_8] [i_8])));
        var_20 = ((var_5) >= (((/* implicit */int) ((unsigned char) arr_42 [(short)12] [i_8]))));
    }
}
