/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84135
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
    var_15 |= ((/* implicit */int) var_9);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)45765))));
        var_17 *= ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (((arr_8 [i_1] [i_2] [i_3]) ? (((/* implicit */int) arr_8 [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_8 [i_3] [i_2] [i_1]))))));
                    arr_10 [(short)2] [i_2] [(unsigned short)8] [15ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) << (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -3533597629604519433LL)) ? (-483466840) : (arr_4 [i_1]))) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (long long int i_5 = 2; i_5 < 15; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_5 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_13 [10ULL] [10ULL] [10ULL] [i_5 + 1] [i_5 - 1] [10ULL])) : (((/* implicit */int) arr_13 [i_1] [2U] [i_3] [i_5 - 2] [i_5] [i_3]))));
                                var_20 = ((((/* implicit */int) ((unsigned char) (signed char)(-127 - 1)))) + ((-(((/* implicit */int) arr_8 [i_1] [i_2] [(unsigned short)6])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */int) var_12);
        var_22 = ((/* implicit */int) ((arr_13 [(signed char)13] [i_1] [i_1] [0ULL] [i_1] [(signed char)13]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-2180351244561611329LL)));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        var_23 = (~(((/* implicit */int) var_7)));
        var_24 &= ((/* implicit */int) (unsigned char)232);
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)15424)) / (arr_17 [i_6] [1]))) * (((/* implicit */int) ((unsigned char) arr_16 [i_6]))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    var_26 = ((/* implicit */long long int) arr_1 [i_7]);
                    var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_8]))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) arr_23 [(unsigned char)2] [i_8] [i_8]))))))));
                    arr_26 [i_7] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_7]))));
                    arr_27 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) var_9);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_10 = 1; i_10 < 9; i_10 += 4) 
        {
            for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_36 [i_10] = ((/* implicit */int) ((unsigned short) arr_20 [i_7] [i_7]));
                        var_30 |= (unsigned char)94;
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        for (unsigned char i_14 = 2; i_14 < 13; i_14 += 4) 
        {
            {
                arr_42 [i_13] [i_14 + 4] = ((/* implicit */long long int) max((arr_41 [i_14] [i_14 + 2] [i_14 + 3]), (((((/* implicit */_Bool) arr_41 [i_14] [i_14 - 2] [i_14 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_41 [i_14] [i_14 + 3] [i_14 - 2])))));
                var_31 = ((/* implicit */short) var_2);
                var_32 = ((/* implicit */_Bool) var_8);
            }
        } 
    } 
    var_33 = var_7;
}
