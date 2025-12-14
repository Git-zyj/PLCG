/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69840
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
    var_17 = ((/* implicit */int) max((var_17), ((-((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) > (var_13))))))))));
    var_18 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(signed char)14] [(unsigned char)11])) ? (arr_1 [i_1] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_1])))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)22] [i_0])))) ? (((arr_1 [i_0] [i_2]) >> (((2047) - (1988))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) 2046)))))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_1 [i_0] [i_2]))))));
                    arr_10 [i_0] [i_0] [i_1] = ((/* implicit */int) max((var_14), (((/* implicit */signed char) ((((arr_3 [i_1] [i_1]) ^ (((/* implicit */int) (short)22167)))) == (((((/* implicit */_Bool) -2048)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) arr_7 [3])))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 21; i_3 += 1) 
        {
            var_21 = (((-((~(var_8))))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)6]))))) ? (var_7) : (var_7))) - (7969435798638695077LL))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_21 [i_0] [i_3 - 3] [i_3 - 3] [i_4] [i_5] = ((/* implicit */int) 2948721974U);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 3; i_6 < 22; i_6 += 1) 
                        {
                            arr_26 [i_3] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_3 + 1]))));
                        }
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)54)), (arr_25 [i_0] [i_0])))) >> ((((~(((/* implicit */int) arr_14 [(signed char)9] [i_0] [i_0] [6])))) + (48))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0])) || (((/* implicit */_Bool) arr_13 [i_0])))))));
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((arr_18 [i_7] [i_7] [i_7] [i_7]) >> (((((/* implicit */int) arr_0 [i_7] [i_7])) - (109)))))) : (var_8))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                for (signed char i_10 = 2; i_10 < 20; i_10 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_10] [i_10 - 2] [i_10 + 1] [i_10])) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)118)), (var_0)))) : (arr_42 [12] [i_10 - 2] [i_10 - 2] [i_10] [i_10]))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (short)-22157))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (+(((/* implicit */int) ((arr_39 [i_7] [i_11 + 1] [i_11 + 1] [(unsigned char)14]) >= (((/* implicit */int) arr_28 [i_11 + 1]))))))))));
                        }
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) arr_41 [i_7] [i_8] [i_7] [i_9] [i_9] [i_10])) : (((((/* implicit */_Bool) arr_42 [i_7] [i_8] [(_Bool)1] [i_8] [i_10 - 1])) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_24 [i_9] [i_7] [i_9] [i_7] [i_10 + 2] [i_8] [18])))) : (((/* implicit */long long int) arr_24 [18ULL] [i_7] [i_7] [i_10 + 2] [i_10 - 2] [i_10 + 1] [i_10]))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_10 - 2] [i_9] [i_7] [i_7])) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)22167))) / (arr_12 [i_9]))) >= (var_7)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)233)) != (-2147483642)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_29 = arr_39 [i_7] [i_7] [i_7] [i_13];
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_51 [i_12] [i_7] [1ULL] [13ULL] [i_14] [i_14] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_22 [i_7] [i_12] [i_12] [i_7] [i_7] [i_14])) < (var_6))) || (((arr_22 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) != (arr_22 [i_7] [i_12] [i_13] [i_13] [i_13] [i_14])))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((arr_41 [i_7] [20ULL] [i_13] [i_13] [i_14] [i_14]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_42 [i_14] [i_13] [i_12] [(unsigned short)4] [i_7])) != (-9223372036854775799LL)))) : (((/* implicit */int) arr_15 [(unsigned char)17]))))))))));
                        arr_52 [i_12] = ((/* implicit */signed char) 2147483647);
                    }
                    for (unsigned long long int i_15 = 2; i_15 < 22; i_15 += 3) 
                    {
                        arr_56 [i_13] [i_12] [i_12] [i_13] [i_12] [i_13] = ((/* implicit */unsigned int) arr_11 [i_13] [i_13] [i_13]);
                        var_31 |= ((/* implicit */unsigned char) var_7);
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_12] [i_13] [3])) >> (((2147483647) - (2147483639)))));
                        var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_50 [i_7] [i_12] [i_7])) : ((-(((/* implicit */int) arr_14 [i_7] [i_12] [i_13] [i_7]))))));
                    }
                }
            } 
        } 
    }
}
