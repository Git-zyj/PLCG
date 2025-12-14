/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56746
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [(signed char)14] [i_0] [i_1 + 1] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 5289474511359535353ULL)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned short)34661)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_9)) : (var_7)))) ? (((/* implicit */int) (unsigned short)30871)) : (((/* implicit */int) ((unsigned short) var_4)))));
                        arr_13 [i_0] [(signed char)19] [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62970))) : (5289474511359535347ULL)));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((11U) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) var_14)))))) > (((((/* implicit */_Bool) 5289474511359535351ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
                        arr_17 [i_0 - 1] [i_1] [i_2] [i_4] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 + 3])) >> (((var_6) - (2243628480964794499ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) 1097467180U)))));
                        arr_20 [i_1] = ((/* implicit */unsigned long long int) ((signed char) var_7));
                        arr_21 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1 - 1] [i_0 - 1]);
                        arr_22 [i_0] [i_2] [i_1] [i_0] |= ((/* implicit */long long int) arr_11 [i_0] [3] [i_0] [3]);
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_25 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 13157269562350016247ULL)) ? (13157269562350016250ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)50235)) / (((/* implicit */int) (signed char)105)))))));
                            arr_26 [i_2] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_5 - 1] [i_5 - 1]))));
                            arr_27 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)-31019))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_2] [i_2])) : (((/* implicit */int) var_13)))))));
                            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5289474511359535343ULL)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0 - 2] [i_5 - 1] [i_7] [i_5]))));
                        }
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_22 *= ((/* implicit */unsigned long long int) (unsigned short)50222);
                            var_23 = ((/* implicit */unsigned char) (unsigned short)30886);
                        }
                        for (unsigned int i_9 = 4; i_9 < 18; i_9 += 4) 
                        {
                            arr_36 [i_1] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32748))) : (arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 1]));
                            var_24 |= ((/* implicit */int) ((((/* implicit */int) (signed char)14)) != (((/* implicit */int) (unsigned char)246))));
                        }
                    }
                    for (signed char i_10 = 1; i_10 < 17; i_10 += 3) 
                    {
                        arr_39 [i_0 + 2] [i_1] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32748)) || (var_12))))) : (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (unsigned char)163))))) : (((((/* implicit */int) (unsigned short)30872)) >> (((((/* implicit */int) (unsigned short)30863)) - (30832)))))));
                        arr_40 [i_1] [i_1] [i_2] [i_10] = ((/* implicit */_Bool) ((var_3) << (((((((/* implicit */int) var_5)) + (94))) - (24)))));
                    }
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
}
