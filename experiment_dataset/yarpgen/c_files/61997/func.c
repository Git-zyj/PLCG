/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61997
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
    var_11 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_3 [i_0 + 4] [i_0 + 4] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            var_13 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-1479))))));
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
                        {
                            arr_13 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((max((arr_8 [0] [0] [i_2 + 2] [i_2] [i_2 + 2]), (((/* implicit */unsigned int) var_1)))), (arr_8 [i_4] [i_4] [i_4] [(unsigned short)14] [i_2 - 3])));
                            var_14 = ((/* implicit */unsigned short) arr_12 [i_1 - 1] [i_2] [i_3] [i_4]);
                            var_15 = ((/* implicit */signed char) var_10);
                            var_16 ^= ((/* implicit */_Bool) arr_9 [i_2 - 3] [i_1 - 3] [i_0 - 2] [i_0 + 3]);
                        }
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_5] [i_3] [i_2 - 1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-23974)) % (((/* implicit */int) arr_12 [i_0] [i_1] [1] [i_5]))))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59733)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) : (var_7)))) ? (var_4) : (((((/* implicit */_Bool) arr_2 [i_2] [i_5])) ? (arr_7 [i_5] [i_0 - 2]) : (((/* implicit */unsigned int) 487290183))))))));
                            var_17 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) != (var_8)))))));
                            arr_18 [i_0 - 2] [i_3 - 1] [i_2 + 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */short) (-((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_2 - 3] [i_3 - 1] [i_5]))) >= (arr_8 [i_3] [i_3] [i_2] [i_1 - 2] [i_0 - 3]))))))));
                        }
                        var_18 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1]);
                    }
                } 
            } 
            arr_19 [i_1 - 3] [i_0] = ((/* implicit */signed char) ((short) (unsigned short)65535));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            arr_24 [i_6] [i_6] = ((/* implicit */signed char) (-((~(18446744073709551615ULL)))));
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned int) arr_14 [i_6] [i_6] [i_0] [i_0] [i_0]));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((((/* implicit */unsigned int) var_0)) * (3101250067U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_6]) << (((((/* implicit */int) arr_16 [i_6] [i_0])) - (14927)))))) ? (((((/* implicit */int) arr_16 [i_0] [i_6])) << (((((/* implicit */int) var_9)) - (8800))))) : (((((/* implicit */_Bool) arr_7 [i_0 - 1] [12U])) ? (((/* implicit */int) (short)1470)) : (var_5))))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) arr_14 [i_7] [i_7 + 1] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) var_9))));
            var_22 = ((/* implicit */signed char) var_7);
            var_23 += ((/* implicit */unsigned long long int) arr_7 [(short)2] [i_7 + 2]);
        }
        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            arr_31 [i_8] [i_8] = ((/* implicit */short) (~(arr_28 [i_8])));
            var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 3101250075U)) ? (((/* implicit */int) arr_4 [i_8] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_8] [i_0 + 1])))))) ? ((((-(arr_5 [i_0] [i_8] [i_8]))) >> (min((((/* implicit */unsigned int) arr_16 [i_0] [i_8])), (0U))))) : (((/* implicit */int) arr_0 [i_0]))));
            var_25 = ((/* implicit */int) ((unsigned int) arr_4 [i_0] [i_8] [i_8]));
        }
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_28 [i_9]);
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
        var_27 = ((/* implicit */int) max((var_27), ((~(((/* implicit */int) (short)-1479))))));
        arr_36 [i_9] = ((/* implicit */short) (signed char)-122);
        var_28 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967295U))));
    }
    var_29 = ((/* implicit */long long int) ((signed char) var_5));
    var_30 = ((/* implicit */unsigned long long int) var_9);
}
