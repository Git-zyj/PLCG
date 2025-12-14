/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96888
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)248))));
                    var_20 = ((/* implicit */long long int) 2147483584ULL);
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] [19U] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (signed char)18))))), (((var_14) >> (((arr_6 [(signed char)12] [i_1] [i_2 - 2]) - (3005972563U)))))));
                        var_21 ^= ((/* implicit */_Bool) arr_4 [(_Bool)1]);
                        arr_13 [i_0] [i_1] [(unsigned short)20] = 18302628885633695744ULL;
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_2 - 1] [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 3] [i_3])))))) ? ((~(4721087312189720345ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)211))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 23; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 3) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_0] [20ULL] |= ((/* implicit */int) arr_16 [i_5] [i_4 + 2] [i_4]);
                            var_22 = ((/* implicit */unsigned char) var_14);
                        }
                        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            arr_24 [19] [(unsigned char)4] [i_1] [i_2] [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_6 + 3] [i_6 + 3] [6ULL] [9LL] [i_4 - 2])) > (((/* implicit */int) (unsigned char)243))));
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_4 + 2] [i_4 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 2])) ? (((/* implicit */int) arr_22 [i_4 + 2] [i_4 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) arr_22 [i_4 + 2] [i_4 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 2]))));
                            arr_25 [(short)0] [22ULL] [22ULL] [i_4] [i_4] = ((/* implicit */signed char) var_11);
                            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2 + 3] [i_4] [i_6])) ? (((/* implicit */int) arr_18 [i_6] [i_4] [i_2] [i_1] [20LL])) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) (unsigned char)255)) : (((arr_5 [i_4] [i_6]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_4 - 1] = 16093215068846235876ULL;
                        var_25 &= ((/* implicit */unsigned long long int) ((arr_2 [i_4 + 2]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_4 - 1]))));
                        arr_27 [i_4] &= ((/* implicit */short) ((((/* implicit */int) arr_17 [i_2] [i_2] [i_2 + 1])) >> (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        arr_30 [i_0] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)54524);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_2 + 3] [i_7 + 1] [i_7])) ? (arr_15 [i_0] [i_7 + 2] [i_2] [i_7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2 - 1] [i_7 + 1] [i_2 - 1])))));
                        arr_31 [i_7] [i_2] [i_1] [(_Bool)1] [4LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (2442752289926509194LL) : (((/* implicit */long long int) -1278713343))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))) : (arr_15 [i_0] [i_1] [i_0] [i_0] [i_1])));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_7 + 2] [i_7 + 1])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_7 + 2] [i_2])) : (((/* implicit */int) arr_7 [i_2 + 1] [i_7 + 2] [i_7 + 2])))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_19 [i_0] [i_0] [(signed char)6] [i_0] [i_0]))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_29 [i_2 - 2] [i_2] [(_Bool)1]) : (arr_16 [i_2 - 1] [i_2 - 1] [(signed char)7]))))));
                    }
                    var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)20))))) ? (((((/* implicit */_Bool) arr_33 [i_2] [i_2 + 2] [i_2 + 3] [i_2])) ? (arr_33 [i_2] [i_2 + 1] [i_2 - 1] [i_2]) : (arr_33 [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_33 [i_1] [i_2 - 1] [i_2 + 2] [(unsigned short)22])) ? (arr_33 [i_2] [i_2 + 1] [i_2 + 2] [i_2]) : (arr_33 [i_0] [i_2 - 1] [i_2 - 1] [24])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_31 = ((/* implicit */int) ((short) arr_16 [i_9] [i_9] [i_9]));
        arr_36 [i_9] [4LL] &= ((/* implicit */long long int) ((144115188075855871ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047)))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 23; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (14ULL) : (var_6))))));
                                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_11 - 1] [i_11 + 4] [i_12 + 1])) + (((/* implicit */int) (unsigned char)239)))))));
                                var_34 = ((/* implicit */unsigned int) var_11);
                            }
                        } 
                    } 
                    arr_49 [i_9] [i_10] = ((/* implicit */short) arr_11 [i_11 - 1] [i_11 + 2] [(_Bool)1] [i_11 + 3] [i_11 + 1] [1U]);
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned char) arr_41 [i_9]);
        var_36 = ((/* implicit */unsigned int) arr_11 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    var_37 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)13)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 511LL)))) : (var_11)))));
    var_38 = ((/* implicit */long long int) var_2);
}
