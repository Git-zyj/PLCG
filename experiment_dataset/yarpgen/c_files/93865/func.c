/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93865
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
    var_15 = ((((/* implicit */int) var_4)) + ((+(((/* implicit */int) var_8)))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (1665837869U)))))) && (((/* implicit */_Bool) var_1))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (-1077360720))))));
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_2 [i_1])));
        var_20 = ((/* implicit */unsigned char) arr_3 [i_1]);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) > (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [(unsigned short)15])) : (((/* implicit */int) arr_3 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2] [i_2] = (~(arr_6 [i_2]));
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2]))))) ? ((+(((/* implicit */int) (unsigned short)1789)))) : (((/* implicit */int) arr_3 [i_2])))) >> (((min((((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_6 [i_2])) : (15217014691623905657ULL))), (((/* implicit */unsigned long long int) (-(arr_0 [i_2])))))) - (2777180468ULL)))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (arr_2 [i_2]))) - (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_2]), (((/* implicit */unsigned short) arr_5 [(unsigned short)5])))))))) >> (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_2]))))))))))));
        arr_8 [i_2] = ((/* implicit */unsigned short) max((max((arr_2 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_2 [i_2]))))))), (((((/* implicit */_Bool) ((var_3) ? (-6838815381723840514LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522)))))) ? (max((arr_2 [i_2]), (((/* implicit */unsigned int) arr_1 [5LL] [7U])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_2] [i_2]), ((unsigned short)8531)))))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) (-(max((((((/* implicit */_Bool) 4294967295U)) ? (547374889849224951ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18442832490102547838ULL)))))));
                        var_25 *= ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_1 [i_3] [i_5])))), (((((/* implicit */_Bool) arr_1 [10U] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_11 [i_3] [i_2]) : (arr_11 [i_2] [i_2]))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                {
                    arr_28 [i_8 + 1] = ((/* implicit */unsigned long long int) var_14);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 3; i_10 < 8; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) var_7);
                                var_27 += ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((long long int) var_14)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [(_Bool)1])) || (((/* implicit */_Bool) arr_5 [i_7]))))))));
                                var_28 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_4 [i_7] [i_9])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10 - 1])))))));
                                arr_35 [i_6] [i_7] [i_8 + 1] [i_9] [i_9] [i_9] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6] [i_9] [i_8]))))));
                                var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_6])) ? (((/* implicit */int) arr_20 [i_8] [i_7])) : (((/* implicit */int) var_4)))) * (((/* implicit */int) (unsigned char)229))));
                            }
                        } 
                    } 
                    var_30 ^= ((((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 1] [i_8 - 1])) * (((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 1] [i_8 - 1])));
                }
            } 
        } 
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((/* implicit */int) arr_1 [i_6] [i_6])) : (((/* implicit */int) arr_1 [i_6] [14ULL]))));
        var_32 = ((/* implicit */unsigned short) arr_16 [i_6] [i_6] [i_6] [i_6] [(_Bool)1] [i_6]);
        var_33 = ((/* implicit */unsigned short) arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [2LL]);
    }
}
