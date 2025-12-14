/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67644
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
    var_10 = ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_7);
            arr_5 [i_0] = var_7;
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) 2238621867004602809ULL);
                        arr_16 [i_0] [21U] [21U] [i_4] = ((/* implicit */unsigned short) ((arr_7 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((int) 9710929322598596691ULL)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 24; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) max((var_12), (((long long int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_13 += ((/* implicit */short) arr_3 [i_0] [i_2] [i_7]);
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_25 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 + 1])) : ((-(arr_12 [i_0] [i_2])))));
                            arr_27 [i_6 - 1] [i_2] [i_5] [i_2] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_7] [i_6 + 1] [i_6 + 1] [(unsigned short)6] [i_6 - 2])) >= (((/* implicit */int) arr_24 [(short)11] [i_7] [i_6 + 1] [i_6] [i_6 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 24; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)0));
                            var_16 ^= ((/* implicit */_Bool) arr_12 [i_2] [(unsigned short)20]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_2] [i_0] [i_5])))) || (((/* implicit */_Bool) arr_2 [18LL] [18LL] [18LL]))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_38 [i_11] [i_10] [i_5] [i_2] [i_0]))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((8735814751110954924ULL) > (((/* implicit */unsigned long long int) ((long long int) var_6))))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                arr_41 [i_12] = ((/* implicit */unsigned char) (-(var_3)));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 24; i_13 += 4) 
                {
                    for (short i_14 = 4; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_20 += ((/* implicit */long long int) var_6);
                            arr_47 [i_13 - 1] [i_13 - 1] = ((unsigned long long int) var_2);
                            var_21 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) 1888482469925484521LL)) != (8735814751110954924ULL))));
                            var_22 += ((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_0] [i_0] [i_12] [i_13] [i_14 + 1])) != (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_13 + 1] [i_12] [i_0] [i_0])) || (((/* implicit */_Bool) var_7)))))));
                            arr_48 [i_14] [i_13] [i_12] [i_12] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_12] [i_2] [i_14 - 4] [i_2] [i_13 - 1] [i_12])) ? ((+(arr_42 [i_0] [i_12] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_14 - 4] [i_14] [i_0] [i_12] [i_0] [i_0])))));
                        }
                    } 
                } 
            }
            for (short i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_58 [i_0] [i_17] [i_0] [i_0] [i_17] [i_17] = ((/* implicit */unsigned short) arr_45 [i_0] [i_2] [i_15] [i_16] [i_0]);
                            var_23 += ((/* implicit */long long int) ((arr_10 [(short)19] [i_0] [i_0] [i_0]) > (9710929322598596691ULL)));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) % (arr_29 [i_0] [i_2] [i_15] [i_16] [i_17])));
                            var_25 *= ((/* implicit */signed char) arr_26 [i_15] [i_17]);
                            var_26 = ((/* implicit */unsigned int) ((signed char) arr_34 [i_0] [i_15] [i_16] [i_17]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_18 = 4; i_18 < 23; i_18 += 4) 
                {
                    for (unsigned char i_19 = 2; i_19 < 23; i_19 += 4) 
                    {
                        {
                            var_27 += ((/* implicit */long long int) var_8);
                            arr_65 [i_18] = ((/* implicit */short) arr_33 [i_0] [i_2] [i_2] [i_2] [i_19 - 2]);
                            var_28 = ((/* implicit */int) arr_0 [i_18]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_20 = 2; i_20 < 23; i_20 += 4) 
                {
                    for (signed char i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        {
                            var_29 ^= ((/* implicit */_Bool) ((arr_14 [i_20 - 1] [i_20] [i_20 + 2] [i_20] [i_20]) % (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            arr_74 [21LL] [i_0] [i_2] [13] [i_20] [i_21] = ((/* implicit */int) (-(8735814751110954924ULL)));
                            var_30 += ((unsigned long long int) arr_14 [i_0] [i_2] [i_15] [i_20 + 1] [i_21]);
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) 9710929322598596691ULL);
            }
            var_32 &= ((/* implicit */unsigned char) (+(9710929322598596691ULL)));
            arr_75 [i_2] [15] [15] = ((/* implicit */unsigned char) var_2);
        }
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 25; i_22 += 4) 
        {
            for (int i_23 = 2; i_23 < 24; i_23 += 4) 
            {
                {
                    arr_80 [(_Bool)1] [i_22] [i_23 - 1] = arr_32 [i_0] [i_0] [i_23] [i_23 - 2] [i_23 - 1] [i_23 - 1];
                    arr_81 [i_0] [i_22] = ((/* implicit */short) arr_52 [i_0] [i_0] [i_0] [i_0] [i_23]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned char) arr_35 [i_23 - 1] [i_23 + 1] [i_23 + 1] [i_24]);
                        /* LoopSeq 1 */
                        for (int i_25 = 0; i_25 < 25; i_25 += 4) 
                        {
                            var_34 = ((long long int) arr_50 [i_23 - 2] [i_23 - 1] [i_23 + 1] [i_23 + 1]);
                            var_35 = ((/* implicit */long long int) arr_9 [i_23] [i_24]);
                            arr_88 [i_0] [i_0] [i_0] [i_24] [i_25] &= ((/* implicit */unsigned int) arr_84 [i_0] [i_23 + 1] [i_0]);
                            arr_89 [i_0] [i_22] [i_23] [i_24] [i_25] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20502))) : (arr_42 [i_0] [i_22] [i_24] [i_24]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 4; i_26 < 22; i_26 += 4) 
                    {
                        for (long long int i_27 = 1; i_27 < 23; i_27 += 4) 
                        {
                            {
                                arr_95 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) (~(arr_8 [(_Bool)1] [i_0] [i_23])));
                                arr_96 [(unsigned short)7] [i_26] [i_23] [i_0] [17LL] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_86 [i_27 + 1] [i_22] [i_27 + 1] [i_26 - 3] [i_27] [i_23 - 2] [i_27])) % (((/* implicit */int) arr_86 [i_27 + 2] [i_22] [i_22] [i_26 + 2] [i_27 + 1] [i_23 - 1] [i_26 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_36 = ((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_28 = 3; i_28 < 22; i_28 += 4) 
        {
            for (unsigned long long int i_29 = 0; i_29 < 25; i_29 += 4) 
            {
                {
                    var_37 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_85 [i_0] [i_28 - 1] [i_28 + 2] [i_0] [i_0]))));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_73 [i_29] [i_28] [i_28] [i_29] [i_28 - 2] [i_28] [(_Bool)1])) ? (9710929322598596692ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_0] [i_28 - 2] [i_29] [i_0] [i_28 - 2] [i_29] [i_0])))));
                    var_39 = ((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_29] [i_28 + 1] [i_28 + 3] [i_28 + 1] [i_0])) >= (((/* implicit */int) var_7))));
                }
            } 
        } 
    }
    var_40 = ((/* implicit */signed char) var_8);
    var_41 += ((/* implicit */short) max((((/* implicit */long long int) min((var_6), (((/* implicit */short) var_7))))), (((long long int) var_7))));
}
