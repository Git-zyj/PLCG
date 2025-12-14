/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76503
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
    var_16 = ((/* implicit */unsigned short) ((var_5) % (max((((((/* implicit */int) var_15)) + (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))))));
    var_17 = ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((var_3) + (2147483647))) >> (((((/* implicit */int) var_14)) - (185)))))) : (((((/* implicit */unsigned long long int) var_8)) + (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_5)) : (var_12)))))));
    var_18 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_19 += ((/* implicit */signed char) ((arr_3 [i_3] [i_1] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_0])))));
                        arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_3]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) var_1);
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) var_4)) : (var_12));
            var_22 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_4] [i_4])) << (((var_5) - (1996409096))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_15))));
            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9))))) < (((var_5) / (var_9)))));
        }
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (var_12))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_25 -= ((/* implicit */unsigned long long int) var_6);
        var_26 = ((/* implicit */int) (((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_19 [i_6] [i_6]))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13)))) / (((/* implicit */int) var_14)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                {
                    arr_26 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) var_13)), (arr_5 [i_6] [i_6] [i_6] [i_6]))))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_8])) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_20 [i_7])))))))));
                    arr_27 [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_17 [i_8]);
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) arr_10 [i_6] [i_6] [i_6]);
        var_28 *= ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) var_1)), (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_4 [i_6] [i_6] [i_6]))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned short) (+(arr_30 [i_9])));
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_29 [i_11])) ? (var_7) : (((/* implicit */int) var_11))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) var_13);
                            var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_38 [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (var_10)))) : (((/* implicit */int) arr_35 [i_10] [i_11] [i_13]))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            var_32 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (arr_45 [i_9] [i_9])));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_39 [i_9] [i_11] [i_11] [i_12] [i_14]))));
                        }
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned char) var_10);
        }
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            arr_49 [i_9] [i_15] |= ((/* implicit */unsigned long long int) var_8);
            /* LoopSeq 1 */
            for (unsigned char i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_9])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_16])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_51 [i_9] [i_9] [i_9] [i_9])))))));
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_29 [i_9])) % (((((/* implicit */_Bool) arr_29 [i_16])) ? (var_2) : (((/* implicit */unsigned long long int) var_8)))))))));
                arr_52 [i_9] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) var_1))));
                var_38 = ((((((/* implicit */_Bool) arr_42 [i_9] [i_16] [i_9] [i_9] [i_15] [i_9] [i_16])) ? (arr_29 [i_9]) : (var_4))) * (((((/* implicit */int) var_14)) * (((/* implicit */int) arr_48 [i_9] [i_16])))));
            }
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 3) 
                        {
                            var_39 *= ((/* implicit */unsigned int) var_2);
                            arr_61 [i_18] = ((/* implicit */_Bool) arr_53 [i_9] [i_15] [i_17] [i_9]);
                            var_40 = ((/* implicit */unsigned char) arr_50 [i_9] [i_9]);
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_64 [i_9] [i_9] [i_17] [i_9] [i_20] [i_18] [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_2))));
                            var_41 = ((/* implicit */unsigned int) arr_28 [i_15]);
                            var_42 = (-(var_3));
                            var_43 = ((/* implicit */_Bool) ((var_8) / (((/* implicit */int) arr_51 [i_20] [i_18] [i_17] [i_9]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 0; i_21 < 25; i_21 += 1) 
                        {
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_30 [i_15]))));
                            var_45 = ((/* implicit */unsigned short) var_4);
                            var_46 *= ((/* implicit */unsigned long long int) var_13);
                        }
                        for (int i_22 = 0; i_22 < 25; i_22 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_42 [i_9] [i_18] [i_15] [i_9] [i_9] [i_22] [i_9])) : ((~(var_8)))));
                            var_49 *= ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_13))) / (arr_57 [i_9])));
                        }
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((var_8) - (((/* implicit */int) var_11))))) : ((+(arr_53 [i_15] [i_15] [i_9] [i_9])))));
        }
    }
}
