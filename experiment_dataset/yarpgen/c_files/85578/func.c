/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85578
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_11 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((var_6), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))))))));
                    var_12 = ((/* implicit */signed char) (+(((((((((/* implicit */int) (signed char)-2)) + (2147483647))) << (((((/* implicit */int) (signed char)6)) - (6))))) + ((-(((/* implicit */int) arr_5 [(signed char)21] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_4])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_4] [i_4] [10]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (arr_12 [i_3 - 1]))))));
                    var_14 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8))))))), (arr_4 [6LL] [i_4 + 2])));
                    arr_16 [i_3 + 1] = var_7;
                    var_15 = ((/* implicit */signed char) var_6);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) var_6);
                                var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_2 [i_6] [i_6])), (arr_20 [i_7] [5LL] [i_6])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((var_8) == (var_6)))))) & (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (int i_8 = 1; i_8 < 19; i_8 += 2) 
    {
        var_19 *= ((/* implicit */_Bool) var_7);
        var_20 = (_Bool)1;
        var_21 *= var_1;
        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (signed char)28)) == (((/* implicit */int) arr_1 [(_Bool)1])))))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_5 [i_8 + 1] [i_8] [4ULL])) <= (((/* implicit */int) var_10))))) & (((/* implicit */int) arr_3 [i_8 + 1] [i_8 + 1] [i_8])))) : (((/* implicit */int) (signed char)1))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((arr_11 [i_9] [(signed char)14] [i_9]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9] [5] [i_9])))));
        arr_26 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) (signed char)30))));
        var_24 = ((_Bool) arr_19 [i_9] [i_9] [i_9] [i_9] [4] [i_9]);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            for (signed char i_11 = 4; i_11 < 11; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_25 = ((/* implicit */signed char) var_10);
                        var_26 = ((/* implicit */long long int) ((((arr_31 [i_11 - 2] [i_11 + 1] [i_11 - 2] [i_11]) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-70)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_1))));
        arr_39 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_13] [i_13] [5LL]))) : (7643211321825505284LL))) * (((/* implicit */long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [12ULL] [(unsigned short)1] [i_13] [(signed char)12]) < (arr_14 [i_13] [i_13] [i_13] [i_13]))))) : (((((((/* implicit */_Bool) (signed char)6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_13]))))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_13])) >= (((/* implicit */int) arr_36 [i_13])))))))));
        var_28 = ((/* implicit */long long int) var_5);
        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((((_Bool)0) ? (-2457551423228436LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)114))))))))));
    }
}
