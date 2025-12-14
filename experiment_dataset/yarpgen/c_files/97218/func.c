/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97218
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61440)) >> (((((((/* implicit */_Bool) (unsigned short)61412)) ? (((/* implicit */int) (unsigned short)4111)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)4085)))))) - (4103)))));
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 4; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_18 [i_6] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((unsigned short) arr_9 [i_6] [(short)8] [i_6] [i_6])), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(unsigned short)7] [21LL] [i_1])) ? (((/* implicit */long long int) arr_11 [i_0] [15] [i_0 + 1] [i_0] [15])) : (1295577896948337577LL)))))));
                                var_14 = ((/* implicit */unsigned int) arr_4 [21U]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((arr_11 [(_Bool)1] [i_7] [i_8] [i_9] [i_9]) ^ (arr_11 [i_7] [i_8] [i_8] [i_8] [i_9])))), (var_1)));
                    var_16 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4136)))))), ((-(var_9))))) % (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_9]))) | (var_8))) * (((/* implicit */unsigned long long int) var_4))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10]))) : (arr_29 [i_10])));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (short i_12 = 3; i_12 < 23; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            {
                                arr_42 [i_11] = ((/* implicit */unsigned long long int) arr_41 [i_10] [i_11] [i_11] [21ULL] [i_13] [2U]);
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10] [i_10] [23U])) ? (var_3) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)4135)))));
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_12] [i_12])) * (((/* implicit */int) arr_39 [i_10] [i_11] [i_13] [i_13]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10]))) & (var_2)))));
                                arr_43 [13U] [i_11] [i_12] [i_11] [13U] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_12 - 1] [i_12] [i_12 - 3] [i_12 - 3] [i_12] [i_12]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_4) + (2147483647))) << (((arr_29 [i_10]) - (701581438U)))))) ? ((~(var_8))) : (var_8)));
                }
            } 
        } 
    }
    for (signed char i_15 = 3; i_15 < 22; i_15 += 3) 
    {
        arr_48 [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned short)4123))) && (((/* implicit */_Bool) var_5))));
        arr_49 [i_15] = ((/* implicit */unsigned int) ((long long int) var_6));
        var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) (unsigned short)61412))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 928797844299412673ULL)) && ((_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_1)))) == ((-(var_0))))))));
    }
    var_22 += ((/* implicit */short) var_0);
    var_23 = ((/* implicit */unsigned long long int) var_1);
}
