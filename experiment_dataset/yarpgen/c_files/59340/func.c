/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59340
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
    var_17 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_16))) ^ (((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (((/* implicit */unsigned int) -1976762850))))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned short) (short)-30856)))));
    var_19 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) var_9);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */long long int) 23U);
                                arr_12 [i_3] [i_3 - 1] [i_3] [i_1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [12LL])))))))))));
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */unsigned int) var_8);
                    var_23 = ((/* implicit */long long int) var_10);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_24 += ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_16 [i_0] [(_Bool)1] [i_6 - 1] [i_5]))) << (((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */int) ((var_16) - (((/* implicit */unsigned int) ((456333754) / (((/* implicit */int) ((signed char) 4294967295U))))))));
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        arr_22 [i_7] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) > (((/* implicit */int) var_0)))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) != (arr_11 [(unsigned short)12] [(unsigned short)12] [(short)3] [i_7] [i_7])))))));
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            arr_26 [i_7] [i_7] = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) ((signed char) 4294967295U))));
            /* LoopSeq 2 */
            for (int i_9 = 2; i_9 < 6; i_9 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    arr_33 [i_7] [i_7] [i_7] [i_7] = 2262438040U;
                    arr_34 [i_7] [i_7] = ((/* implicit */unsigned char) ((_Bool) var_4));
                }
                var_26 = ((/* implicit */signed char) ((unsigned char) arr_13 [i_7]));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (int i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        {
                            var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) 8220660257971015617LL)) : (18446744073709551615ULL)));
                            arr_40 [i_7] [i_8] [i_7] [7LL] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) & (9ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (((((/* implicit */long long int) 4294967289U)) ^ (var_8))))))));
                            arr_41 [i_7] [i_8] [i_9 - 1] [i_9 - 1] [i_12 - 1] = ((/* implicit */long long int) ((((_Bool) -6605436433373484438LL)) || (((/* implicit */_Bool) 0ULL))));
                        }
                    } 
                } 
            }
            for (int i_13 = 2; i_13 < 6; i_13 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 8; i_15 += 2) 
                    {
                        arr_50 [i_7] [i_8] [i_7] [i_7] [i_15 + 1] = ((/* implicit */signed char) var_15);
                        arr_51 [i_13] [i_13] = ((/* implicit */_Bool) ((((unsigned int) -6605436433373484430LL)) << (((((((/* implicit */_Bool) 1942958163U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8]))))) - (4294967282U)))));
                        var_28 = ((/* implicit */long long int) 766992783U);
                    }
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */int) arr_28 [i_13 + 1])) << (((((((arr_8 [i_8] [i_8] [i_13 + 3]) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_7] [(unsigned char)2] [i_7]))))))) + (269LL))) - (13LL))))))));
                    arr_52 [1LL] [1LL] [i_14] = ((/* implicit */_Bool) ((unsigned long long int) 4294967295U));
                    var_30 |= ((/* implicit */unsigned int) ((((7U) != ((((_Bool)1) ? (2262438036U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8]))))))) ? (((/* implicit */int) arr_28 [i_13])) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((unsigned int) (unsigned short)60416))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        arr_55 [i_13] [(_Bool)1] [7U] = ((/* implicit */_Bool) arr_54 [i_16] [i_16] [i_16] [7LL] [i_16]);
                        arr_56 [4] [(unsigned short)8] [i_13 + 4] [i_14] [(unsigned short)8] [i_7] [i_13] = ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -6605436433373484438LL)) && (((/* implicit */_Bool) (short)-4))))) > (((/* implicit */int) (_Bool)0))))));
                        arr_57 [i_7] [(unsigned short)1] [i_13] [0ULL] [i_16] = ((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10755)) >> (((448) - (436)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((6605436433373484437LL) > (-6605436433373484438LL))))) : (((var_9) + (((/* implicit */unsigned int) 2147483647)))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) var_13);
                        var_32 *= ((/* implicit */signed char) ((unsigned short) min((((/* implicit */short) var_2)), (arr_13 [i_13 - 2]))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_62 [i_7] [i_13] [i_14] [i_7] = ((/* implicit */unsigned int) var_13);
                        arr_63 [i_7] [i_8] [1LL] [i_14] [i_18] [i_14] [i_13] = ((/* implicit */long long int) 1179206996);
                    }
                }
                arr_64 [i_7] [i_7] [i_8] [i_13 + 1] = ((/* implicit */int) (short)-2);
            }
        }
        var_33 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) > ((((_Bool)1) ? (((long long int) (signed char)16)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211)))))));
    }
}
