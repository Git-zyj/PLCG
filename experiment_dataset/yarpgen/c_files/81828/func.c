/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81828
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_2))));
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_20 = ((/* implicit */short) var_15);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_13 [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_2))));
            var_21 ^= ((/* implicit */long long int) var_2);
            arr_14 [3ULL] = ((/* implicit */int) var_15);
            arr_15 [i_1 - 1] |= ((/* implicit */short) var_8);
        }
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            arr_27 [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_7);
                            arr_28 [i_5] [i_3] = min((min((((/* implicit */int) var_0)), (var_4))), (((/* implicit */int) min((var_14), (var_12)))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (var_11)));
                        }
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_9)), (var_16)))), (var_3)));
                            arr_32 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_5] [i_1 - 1] = ((/* implicit */short) min((min((var_13), (var_5))), (min((((/* implicit */unsigned int) var_17)), (var_13)))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 10; i_8 += 3) 
                        {
                            var_24 ^= ((/* implicit */long long int) max((max((((/* implicit */unsigned char) var_9)), (var_17))), (max((var_8), (var_14)))));
                            var_25 -= ((/* implicit */signed char) min((max((var_18), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) max((((/* implicit */short) var_11)), (var_2))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((max((var_6), (((/* implicit */unsigned int) var_0)))), (min((var_13), (var_5))))))));
                            var_27 -= ((/* implicit */unsigned int) var_14);
                            var_28 = ((/* implicit */long long int) max((var_28), (min((-4635500182122005791LL), (((/* implicit */long long int) max((2048), (((/* implicit */int) var_9)))))))));
                        }
                        var_29 = ((/* implicit */int) var_2);
                        arr_35 [i_5] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (max((((/* implicit */unsigned int) var_8)), (var_13)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            arr_39 [i_5] [i_5] = ((/* implicit */unsigned int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)107))));
                            var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_7)), (var_11)))), (max((((/* implicit */unsigned long long int) 2843776216U)), (2097136ULL)))));
                        }
                        arr_40 [i_5] [i_5] = ((/* implicit */signed char) var_8);
                    }
                } 
            } 
        } 
        arr_41 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) var_12))))), (min((((/* implicit */long long int) var_13)), (5711675623389395875LL)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_11 = 2; i_11 < 20; i_11 += 4) 
        {
            for (int i_12 = 1; i_12 < 18; i_12 += 4) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (min((var_16), (min((var_14), (((/* implicit */unsigned char) var_7))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        arr_53 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_1);
                        var_32 = ((/* implicit */unsigned char) max((min((var_18), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) min((var_6), (var_10))))));
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) min((min((var_5), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_1)))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            arr_56 [i_14] = ((/* implicit */_Bool) var_18);
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    {
                        arr_62 [i_10] [i_14] [i_16] = ((/* implicit */int) var_13);
                        arr_63 [i_10] [i_10] [i_10] [i_16] [i_14] = var_12;
                        var_34 ^= var_3;
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            var_35 -= ((/* implicit */unsigned char) var_18);
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 2) 
            {
                for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    {
                        var_36 = ((/* implicit */int) var_6);
                        var_37 = ((/* implicit */unsigned long long int) var_7);
                        /* LoopSeq 2 */
                        for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                        {
                            arr_76 [i_10] [i_17] [i_17] [(short)6] [i_20] = var_16;
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) var_6))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            arr_81 [i_21] [i_10] [i_18] [i_10] [i_10] |= ((/* implicit */unsigned short) var_6);
                            var_39 = ((/* implicit */unsigned short) var_2);
                        }
                    }
                } 
            } 
            arr_82 [i_17] = ((/* implicit */unsigned int) var_9);
            var_40 = ((/* implicit */unsigned long long int) var_15);
        }
    }
    var_41 = ((/* implicit */unsigned char) var_15);
}
